#include <stdio.h>

int main()
{
    int a,b,c;
    b=5;
    c=11;
    printf("enter a number to check the divisibility with 5 and 11:\n");
    scanf("%d",&a);
    if(a%5==0)
    {
        if (a%11==0)
        {
            printf("entered number is divisible by 5 and 11");
        }
        else
        {
            printf("entered number is divisible by 5");
        }
    }
    else
    {
        if (a%11==0)
        {
            printf("entered number is divisible by 11");
        }
        else
        {
            printf("entered number is not divisible by 5 and 11");
        }
    }
    return 0;
    

}
