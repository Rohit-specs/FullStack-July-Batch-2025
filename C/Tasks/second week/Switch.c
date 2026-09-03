# include <stdio.h>
int main()
{
    int number;
    printf("Enter any number between 0 to 6 :");
    scanf("%d",&number);
    switch (number)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;    
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thusday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;   
    default:
        printf("Please enter a valid number");
        break;
    }
    return 0;
}
