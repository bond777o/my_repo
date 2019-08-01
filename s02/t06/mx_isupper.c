#include <stdbool.h>
#include <stdio.h>

bool mx_issuper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return true;
    }
    else
    {
        return false;
    }
}