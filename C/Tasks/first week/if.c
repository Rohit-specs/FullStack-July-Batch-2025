#include <stdio.h>
int main()
{
    printf("Press 1 for multiply:  ");
    printf("\npress 2 for divide:  ");
    printf("\nplease select any number:  ");
    float num;
    float num1;
    float num2;
    scanf(" %f", &num);
    if (num == 1)
    {
        printf("press number1\n");
        scanf("%f", &num1);
        printf("press number2\n");
        scanf("%f", &num2);
        printf("%f", num1 * num2);
    }
    if (num == 2)
    {
        printf("press number1\n");
        scanf("%f", &num1);
        printf("\npress number2\n");
        scanf("%f", &num2);
        printf("%f", num1/num2);
    }

    return 0;
}