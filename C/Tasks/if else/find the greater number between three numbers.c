#include <stdio.h>

int main()
{
    int num1,num2,num3;
   printf("enter any three number\n");
   scanf(" %d%d%d",&num1,&num2,&num3);
   if (num1>num2)
   {
       if (num1>num3)
       {
           printf("number1 is greatest");
       }
       else
       {
           printf("number3 is greatest");
       }    
   }
   else
   {
       if(num2>num3)
       {
           printf("number2 is greatest");
       }
   else
   {
       printf("number3 is greatest");
   }
       
       
   }

    return 0;
    

}






