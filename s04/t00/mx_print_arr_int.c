#include "../../my_libs/mx_printint.c"
#include <stdio.h>

void mx_print_arr_int(const int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        mx_printint(arr[i]);
        mx_printchar('\n');
    }
}

int main()
{
    const int arr[6] = {3, 464, 3, 24, 445, 678};
    mx_print_arr_int(arr, 6);
    return 0;
}