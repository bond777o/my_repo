#include <unistd.h>

void mx_daref_pointer(char ******str)
{
   *****str = "Follow the white rabbit!\n";
}

int main()
{
    char q[25];
    char *w = q;
    char **e = &w;
    char ***r = &e;
    char ****t = &r;
    char *****y = &t;
    char ******str = &y;
    mx_daref_pointer(str);
    write (1, *****str, 25);
    return 0;
}