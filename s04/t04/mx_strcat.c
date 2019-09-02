#include <stdio.h>
#include <unistd.h>
#include "../../my_libs/mx_strlen.c"

char *mx_strcat(char *s1, char *s2)
{
    int len_s2 = mx_strlen(s2);
    printf("len s2 = %d\n", len_s2);
    int len_s1 = mx_strlen(s1) + len_s2;
    printf("len s1 = %d\n", len_s1);

    int i;
    int j;
    for (j = 0; i < len_s1; i++)
    {
        s1[i] = s2[j];
    }
    return s1;
}

int main()
{
    char ss1[4] = "qwer";
    printf("%s\n", ss1);

    char ss2[4] = "qwer";
    printf("%s\n", ss2);
    
    //mx_strcat(ss1, ss2);
    printf("%s\n", ss1);
    printf("%s\n", ss1);
    return 0;
}