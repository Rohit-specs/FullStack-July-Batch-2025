#include <stdio.h>

int main()
{
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    if (number > 0)
    {
        if (number % 2 == 0)
        {
            printf("The number is even. ");

            if (number > 10)
            {
                printf("It is greater than 10\n");
            }
            else
            {
                printf("It is not greater than 10 \n");
            }
        }
        else
        {
            printf("The number is not even.\n");
        }
    }

        return 0;
    }
