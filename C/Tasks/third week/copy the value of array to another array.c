#include <stdio.h>
int main()
{
    int num[5];
    int newnum[5];
    printf("enter five number\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",& num[i]);
        newnum[i]=num[i];
    }
    printf("the value in new array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",newnum[i]);
    }
    

    return 0;
}