#include <stdio.h>
#include "../../my_libs/mx_strlen.c"
//typedef int make_iso_compilers_happy;

char *mx_strcat(char *s1, const char *s2)
{
    int i;
    int j;
    for (i = 0; s1[i] != '\0'; i++);
    for (j = 0; s2[j] != '\0'; i++)
    {
        s1[i] = s2[j];
    }
    return s1;
}

int main()
{
    char ss1[] = "qwer";
    const char ss2[] = "123";
    mx_strcat(ss1, ss2);
    printf("%s\n", ss1);
    return 0;
}