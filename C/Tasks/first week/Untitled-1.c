#include <stdio.h>

int main()
{
    int number;
    printf("Please enter any number: \n");
    scanf("%d", &number);

    if (number < 0)

    {
        if (number % 2 == 0)
        {
            printf("This is Even Number ");
            
            if (number < 10)
                printf("the number is smaller than 10");
            
            else
                printf("the number is greater than 10");
        }

        {
        }
        else
        {
            printf("This is Odd Number ");
        }
    }
    else
        printf("invalid number\n This number is negetive");

    return 0;
}
