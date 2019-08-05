#include "../../my_libs/mx_strlen.c"
#include "../t03/mx_swap_char.c"
#include <stdio.h>

void mx_srt_reverse(char *s)
{
    int length = mx_strlen(s);
    for (int i = 0; i < length / 2; i++)
    {
        mx_swap_char(&s[i], &s[length - i - 1]);
    }
}

int main()
{
    char str[] = "hello world";
    mx_srt_reverse(str);
    printf("%s\n", str);
    return 0;
}
