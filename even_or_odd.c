#include <stdio.h>

/* 
 * Program that asks the user to enter a number 
 * and returns a string telling if it is even or odd  
 */


int get_num()
{
    printf("Please enter a number : ");
    return scanf("%d");
    
}


char* even_or_odd(int num)
{
    printf("%d is an %s number.\n", num , num % 2 ? "odd" : "even");
}

int main()
{
    even_or_odd( get_num() );
    
    return 0;
}