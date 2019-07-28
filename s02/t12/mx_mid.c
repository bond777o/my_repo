#include <stdio.h>

int mx_mid(int a, int b, int c)
{
    if ((a > b && b > c) || (c > b && b > a))
    {
        return b;
    }
    else
    {
        if ((b > a && a > c) || (c > a && a >b))
        {
            return a;
        }
        else
        {
            return c;
        }
    }    
}

int main()
{
    printf("%d\n", mx_mid(2, 4, 6));
    return 0;
}