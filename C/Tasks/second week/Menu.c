#include <stdio.h>
int main()
{
    int number;
    float a, b;
    while (1)
    {
        printf("press 1 for addition:\n");
        printf("press 2 for subraction:\n");
        printf("press 3 for multiplication:\n");
        printf("press 4 division:\n");
        printf("press 5 for exit:\n");
        scanf("%d", &number);

        if (number == 1)
        {
            printf("enter number two number: ");
            scanf("%f%f", &a, &b);
            printf("sum= %f", a + b);
        }

        else
        {
            if (number == 2)
            {
                printf("enter number two number: ");
                scanf("%f%f", &a, &b);
                printf("subtraction= %f", a - b);
            }

            else if (number == 3)
            {
                printf("enter number two number: ");
                scanf("%f%f", &a, &b);
                printf("multiplication= %f", a * b);
            }

            else if (number == 4)
            {
                printf("enter number two number: ");
                scanf("%f%f", &a, &b);
                printf("division= %f", a / b);
            }
            else if (number == 5)
            {
                break;
            }
        }
    }

    return 0;
}