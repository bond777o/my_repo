#include <stdio.h>

int mx_sum_digits(int num)
{
    if (num < 0)
    {
        num = num * -1;
    }

    int result = 0;

    while (num != 0)
    {
        result = result + num % 10;
        num = num / 10;
    }
    return result;
}

int main()
{
    printf("%d\n", mx_sum_digits(-444666));
    return 0;
}