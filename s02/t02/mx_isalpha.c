#include <stdbool.h>
#include <stdio.h>

bool mx_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
    printf("%d\n", mx_isalpha(64));
    return 0;
}