#include <stdio.h>

int main()
{
    const char ss1[4] = "qwer";
    printf("ss1 = %s\n", ss1);

    const char ss2[4] = "abcd";
    printf("ss2 = %s\n", ss2);
    
    printf("%s\n", ss1);
    return 0;
}