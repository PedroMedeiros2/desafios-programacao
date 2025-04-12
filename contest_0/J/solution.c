#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main()
{
    int t;
    scanf("%d", &t);

    for (int test = 0; test < t; test++)
    {
        int w, d, h;
        scanf("%d %d %d", &w, &d, &h);

        int a, b, f, g;
        scanf("%d %d %d %d", &a, &b, &f, &g);

        int path1 = a + f + abs(b - g);
        int path2 = (w - a) + (w - f) + abs(b - g);
        int path3 = b + g + abs(a - f);
        int path4 = (d - b) + (d - g) + abs(a - f);

        int min_horizontal = MIN(MIN(path1, path2), MIN(path3, path4));

        int total = min_horizontal + h;

        printf("%d\n", total);
    }

    return 0;
}
