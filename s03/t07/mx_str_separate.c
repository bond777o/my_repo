#include <unistd.h>
#include "../../my_libs/mx_printchar.c"

void mx_str_separate(const char *str, char delim)
{
    for (int i = 0; str[i] != 0; i++)
        {
            if (str[i] == delim)
            {
                if (str[i-1] == delim)
                {
                    continue;
                }
                mx_printchar('\n');
                
            }
            else
            {
                mx_printchar(str[i]);
            }
        }
}

int main()
{
    const char str[] = "Heloolo!";
    char delim = 'l';
    mx_str_separate(str, delim);
    return 0;
}