#include <stdio.h>

int main()
{
    printf("\t*************************SHIRT**************************\t\n");
    float shirt;
    float shirt1;
    float shirt2;
    float shirt3;
    printf("Enter the price of first shirt:  ");
    scanf("%f", &shirt);
    printf("Enter the price of second shirt:  ");
    scanf("%f", &shirt1);
    printf("Enter the price of third shirt:  ");
    scanf("%f", &shirt2);
    printf("Enter the price of forth shirt:  ");
    scanf("%f", &shirt3);
    char category;
    printf("Enter product category:   ");
    scanf(" %c", &category);
    printf("\ncategory: %c\n", category);
    float sum = shirt + shirt1 + shirt2 + shirt3;
    printf("total price of shirt %f\n\n", sum);
    printf("\t*************************LAPTOP**************************\t\n");

    // laptop bill
    float laptop;
    float laptop1;
    float laptop2;
    printf("Enter the price of first laptop:  ");
    scanf(" %f", &laptop);
    printf("Enter the price of second laptop:  ");
    scanf(" %f", &laptop1);
    printf("Enter the price of third laptop:  ");
    scanf(" %f", &laptop2);
    char category1;
    printf("Enter product category:   ");
    scanf(" %c", &category1);
    printf("\ncategory: %c\n", category1);
    float sum1 = laptop1 + laptop2 + laptop;
    printf("total price of laptop %f\n\n", sum1);

    printf("\t***************************PANT**************************\t\n");

    // pant bill
    float pant;
    float pant1;
    float pant2;
    float pant3;
    printf("Enter the price of first pant:  ");
    scanf(" %f", &pant);
    printf("Enter the price of second pant:  ");
    scanf(" %f", &pant1);
    printf("Enter the price of third pant:  ");
    scanf(" %f", &pant2);
    printf("Enter the price of forth pant:  ");
    scanf(" %f", &pant3);
    char category2;
    printf("Enter product category:   ");
    scanf(" %c", &category2);
    printf("\ncategory: %c\n", category2);
    float sum2 = pant + pant1 + pant2 + pant3;
    printf("total price of pant %f\n\n", sum2);

    printf("\t************************REFRIGERSTOR***********************\t\n");

    // Refrigerator
    float refrigerator;
    float refrigerator1;
    float refrigerator2;
    printf("Enter the price of first refrigerator:  ");
    scanf(" %f", &refrigerator);
    printf("Enter the price of second refrigerator:  ");
    scanf(" %f", &refrigerator1);
    printf("Enter the price of third refrigerator:  ");
    scanf(" %f", &refrigerator2);
    char category3;
    printf("Enter product category:   ");
    scanf(" %c", &category3);
    printf("\ncategory: %c\n", category3);
    float sum3 = refrigerator1 + refrigerator2 + refrigerator;
    printf("total price of refrigerator %f\n\n", sum3);

    printf("\t******************************BULB***********************\t\n");

    // bulb
    float bulb;
    float bulb1;
    float bulb2;
    printf("Enter the price of first bulb:  ");
    scanf(" %f", &bulb);
    printf("Enter the price of second bulb:  ");
    scanf(" %f", &bulb1);
    printf("Enter the price of third bulb:  ");
    scanf(" %f", &bulb2);
    char category4;
    printf("Enter product category:   ");
    scanf(" %c", &category4);
    printf("\ncategory: %c\n", category4);
    float sum4 = bulb1 + bulb2 + bulb;
    printf("total price of bulb %f\n\n", sum4);
    printf("\t**********************TOTAL PRICE************************\t\n");
    printf("Total price %f", sum + sum1 + sum2 + sum3 + sum4);
    return 0;
}