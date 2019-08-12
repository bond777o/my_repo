#include <stdbool.h>
#include <stdio.h>

bool mx_is_prime(int num)
{
    int number = 2;
    if (num < number)
    {
        return false;
    }
    for (; number < num; number++)
    {
        if (num % number == 0)
        {
            return false;
        }
    }
    return true;
}