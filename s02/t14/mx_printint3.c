#include "../../my_libs/mx_printchar.c"

void mx_printint3(int n)
{
    if (n > 9)
    {
        mx_printint3(n / 10);
        n = n % 10;
    }
    mx_printchar('0' + n);
}

void mx_printint(int n)
{
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

int main()
{
    mx_printint(1234567890);
    return 0;
}