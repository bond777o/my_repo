#include <stdbool.h>
#include <stdio.h>

bool mx_multiple_number(int n, int mult)
{
    if (mult % n == 0)
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
    printf("%d\n", mx_multiple_number(3, 10));
    return 0;
}