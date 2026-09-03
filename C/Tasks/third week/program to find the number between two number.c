#include <stdio.h>

int main()
{
    int num, start, end;

    printf("Press 1 to get numbers between two numbers\n");
    printf("Press 2 to exit\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Enter the starting number: ");
        scanf("%d", &start);

        printf("Enter the ending number: ");
        scanf("%d", &end);

        printf("Numbers between %d and %d are:\n", start, end);

        if (start <= end)
        {
            for (int i = start; i <= end; i++)
            {
                printf("%d ", i);
            }
        }
        else
        {
            for (int i = start; i >= end; i--)
            {
                printf("%d ", i);
            }
        }

        printf("\n");
    }
    else if (num == 2)
    {
        printf("Exiting program.\n");
    }
    else
    {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
