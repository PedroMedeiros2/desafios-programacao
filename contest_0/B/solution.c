#include <stdio.h>

int maior(int a, int b)
{
    return (a > b) ? a : b;
}

int ciclo(int num, int tam)
{
    if (num == 1)
        return tam + 1;
    if (num % 2 != 0)
        return ciclo(3 * num + 1, tam + 1);
    else
        return ciclo(num / 2, tam + 1);
}

int main()
{
    int i, j, x;
    while (scanf("%d %d", &i, &j) == 2)
    {
        int max = 0;
        int start = i < j ? i : j;
        int end = i > j ? i : j;

        for (x = start; x <= end; x++)
        {
            max = maior(ciclo(x, 0), max);
        }
        printf("%d %d %d\n", i, j, max);
    }

    return 0;
}