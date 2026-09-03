#include <stdio.h>

int main()
{
    float shirt;
    float shirt1;
    float shirt2;
    float shirt3;
    printf("\nEnter the price of first shirt:  ");
    scanf("%f", &shirt);
    printf("\nEnter the price of second shirt:  ");
    scanf("%f", &shirt1);
    printf("\nEnter the price of third shirt:  ");
    scanf("%f", &shirt2);
    printf("\nEnter the price of forth shirt:  ");
    scanf("%f", &shirt3);
    float sum = shirt + shirt1 + shirt2 + shirt3;
    printf("%f\n\n", sum);

    printf("/t*******************************************************/t/n");

    // laptop bill
    float laptop;
    float laptop1;
    float laptop2;
    float sum1 = laptop1 + laptop2 + laptop;
    printf("\nEnter the price of first laptop:  ");
    scanf("%f", &laptop);
    printf("\nEnter the price of second laptop:  ");
    scanf("%f", &laptop1);
    printf("\nEnter the price of third laptop:  ");
    scanf("%f", &laptop2);
    printf("%f\n\n", sum1);

    printf("                    *******************************************************                 /n");

      // pant bill
    float pant ;
    float pant1;
    float pant2 ;
    float pant3 ;
    float sum2 = pant + pant1 + pant2 + pant3;
     printf("\nEnter the price of first pant:  ");
    scanf("%f", &pant);
    printf("\nEnter the price of second pant1:  ");
    scanf("%f", &pant1);
    printf("\nEnter the price of third pant2:  ");
    scanf("%f", &pant2);
    printf("\nEnter the price of forth pant3:  ");
    scanf("%f", &pant3);
    printf("%f\n\n", sum2);




    return 0;
}