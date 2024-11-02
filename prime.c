#include <stdio.h>

int main()
{
    int n, r, d = 0;
    printf("enter a number to check if its a prime number or not\n");
    scanf("%d", &n);
    for (int i = 1; i != n + 1; i++)
    {
        r = n % i;
        if (r == 0)
        {
            d += 1;
        }
        if (d > 2)
        {
            printf("its not prime");
            break;
        }
    }
    if (d == 2)
    {
        printf("its prime");
    }

    return 0;
}