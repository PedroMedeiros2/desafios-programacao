#include <stdio.h>

#define N 1500

int min(int a, int b, int c)
{
    int m = a;
    if (b < m)
        m = b;
    if (c < m)
        m = c;
    return m;
}

int main()
{
    int ugly[N];
    int i, next_ugly;
    int i2, i3, i5;
    int next2, next3, next5;

    ugly[0] = 1;
    i2 = i3 = i5 = 0;
    next2 = 2;
    next3 = 3;
    next5 = 5;

    for (i = 1; i < N; i++)
    {
        next_ugly = min(next2, next3, next5);
        ugly[i] = next_ugly;

        if (next_ugly == next2)
        {
            i2++;
            next2 = ugly[i2] * 2;
        }
        if (next_ugly == next3)
        {
            i3++;
            next3 = ugly[i3] * 3;
        }
        if (next_ugly == next5)
        {
            i5++;
            next5 = ugly[i5] * 5;
        }
    }

    printf("The 1500'th ugly number is %d.\n", ugly[N - 1]);

    return 0;
}
