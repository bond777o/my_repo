#include "../../my_libs/mx_printchar.c"
#include <stdio.h>

void mx_printint(int n)
{
    int a;

    while (n != 0)
    {
        a = 0;
        a = n % 10;
        mx_printchar('0' + a);
        n = n / 10;
    }
}

int main()
{
    mx_printint(123765);
    printf("%c", '\n');
    return 0;
}