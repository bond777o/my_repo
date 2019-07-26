#include <stdbool.h>
#include <stdio.h>

bool mx_isspace(char c)
{
    if (c == 32)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    printf("%d\n", mx_isspace(' '));
    return 0;
}