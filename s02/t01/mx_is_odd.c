#include <stdbool.h>
#include <stdio.h>

bool mx_is_odd(int value)
{
    if (value % 2)
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
    printf("%d\n", mx_is_odd(390909090));
    return 0;
}