#include <unistd.h>
#include "../../my_libs/mx_printchar.c"

void mx_draw_ract(int a, int b, char c)
{
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if ((i == 0 || i == b - 1) || (j == 0 || j == a - 1))
            {
                mx_printchar(c);
            }
            else
            {
                mx_printchar(' ');
            }
        }
    mx_printchar('\n'); 
    }
}

int main()
{
    mx_draw_ract(16, 5, '*');
    return 0;
}