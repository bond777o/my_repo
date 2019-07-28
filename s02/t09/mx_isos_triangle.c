#include <unistd.h>
#include "../../my_libs/mx_printchar.c"

void mx_isos_triagle(unsigned int length, char c)
{
    for (unsigned int i = 0; i < length; i++)
    {
        for (unsigned int q = length - i; q > 1; q--)
        {
            mx_printchar(' ');
        }
        for (unsigned int j = 0; j <= i * 2; j++)
        {
            mx_printchar(c);
        }
        mx_printchar('\n');
    }
}

void print_green_tree(unsigned int sections, unsigned int length, char c)
{
    for (unsigned int s = 0; s < sections; s++)
    {
        mx_isos_triagle(length, c);
    }
    for (unsigned int t = 0; t < length -1; t++)
    {
        mx_printchar(' ');
    }
    mx_printchar(c);
    mx_printchar('\n');
}

int main()
{
    print_green_tree(3, 6, '^');
    return 0;
}