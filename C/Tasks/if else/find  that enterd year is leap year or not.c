#include <stdio.h>

int main()
{
int year;
printf("enter a year:");
scanf("%d",&year);
if (year%4==0)
{
    printf("enterd year is leap year");
}
else
{
    printf("enterd year is not a leap year");
}
    return 0;
    

}