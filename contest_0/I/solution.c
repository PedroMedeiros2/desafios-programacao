#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int test = 0; test < T; test++)
    {
        int n;
        scanf("%d", &n);

        int *p = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p[i]);
        }

        int found = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (p[i - 1] < p[i] && p[i] > p[i + 1])
            {
                printf("YES\n");
                printf("%d %d %d\n", i, i + 1, i + 2);
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("NO\n");
        }

        free(p);
    }

    return 0;
}
