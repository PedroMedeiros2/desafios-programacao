#include <stdio.h>

int main()
{
    int peso;

    scanf("%d", &peso);

    printf("%s\n", peso > 2 && (peso % 2 == 0) ? "YES" : "NO");

    return 0;
}
