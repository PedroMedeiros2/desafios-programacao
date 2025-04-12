#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int test = 0; test < t; test++)
    {
        int n;
        scanf("%d", &n);

        int *freq = (int *)calloc(n + 1, sizeof(int));

        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            if (x > n)
                x = n;
            freq[x]++;
        }

        int count = 0, max_side = 0;
        for (int i = n; i >= 1; i--)
        {
            count += freq[i];
            if (count >= i)
            {
                max_side = i;
                break;
            }
        }

        printf("%d\n", max_side);
        free(freq);
    }

    return 0;
}
