#include <stdio.h>
#include <stdlib.h>

void addInt()
{

    /* When scanning for an int, if a float is given instead, 
    the float will automatically get floored */

    /* Note it's possible to declare several variables at the same time */
    int num1, num2;

    printf("We'll add two integers :\n");
    printf("Enter the first value:\n");

    /* Note that the & symbol represents a pointer */
    scanf("%d", &num1);

    printf("\nEnter the second value:\n");

    /* Note that the & symbol represents a pointer */
    scanf("%d", &num2);
    
    
    printf("\n%d + %d = %d\n", num1 , num2 , num1+num2);

}

void addDouble()
{
    /* When scanning for an double/float, if an int is given instead, 
    the int will automatically get converted to a decimal */

    double num1, num2;

    printf("\nNow let's add two decimals !\n");

    /* Note that we use %lf identifier when scanning and %f when printing */

    printf("Enter first float value :\n");
    scanf("%lf", &num1);

    printf("\nEnter second float value :\n");
    scanf("%lf", &num2);

    printf("%f + %f = %f\n", num1, num2, num1+num2);

}

void myChar()
{
    
    char favChar;

    printf("\nWhat is your favorite letter ?\n");

    /* Note the empty space befor the identifier, if not there, the programme will
    consider the previous ENTER key press */

    scanf(" %c", &favChar);

    printf("Oh that's funny, %c is my favorite letter too !\n", favChar);

}

void firstName()
{
    char name[20];
    printf("\nBy the way, what's your first name ?\n");

    /* Note we don't need a pointer when scanning for a char array */
    scanf("%s", name);

    printf("\nI sware %s is the most beautiful name on Earth!\n", name);

}

int main()
{
    
    printf("\nThis is an interactive program!\n\n");

    addInt();

    addDouble();

    myChar();

    firstName();

    return 0;

}