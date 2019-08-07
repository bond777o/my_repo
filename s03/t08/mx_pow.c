#include <stdio.h>

double mx_pow(double n, unsigned int pow)
{
    double result = n;
    if (pow == 0)
    {
        return 1;
    }
    for (unsigned int i = 0; i < pow - 1; i++)
    {
        result = result * n;
    }
    return result;
}

int main()
{
    printf("%f\n", mx_pow(2, 0));
    return 0;
}