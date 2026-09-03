#include <stdio.h>
// float gst=18;  //global variable
int main()
{
    // shirt bill
    float shirt = 450;
    float shirt1 = 550;
    float shirt2 = 520;
    float shirt3 = 300;
    float sum = shirt + shirt1 + shirt2 + shirt3;
    float gst = 18;
    int no_of_shirt = 4;
    printf("Total no. of shirt %d\n", no_of_shirt);
    char categorie = 's';
    printf("shirt ID %c\n", categorie);
    printf("sum of shirt price without gst is %.2f\n", sum);
    float total_gst = (sum * gst) / 100;
    printf("gst for shirt is %f\n", total_gst);
    float total_Price_of_shirt = total_gst + sum;
    printf("the total price of shirts %f\n\n\n", total_Price_of_shirt);

    // laptop bill
    float laptop = 54000;
    float laptop1 = 45000;
    float laptop2 = 57000;
    float sum1 = laptop1 + laptop2 + laptop;
    int no_of_laptop = 3;
    printf("Total no. of computer %d\n", no_of_laptop);
    char categorie1 = 'L';
    printf("laptop ID %c\n", categorie1);
    printf("Price of laptop without GST %.2f\n", sum1);
    float total_gst_laptop = (sum1 * gst) / 100;
    printf("gst for laptop is %.2f\n", total_gst_laptop);
    float total_Price_of_laptop = total_gst_laptop + sum1;
    printf("the total price of laptop %.2f\n\n\n", total_Price_of_laptop);

    // pant bill
    float pant = 1000;
    float pant1 = 1200;
    float pant2 = 1100;
    float pant3 = 1500;
    int no_of_pant = 4;
    char categorie2 = 'P';
    printf("pant ID %c\n", categorie2);
    printf("Total no. of pant %d\n", no_of_pant);
    float sum2 = pant + pant1 + pant2 + pant3;
    printf("price of Pants Before gst applied %.2f\n",sum2);
    float total_gst_pant = (sum2 * gst) / 100;
    printf("total gst of pant %.2f\n", total_gst_pant);
    float total_price_of_Pant = sum2 + total_gst_pant;
    printf("total price of pant %.2f\n\n\n", total_price_of_Pant);

    // shoes bill
    float shoes = 1200;
    float shoes1 = 900;
    float shoes2 = 1900;
    float shoes3 = 1700;
    int no_of_shoes = 4;
    printf("Total no. of shoes %d\n", no_of_shoes);
    char categorie3 = 'S';
    printf("shoes ID %c\n", categorie3);
    float sum3 = shoes + shoes1 + shoes2 + shoes3;
    printf("price of shoes Before gst applied %.2f\n");
    float total_gst_shoes = (sum3 * gst) / 100;
    printf("total gst of shoes %.2f\n", total_gst_shoes);
    float total_price_of_shoes = sum3 + total_gst_shoes;
    printf("total price of shoes %.2f\n\n\n", total_price_of_shoes);

    // computer tower bill
    float tower = 43000;
    float tower1 = 55000;
    float tower2 = 52000;
    float tower3 = 30000;
    float sum4 = tower + tower1 + tower2 + tower3;
    int no_of_tower = 4;
    printf("Total no. of computer %d\n", no_of_tower);
    char categorie4 = 'l';
    printf("tower ID %c\n", categorie4);
    printf("total price of tower before gst %.2f\n", sum4);
    float total_gst_tower = (sum4 * gst) / 100;
    printf("gst for tower is %.2f\n", total_gst_tower);
    float total_Price_of_tower = total_gst_tower + sum4;
    printf("the total price of tower %.2f\n\n\n", total_Price_of_tower);

    //total bill
    float sum5 = total_Price_of_shirt + total_price_of_Pant + total_gst_laptop + total_Price_of_tower + total_price_of_shoes;
    printf("total money spend %f,\n", sum5);
    return 0;
}