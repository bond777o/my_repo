#include <stdbool.h>
#include <stdio.h>

bool mx_islower(int c)
{
    if (c >= 97 && c <= 122)
    {
        return true;
    }
    else
    {
        return false;
    }
}