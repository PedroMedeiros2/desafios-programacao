#include <stdio.h>

int retangulo(int a, int b, int c)
{
    if ((a == b) && (c % 2 == 0))
        return 1;
    if ((a == c) && (b % 2 == 0))
        return 1;
    if ((b == c) && (a % 2 == 0))
        return 1;

    if (a + b == c)
        return 1;
    if (a + c == b)
        return 1;
    if (b + c == a)
        return 1;

    return 0;
}

int main()
{
    int qtd;
    scanf("%d", &qtd);
    int i, a, b, c;

    for (i = 0; i < qtd; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        printf("%s\n", (retangulo(a, b, c)) == 1 ? "YES" : "NO");
    }

    return 0;
}
