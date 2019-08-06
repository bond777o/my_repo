#include <stdio.h>
#include <string.h>

char *mx_strcpy(char *dst, const char *src)
{
    for (int i = 0; src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }
    return dst;
}


int main()
{
    const char src[12] = "Hello world";
    char dst[12];

    mx_strcpy(dst, src);

    printf("%s\n", src);
    printf("%s\n", dst);
    return 0;
}