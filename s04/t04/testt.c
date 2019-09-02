#include <stdio.h>

int main()
{
    const char ss1[] = "qwer";
    printf("ss1 = %s\n", ss1);

    const char ss2[] = "abcd";
    printf("ss2 = %s\n", ss2);

    const char ss3[] = "zxcv";
    printf("ss3 = %s\n", ss3);
    
    printf("%s\n", ss2);
    return 0;
}