#include <stdio.h>

int mx_sqrt(int x)
{
    if (x < 1)
    {
        return 0;
    }

    unsigned int num = 0;
    int root = 0;
    for (; num < (unsigned int)x; root++)
    {
        num = root * root;
    }
    if (num == (unsigned int)x)
    {
        return root - 1;
    }
    return 0;
}

int main()
{
    printf("%d\n", mx_sqrt(112126921));
    return 0;
}