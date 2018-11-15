//
// Makes stdin lit
//

#include <stdio.h>

int main(int argc, char const *argv[])
{
    const char *const flame = "\xF0\x9F\x94\xA5";
    int needs_flame = 1;

    char c;
    while ((c = getchar()) != EOF)
    {
        if (needs_flame || c == '\n')
        {
            needs_flame = !needs_flame || c == '\n';
            fputs(FLAME, stdout);
        }
        putchar(c);
    }

    return 0;
}
