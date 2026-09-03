#include <stdio.h>
int main()
{
    int num[2]={3,7};
    int num1;
    num1=num[0];
    num[0]=num[1];
    num[1]=num1;
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}
