#include <stdio.h>

int mx_toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        return c - 32;
    }
    else
    {
        return c;
    }
}

int main()
{
    printf("%c\n", mx_toupper('t'));
    return 0;
}