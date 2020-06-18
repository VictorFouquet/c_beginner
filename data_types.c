#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /* Numbers */

    int age = 24;
    double height = 1.77;
    float weight = 55.5;


    /* Text */
    
    /* Note that char without the brackets can only receive one letter */
    char grade = 'A';

    /* Being considered an array, note that the variable cannot be changed */
    char name[] = "John";

    printf("Hi my name is %s, I'm %d!\n", name, age);
    printf("I'm %f m tall and I weigh %f kg\n", height, weight);
    printf("I've graded %c!\n", grade);

    return 0;

}