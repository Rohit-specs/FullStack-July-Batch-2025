#include <stdio.h>
int main()
{
    int health;
    printf("Enter the health level between the range 0-100: ");
    scanf("%d", &health);
    // if (health >= 0)
    // {
    //     if (health == 100)
    //     {
    //         printf("you are in prefect health,a true warrior");
    //     }
    //     if (health = 80 <= 99)
    //     {
    //         printf("you are slightly bruished, but strong");
    //     }
    //      if (health = 50 <= 79 )
    //     {
    //         printf("you have taken some hits,Rest is advised");
    //     }
    //      if (health = 20 <= 49)
    //     {
    //         printf("you are badly hurt seek healing immediately!");
    //     }
    //      if (health = 1 <= 19)
    //     {
    //         printf("you are barely alive!, This is critical");
    //     }
    //     if (health == 0)
    //     {
    //         printf("you have fallen in battle. Game over");
    //     }
    // }
    // else
    // {
    //     printf("invalid health\n enter between 0 to 100");
    // }
    if (health < 0)
    {
        printf("invalid health\n enter between 0 to 100");
    }
    else
    {
        if (health >= 0)
        {
            if (health == 100)
            {
                printf("you are in prefect health,a true warrior");
            }
            else if (health >= 80)
            {
                printf("you are slightly bruished, but strong");
            }
            else
            {
                if (health >= 50)
                {
                    printf("you have taken some hits,Rest is advised");
                }
                else
                {
                    if (health >= 20)
                    {
                        printf("you are badly hurt seek healing immediately!");
                    }
                   else 
                   {if (health >= 1)
                                    {
                                        printf("you are barely alive!, This is critical");
                                    }
                                    else 
                                    {if (health == 0)
                                    {
                                        printf("you have fallen in battle. Game over");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        
    return 0;
                }
                