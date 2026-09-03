#include <stdio.h>
int main()
{
    int add, subtract, multiply, division, num;
    printf("enter 1 for addition\n");
    printf("enter 2 for subtraction\n");
    printf("enter 3 for multiplication\n");
    printf("enter 4 for division\n");
    printf("enter 5 for exit\n");
    do
    {
        scanf("%d", &num);
        if (num == 1)
        {
            printf("it is a addition function");
        }
        else if (num == 2)
            {
                printf("it is a subtraction function");
            }
            else if (num == 3)
                {
                    printf("it is a multiplication function");
                }
                else if (num == 4)
                {
                    printf("it is a division function");
                }
            
        

    } while (num < 5);

    return 0;
}