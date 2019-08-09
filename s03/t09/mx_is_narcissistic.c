#include <stdbool.h>
#include <stdio.h>
#include "../t08/mx_pow.c"

bool mx_is_narcissistic(int num)
{
    int array_length = 0;
    int numbers[10];
    for (int work_number = num; work_number != '\0'; array_length++)
    {
        numbers[array_length] = work_number % 10;
        work_number = work_number / 10;
    }
    int result = 0;
    for (int i = 0; i < array_length; i++)
    {
        result = result + mx_pow(numbers[i], array_length);
    }
    if (result == num)
    {
        return true;
    }
    return false;
}

int main()
{
    printf("%d\n", mx_is_narcissistic(9800817));
    return 0;
}