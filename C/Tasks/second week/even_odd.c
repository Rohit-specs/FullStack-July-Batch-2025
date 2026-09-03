#include <stdio.h>

int main() 
{
    int num, i;
    int total_even_number = 0, total_odd_number = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) 
    {
        if (i % 2 == 0) 
        {
            total_even_number++;
        } 
        else 
        {
            total_odd_number++;
        }
    }

    printf("\nTotal even numbers from 1 to %d: %d", num, total_even_number);
    printf("\nTotal odd numbers from 1 to %d: %d", num, total_odd_number);

    return 0;
}