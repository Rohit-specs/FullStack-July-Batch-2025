#include <stdio.h>
int main()
{
    printf("Press 1 to add:\nPress 2 to subtract:\nPress 3 for multiplication:\npress 4for division:\nPlease enter any number");
int num;
float num1,num2;
scanf("%d",num);
printf("\nenter number 1: ");
scanf("%f",num1);
printf("\nenter number 2: ");
scanf("%f",num2);
if(num==1){
scanf("%.2f",num1+num2);
}
if(num==2){
scanf("%.2f",num1-num2);
}
if(num==3){
    scanf("%.2f",num1*num2);
}
if(num==4){
    scanf("%.2f",num1/num2);
}

    return 0;
}