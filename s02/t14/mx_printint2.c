#include "../../my_libs/mx_printchar.c"
#include <stdio.h>

void mx_printint_h(int n)
{
    if (n == 0)
    {
        mx_printchar('0' + n);
        return;
    }

    char s[10];
    int i = 0;
    for (; n != 0; i++)
    {
        s[i] = n % 10;
        n = n / 10;
    }
    i--;
    for (; i >= 0; i--)
    {
        mx_printchar('0' + s[i]);
    }
}

void mx_printint(int n)
{
    if (n > 9)
    {
        mx_printint(n / 10);
        n = n % 10;
    }
    mx_printchar('0' + n);
}

int main()
{
    mx_printint(4321);
    return 0;
}