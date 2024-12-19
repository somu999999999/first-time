#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d", &n);
    int p[2 * n - 1][2 * n - 1];
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            for (int a = 0; a < n; a++)
            {
                if (i == 0 + a || i == 2 * n - 2 - a || j == 0 + a || j == 2 * n - 2 - a)
                {
                    p[i][j] = n - a;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            printf("%2d", p[i][j]);
        }
        printf("\n");
    }
}