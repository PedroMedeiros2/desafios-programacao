#include <stdio.h>

int main()
{
    char map[256] = {0};

    char *from = "1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";
    char *to = "`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,.";

    for (int i = 0; from[i]; i++)
        map[(int)from[i]] = to[i];

    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            putchar(' ');
        else if (map[c])
            putchar(map[c]);
        else
            putchar(c);
    }

    return 0;
}
