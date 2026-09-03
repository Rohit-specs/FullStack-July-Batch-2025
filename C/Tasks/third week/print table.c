#include <stdio.h>

int main() 
{
    int i,num;
    printf("enter number whose table you want :");
    scanf("%d",&num);
    printf("table of %d is :\n",num);
    for (i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
  
    return 0;
}