#include <stdio.h>
int main()
{
    int evencount=0,oddcount=0;
    for (int i = 1; i <= 199; i++)
    {
        if (i%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("total even no :%d\n",evencount);
    printf("total odd no :%d",oddcount);
    return 0;
}