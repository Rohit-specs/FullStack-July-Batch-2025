#include <stdio.h>
int main()
{
    char ch = 'a';
    int num = 1;
    while (ch <= 'z')
    {
        printf("%c - %d\n",ch,num);
        ch++;
        num++;
    }

    return 0;
}