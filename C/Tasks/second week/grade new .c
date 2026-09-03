#include <stdio.h>
int main()
{
    char code;
    int english, maths, science;
    float percentage;
    printf("enter student code  :");
    scanf("%c", &code);
    printf("enter english marks :\n");
    printf("enter maths marks :\n");
    printf("enter science marks :\n");
    scanf("%d",&english);
    scanf("%d",&maths);
    scanf("%d",&science);
    
    
    if(english>0&&english<100)
    {
        printf("\nenglish marks :%d",english);
    }
    else 
    {
        printf("\nPlease enter valid marks");
    }
     if(maths>0&&maths<100)
    {
        printf("\nmaths marks :%d",maths);
    }
    else 
    {
        printf("\nPlease enter valid marks");
    }
     if(science>=0&&science<=100)
    {
        printf("\nscience marks :%d",science);
    }
    else 
    {
        printf("\nPlease enter valid marks");
    }    
    
    percentage = (english + maths + science) /3;
    if (percentage < 33)
    {
        printf("\nyou are failed");
    }
    else
    {
        if (percentage > 60)
        {
            printf("you got grade : A");
        }
        else
        {
            if (percentage > 45)
            {
                printf("you got grade : B");
            }
            else
            {
                if (percentage > 33)
                {
                    printf("you got grade :C ");
                }
            }
        }
    }
    printf("\nyour student code is : %c", code);
    printf("\nthe percentage is : %f",percentage);

    return 0;
}






