#include "../../my_libs/mx_printint.c"
#include "../../my_libs/mx_printchar.c"
#include <stdio.h>

void mx_print_arr_int(const int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        mx_printint(arr[i]);
        //char c = 32;
        //mx_printchar(c);
    }
}

int main()
{
    const int arr[3] = {3, 45, 678};
    printf("%d\n", mx_print_arr_int(arr, 3));
    return 0;
}