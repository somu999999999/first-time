#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int p, i = 1;
    srand(time(0));
    int n = rand() % 100 + 1;
    for (i; i; i++)
    {
        printf("predict the number (1~100)\n");
        scanf("%d", &p);
        if (p == n)
        {
            printf("congratulations...!! you prediction is correct\n");
            break;
        }
        else if (abs(p - n) == 1)
        {
            printf(" the number is %d plus or minus 1\n", p);
            continue;
        }
        else if (abs(p - n) > 1 && abs(p - n) <= 5)
        {
            printf("the number is %d plus or minus 2 ~ 5\n", p);
            continue;
        }
        else if (abs(p - n) > 5 && abs(p - n) <= 10)
        {
            printf("the number is %d plus or minus 6~10", p);
            continue;
        }
        else if (abs(p - n) > 10 && abs(p - n) <= 20)
        {
            printf("the numbe is %d plus or minus 11~20", p);
            continue;
        }
        else if (abs(p - n) > 20 && abs(p - n) <= 40)
        {
            printf("the number is %d plus or minus 21~40", p);
            continue;
        }
        else if (abs(p - n) > 40 && abs(p - n) <= 80)
        {
            printf("the number is %d plus or minus 41 ~80", p);
            continue;
        }
        else if (abs(p - n) > 80 && abs(p - n) <= 99)
        {
            printf("the number is %d plus or minus 81~99", p);
            continue;
        }
    }
    if (i < 4)
    {
        for (int r = 0; r != 10; r++)
        {
            printf("yor the goat......!!!!!!!\n");
        }
    }
    else if (i > 8)
    {
        printf("your dumb as fuckk...!");
    }
    else if (i > 3 && i < 9)
    {
        printf("number of attempts is = %d", i);
    }
}