#include <stdio.h>

int mx_max(int a, int b, int c)
{
    if (a > b || c > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        return b;
    }
}

int main()
{
    printf("%d\n", mx_max(0, 2, 4));
    return 0;
}