#include <stdio.h>

int main()
{
int a;
printf("enter any number :");
scanf("%d",&a);
if (a>0)
{
if (a%2==0)
{
    printf("entered number is even number");
}
else
{
    printf("entered number is odd number");
}
}
else
{
    printf("Invalid number\nPlease enter positive number");
}
    return 0;
    }
