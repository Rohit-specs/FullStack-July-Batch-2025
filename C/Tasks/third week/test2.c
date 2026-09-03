#include <stdio.h>
int main()
{
    char subject1[10];
    char subject2[10];
    char subject3[10];
    char subject4[10];
    printf("Please enter first subject :");
    scanf(" %[^\n]", &subject1);
    printf("Please enter second subject :");
    scanf(" %[^\n]", &subject2);
    printf("Please enter third subject :");
    scanf(" %[^\n]", &subject3);
    printf("Please enter forth subject :");
    scanf(" %[^\n]", &subject4);
    printf("\n\n\nfirst entered subject :%s\n", subject1);
    printf("second entered subject :%s\n", subject2);
    printf("third entered subject :%s\n", subject3);
    printf("forth entered subject :%s\n", subject4);

    return 0;
}