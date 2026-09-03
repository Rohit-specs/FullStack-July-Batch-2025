#include <stdio.h>
int main ()
{
    char ch;
    printf("enter any character :");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("entered character is in lowercase");
    }
    else
    {
        printf("entered character is in uppercase");
    }
    return 0;
}
