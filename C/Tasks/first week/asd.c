#include <stdio.h>
int main()
{
    float shirt_price = 450;
    float cargo_pant_price = 900;
    float tshirt_price = 350;
    float shoes_price = 1000;
    float belt_price = 180;
    float sum = shirt_price + cargo_pant_price + tshirt_price + shoes_price + belt_price;
    printf("sum\n%f\n ",sum);
    float gst = 18;
    float total_gst = (sum*gst)/100;
    printf("total gst \n%f\n ",total_gst);
    float total_Bill=(total_gst+sum);
    printf("total bill is \n%f",total_Bill);
    return 0;
}