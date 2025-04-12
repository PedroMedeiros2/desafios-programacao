#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TAM_MAX 100000
#define RAIZ_MAX 32000

int primos[RAIZ_MAX];
int qtd_primos = 0;

void gera_primos(int limite)
{
    char *eh_primo = (char *)malloc(sizeof(char) * (limite + 1));
    memset(eh_primo, 1, sizeof(eh_primo));

    eh_primo[0] = eh_primo[1] = 0;

    for (int i = 2; i * i <= limite; i++)
    {
        if (eh_primo[i])
        {
            for (int j = i * i; j <= limite; j += i)
                eh_primo[j] = 0;
        }
    }

    for (int i = 2; i <= limite; i++)
    {
        if (eh_primo[i])
        {
            primos[qtd_primos++] = i;
        }
    }

    free(eh_primo);
}

void gera_primos_intervalo(int inicio, int fim)
{
    int tamanho = fim - inicio + 1;

    char *eh_primo = (char *)malloc(sizeof(char) * tamanho);

    memset(eh_primo, 1, sizeof(char) * tamanho);

    if (inicio == 1)
        eh_primo[0] = 0;

    for (int i = 0; i < qtd_primos; i++)
    {
        int p = primos[i];
        long long primeiro_multiplo = (long long)(inicio + p - 1) / p * p;

        if (primeiro_multiplo < p * 2)
            primeiro_multiplo = p * 2;

        for (long long j = primeiro_multiplo; j <= fim; j += p)
        {
            eh_primo[j - inicio] = 0;
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        if (eh_primo[i])
            printf("%d\n", i + inicio);
    }

    free(eh_primo);
}

int main()
{
    int qtd;
    scanf("%d", &qtd);

    gera_primos((int)sqrt(1000000000) + 1);

    for (int i = 0; i < qtd; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        gera_primos_intervalo(a, b);

        if (i != qtd - 1)
            printf("\n");
    }

    return 0;
}
