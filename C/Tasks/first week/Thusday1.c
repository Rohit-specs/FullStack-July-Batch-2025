#include <stdio.h>
int main()
{
    printf("Press 1 to add:\nPress 2 to subtract:\nPress 3 for multiplication:\npress 4for division:\nPlease enter any number: ");
    float num, num1, num2;
    scanf("%f", &num);
    printf("\nenter number 1: ");
    scanf("%f", &num1);
    printf("\nenter number 2: ");
    scanf("%f", &num2);
    if (num == 1)
    {
        printf("Sum of numbers: %.2f", num1 + num2);
    }
    if (num == 2)
    {
        printf("Subtract of numbers: %.2f", num1 - num2);
    }
    if (num == 3)
    {
        printf("Product of numbers: %.2f", num1 * num2);
    }
    if (num == 4)
    {
        printf("Division of numbers: %.2f", num1 / num2);
    }

    return 0;
}
