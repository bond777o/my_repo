#include <stdio.h>

void mx_ref_pointer(int i, int ******ptr)
{
    ******ptr = i;
}

int main()
{
    int a = 1;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    int ****e = &d;
    int *****f = &e;
    int ******ptr = &f;
    mx_ref_pointer(45, ptr);
    printf("%d\n", ******ptr);
    return 0;
}