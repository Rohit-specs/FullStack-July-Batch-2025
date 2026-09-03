#include <stdio.h>

int main()
{
    int array[999];
    int num, i, j, duplicate;
    printf("enter upper limit of array:\n");
    scanf("%d", &num);
    printf("enter the value in array :");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < num; i++)
    {
        duplicate = 0;

        for (j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate)
        {
            printf("%d", array[i]);
        }
    }
    return 0;
}