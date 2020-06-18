#include <stdio.h>
#include <stdlib.h>

// This is called a prototype, we write it so that the order of function declarations no longer matters
void updateVariables(int *agePointer, double *heightPointer);

int main()
{
    int age = 10;

    // The * indicates that we are declaring a pointer
    int *agePointer; 

    // We store in agePointer the adress of the "age" variable
    agePointer = &age;

    printf("\nThe variable \"age\" has a value of : %d\n", age);

    // The symbol to directly output an adress is %p and the variable name must have the & symbol before itself
    printf("The adress of the variable \"age\" is   : %p\n", &age);

    // As agePointer actually is a pointer, we don't need the & symbol to output it
    printf("It's efficiently stored in agePointer : %p\n", agePointer);

    // We can also output the adress of a pointer and this time we do need the & symbol
    printf("And the adress of the agePointer is   : %p\n", &agePointer);

    // Now let's access the value that agePointer is pointing to by using the * symbol before it
    printf("The value agePointer is pointing to is : %d\n\n", *agePointer);



    // Note that the type of the pointer must be the same as the variable it points to
    double height = 1.70;
    double *heightPointer = &height;

    printf("The variable \"height\" has a value of : %f\n", *heightPointer);
    printf("The adress of the variable \"height\" is : %p\n\n", heightPointer);

    // Here's a current use of pointers, we can update variables contained in main
    // from another function without any return in it

    printf("Now we'll update these variables' values by passing \
their respective pointers to another function !\n\n");

    updateVariables(agePointer, heightPointer);

    printf("The updated value of \"age\" mulitplied by 2 is : %d\n", age);
    printf("The updated value of \"height\" divided by 2 is : %f\n\n", height);
    
    return 0; 

}

void updateVariables(int *agePointer, double *heightPointer)
{
    // As we receive pointers as arguments, we can update from here
    // the values of the variables they point to

    *agePointer *= 2;
    *heightPointer /= 2;

}