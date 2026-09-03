#include <stdio.h>
int main()
{
    int num, num1, num2, num3, num4, find;
    printf("enter any five number:\n ");
    scanf("%d%d%d%d%d", &num, &num1, &num2, &num3, &num4);

    /*printf("%d"\n,num);
    printf("%d"\n,num4);*/
    printf("press 1 to know the first entered number:\npress 2 to know the last entered number:\n");
    scanf("%d", &find);
    /*if (find==1)
    {
        printf("first number is :%d",num);
    }
    if (find==2)
    {
        printf("last number is :%d",num4);
    }*/
    if (find == 1)
    {
        printf("first number is :%d", num);
    }
    else
    {
        if (find == 2)
        {
            printf("last number is :%d", num4);
        }
        else
        {
            printf("Invalid number\n Please try again with 1 and 2");
        }
    }
    return 0;
}
