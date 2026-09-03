#include <stdio.h>
int main()
{
    int num;
    printf("enter any number : ");
    scanf("%d",&num);
    if(num>=0)
    {
        if(num==0)
        {
            printf("entered number is zero");
        }
        else
        {
            printf("entered number is positive");
        }
    }
    else 
    {
        printf("entered number is negetive");
    }
    return 0;
    
}