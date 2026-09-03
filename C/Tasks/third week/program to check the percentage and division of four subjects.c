#include <stdio.h>
int main()
{
    int number[5], sum=0;
    float percentage;
    printf("enter marks of four subjects :");
    for (int i = 0; i <4; i++)
    {
        scanf("%d", &number[i]);
        sum += number[i];
    }
    percentage = sum / 4; 
    printf("Percentage is: %.2f\n", percentage);
    if (percentage >= 60 && percentage <= 100)
    {
        printf("grade = 'A'");
    }
    else if (percentage >= 45 && percentage <= 59)
    {
        printf("grade='B'");
    }
    else if (percentage >= 33 && percentage <= 44)
    {
        printf("grade = 'C'");
    }
    else
    {
        printf("failed");
    }

    return 0;
}