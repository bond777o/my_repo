#include <stdio.h>

int mx_tolower(int c)
{
    if (c >= 65 && c <= 90)
    {
        return c + 32;
    }
    else
    {
        return c;
    }
}

int main()
{
    printf("%c\n", mx_tolower('Z'));
    return 0;
}