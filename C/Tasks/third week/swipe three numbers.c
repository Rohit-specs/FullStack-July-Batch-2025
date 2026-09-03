#include <stdio.h>
int main()
{
    int num[3]={3,7,8};
    int num1;
    num1=num[0];
    num[0]=num[1];
    num[1]=num[2];
    num[2]=num1;

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",num[i]);
    }

    return 0;
}