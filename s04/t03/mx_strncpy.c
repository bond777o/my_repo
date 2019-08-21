#include <stdio.h>

char *mx_strncpy(char *dst, const char *src, int len)
{
    int i;

    for (i = 0; i < len && src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }
    for (; src[i] != '\0'; i++)
    {
        dst[i] = '\0';
    }
    return dst;
}

int main()
{
    const char src[12] = "Hello world";
    char dst[12];
    mx_strncpy(dst, src, 5);
    
    printf("%s\n", src);
    printf("%s\n", dst);
    return 0;
}