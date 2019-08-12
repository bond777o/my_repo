#include "mx_printchar.c"

void mx_printint(int n)
{
    if (n > 9)
    {
        mx_printint(n / 10);
        n = n % 10;
    }
    mx_printchar('0' + n);
}