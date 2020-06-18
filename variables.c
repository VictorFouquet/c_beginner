#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char characterName [] = "Victor";
    int characterAge = 31;

    /* Use %s to concatenate a string variable */
    printf("Hello, my name is %s.\n", characterName);
    
    /* Use %d to concatenate an integer variable */
    printf("I am %d years old.\n", characterAge);

    return 0;
}