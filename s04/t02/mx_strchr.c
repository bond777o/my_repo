#include <unistd.h>
#include <stdio.h>

char *mx_strchr(const char *s, int c)
{
    int i;

    char c1 = '0' + c;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c1)
        {
            return (char *)&s[i];
        }
    }
    return 0;
}

int main()
{
   
    const char ss[5] = "91236";
    write(1, mx_strchr(ss, 9), 1);
    write(1, "\n",1);
    return 0;
}