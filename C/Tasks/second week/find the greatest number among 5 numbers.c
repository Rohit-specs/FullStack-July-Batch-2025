#include <stdio.h>

int main()
{
    int a, b, c, d, e, max;

    printf("Enter 5 numbers:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    max = a;

    if (b > max)
     {
        max = b;
    }
    if (c > max) 
    {
        max = c;
    }
    if (d > max) 
    {
        max = d;
    }
    if (e > max) {
        max = e;
    }

    
    printf("The highest number is: %d\n", max);

    return 0;
}
