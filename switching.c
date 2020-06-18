#include <stdlib.h>
#include <stdio.h>

// Simple program to test a switch function

int menu()
{
    // Declare a variable to store the user's choice
    int choice;

    // Output the menu
    printf("=== Menu ===\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Mac\nWhat is your choice ?\n>>> ");
    
    do
    {
        // Get the user's choice
        scanf("%d", &choice);
        if (choice < 1 || choice > 4)
            printf("Invalid choice, make it again please\n>>> ");
        
    } while (choice < 1 || choice > 4);
    

    return choice;
}

int main()
{

    // Switch through all possibilities and output the user's choice
    switch (menu())
    {
        case 1:
            printf("You've chosen Royal Cheese!");
            break;
        case 2:
            printf("You've chosen Mc Deluxe!");
            break;
        case 3:
            printf("You've chosen Mc Bacon!");
            break;
        case 4:
            printf("You've chosen Big Mac!");
            break;
        default:
            break;
    }

    // Readability blank line
    printf("\n");
    
    return 0;
}