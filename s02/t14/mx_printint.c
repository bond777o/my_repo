#include "../../my_libs/mx_printchar.c"
#include <stdio.h>

void mx_printint(int n)
{
    char a;

    while (n != 0)
    {
        a = 0;
        a = n % 10;
        printf("%d", a);
        n = n / 10;
    }
}

int main()
{
    mx_printint(123765);
    printf("%c", '\n');
    return 0;
}