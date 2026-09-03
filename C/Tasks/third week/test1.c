#include <stdio.h>
int main()
{
    char name[5];
    int vowel=0,j;
    printf("Enter your name :");
    scanf("%s",&name);
    for ( j=0;j<5;j++)
    {

        if (name[j] == 'a' || name[j] == 'e' || name[j] == 'i' || name[j] == 'o' || name[j] == 'u' || name[j] == 'A' || name[j] == 'E' || name[j] == 'I' || name[j] == 'O' || name[j] == 'U')
        {
            vowel = 1;
        }
       
    }

    if(vowel==1)
    {

        printf("match");
    }

    return 0;
}