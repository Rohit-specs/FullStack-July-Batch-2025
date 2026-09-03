#include <stdio.h>

int main()
{
    int age;
    char name;
    printf("Please enter a age: ");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("you are eligible for voting");
        if (age>18)
           { printf("\nenter your name\n");
            scanf("%c", &name);}
    }
    else
    {
        printf("you are not eligible for voting");
    }

    return 0;
}
