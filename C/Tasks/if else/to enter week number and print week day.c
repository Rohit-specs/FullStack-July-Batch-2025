#include <stdio.h>
int main ()
{
    int num;
    printf("Please enter any number between 1 to 7 : ");
    scanf("%d",&num);
    if(num>=8||num<=0)
    {
        printf("Invalid number\nPlease try number between 1 to 7");
    }
    else
    {
        if(num==1)
        printf("sunday");
        else if(num==2)
        {
            printf("monday");
        }
         else if(num==3)
        {
            printf("tuesday");
        } else if(num==4)
        {
            printf("wednesday");
        } else if(num==5)
        {
            printf("thusday");
        } else if(num==6)
        {
            printf("friday");
        } else if(num==7)
        {
            printf("saturday");
        }
    }   
    return 0;
}



