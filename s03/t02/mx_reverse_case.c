#include <unistd.h>
#include "../../s02/t07/mx_tolower.c"
#include "../../s02/t08/mx_toupper.c"
#include "../../s02/t05/mx_islower.c"
#include "../../s02/t06/mx_isupper.c"

void mx_reverse_case(char *s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (mx_issuper(s[i]))
        {
            s[i] = mx_tolower(s[i]);
        }
        else
        {
            s[i] = mx_toupper(s[i]);
        }
    }
}

int main()
{
    char s[] = "HeLLo!\n";
    mx_reverse_case(s);
    write(1, s, 7);
    return 0;
}