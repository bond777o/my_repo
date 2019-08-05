#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2)
{
    int i = 0; 
    while ((s1[i] != '\0') || (s2[i] != '\0'))
    {
        if (s1[i] == s2[i])
        {
            i++;
        }
        else
        {
            if (s1[i] > s2[i])
            {
                return 1;
            }
            else if (s1[i] < s2[i])
            {
                return -1;         
            }    
        }
    }
    return 0;
}

int main()
{
    const char str1[] = "abc";
    const char str2[] = "abc";

    printf("%s\n", str1);
    printf("%s\n", str2);

    printf("%d\n", mx_strcmp(str1, str2));
    return 0;
}