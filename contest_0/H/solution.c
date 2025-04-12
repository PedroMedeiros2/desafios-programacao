#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, x;
    scanf("%d %d %d", &n, &k, &x);

    int *a = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int total = 0;

    for (int i = 0; i < n - k; i++)
        total += a[i];

    for (int i = n - k; i < n; i++)
        total += x;

    printf("%d\n", total);

    free(a);

    return 0;
}
