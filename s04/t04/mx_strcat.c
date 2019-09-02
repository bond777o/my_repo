#include <stdio.h>
#include <unistd.h>
#include "../../my_libs/mx_strlen.c"

char *mx_strcat(char *s1, const char *s2)
{
    int len_s2 = mx_strlen(s2);
    int len_s1 = mx_strlen(s1) + len_s2;

    int i = mx_strlen(s1);
    int j;
    for (j = 0; i <= len_s1; i++, j++)
    {
        s1[i] = s2[j];
    }
    return s1;
}

int main()
{
    char ss1[80] = "qwer";

    char ss2[] = "rewq";
    
    mx_strcat(ss1, ss2);
    printf("%s\n", ss1);
    return 0;
}