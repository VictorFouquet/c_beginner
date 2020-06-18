#include <stdio.h>
#include <stdlib.h>

// Function prototypes

void outputArray(int *ar, size_t len);
int sum(int *ar, size_t len);
double average(int *ar, size_t len);
void copy(int *ar, int *arCopy, size_t len);
void sort(int *ar, size_t len);
void max(int *ar, int maxVal, size_t len);

// Test all the functions from main
int main()
{
    int ar[5] = { 5, 2, 3, 1, 4};
    int arCopy[5];
    size_t len = sizeof(ar)/sizeof(ar[0]);
    
    printf("\nOriginal declared array is : ");
    outputArray(ar, len);

    printf("Sum of values contained in array is %d\n\n", sum(ar, len));
    
    printf("Average value of array is %f\n\n", average(ar, len));
    
    copy(ar, arCopy, len);
    printf("Here's a copy of original array : ");
    outputArray(arCopy, len);

    sort(arCopy, len);
    printf("Here's the sorted copy : ");
    outputArray(arCopy, len);

    max(arCopy, 3, len);
    printf("Set copied array's values greater than 3 to 0 : ");
    outputArray(arCopy, len);

    return 0;
}

// Function that loops through a given array to output each one of its values
void outputArray(int *ar, size_t len)
{
    printf("{ ");
    for (int i = 0; i < len; i++)
    {
        printf("% d,", ar[i]);
    }
    printf(" }\n\n");
}

// Function that sums the values contained in a given array
int sum(int *ar, size_t len)
{
    int total = 0;

    for (int i = 0; i < len; i++)
    {
        total += ar[i];
    }

    return total;
}

// Function that computes the average value of an array 
double average(int *ar, size_t len)
{
    double avg = 0.0;
    for (int i = 0; i < len; i++)
    {
        avg += ar[i];
    }

    return avg / len;
}

// Function that copies the content of an array into another one
void copy(int *ar, int *arCopy, size_t len)
{
    for (int i = 0; i < len; i++)
    {
        arCopy[i] = ar[i];
    }
}

// Function that sorts an array using insertion sort algorithm
void sort(int *ar, size_t len)
{
    int j, tmp;

    for (int i = 1; i < len; i++)
    {
        j = i;
        while (j - 1 >= 0 && ar[j-1] > ar[j])
        {
            tmp = ar[j];
            ar[j] = ar[j-1];
            ar[j-1] = tmp;
            j--;
        }
    }
}

// Function that sets any value in a given array greater than a given max value to zero
void max(int *ar, int maxVal, size_t len)
{
    for (int i = 0; i < len; i++)
    {
        if (ar[i] > maxVal)
            ar[i] = 0;
    }
}