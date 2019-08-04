#include "../../my_libs/mx_printchar.c"
#include <stdio.h>

void mx_printint(int n)
{
    if (n == 0)
    {
        mx_printchar('0' + n);
        return;
    }

    if (n < 0)
    {
        n = n * -1;
    }
    
    int devider = 1;

    while (n / devider != 0 && devider != 1000000000)
    {
        devider = devider * 10;
    }

    while (devider != 0)
    {
        int i = n / devider;
        
        if (i >= 10)
        {
            i = i % 10;
        }
        mx_printchar('0' + i);
        devider = devider / 10;
    }
}

int main()
{
    mx_printint(1234567890);
    return 0;
}