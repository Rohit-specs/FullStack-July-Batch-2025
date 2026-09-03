#include <stdio.h>
int main()
{
    char code;
    int english, maths, science;
    float percentage;
    printf("enter student code  :");
    scanf("%c", &code);
    
    printf("enter english marks  :");
    scanf("%d", &english);
    }
    if(english>0&&100>english)
    {
        scanf("%d",&english);
        
    }
    else{
        printf("invalid number");
    }
    printf("enter maths marks  :");
    scanf("%d", &maths);
    
    if(math>0&&100>maths)
    {
        scanf("%d",&math);
        
    }
    else{
        printf("invalid number");
    }
    printf("enter science marks  :");
    scanf("%d",&science);
    
    if(science>0&&100>science)
    {
        scanf("%d",&science);
        
    }
    else{
        printf("invalid number");
    }
    
    // printf("enter english marks  :");
    // scanf("%d", &english);
    
    // printf("enter maths marks  :");
    // scanf("%d", &maths);
    
    
    // printf("enter science marks  :");
    // scanf("%d", &science);
    
    
    
    
    
    
    
    
    


    percentage = (english + maths + science) /3;
    if (percentage < 33)
    {
        printf("you are failed");
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
    printf("\n your student code is : %c", code);
    printf("the percentage is : %f",percentage);

    return 0;
}