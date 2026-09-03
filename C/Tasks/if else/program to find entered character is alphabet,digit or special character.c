#include <stdio.h>
int main()
{
    char ch;
    printf("enter any character :");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    {
        printf("entered character is alphabet");
    }
    else if(ch>='0'&&ch<='9')
   {   
     printf("entered character is digit");
   }
   else
   {
       printf("entered character is special character");
   }
    
    return 0;
}
