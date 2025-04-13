#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_PALAVRA 51
#define MAX_DIRECOES 8

typedef struct
{
    int dx;
    int dy;
} Direcao;

const Direcao direcoes[MAX_DIRECOES] = {{-1, -1}, {-1, 0}, {-1, +1}, {0, -1}, {0, +1}, {+1, -1}, {+1, 0}, {+1, +1}};

void minusculo(char *s)
{
    while (*s)
    {
        *s = tolower(*s);
        s++;
    }
}

int palavra_cabe(int m, int n, int linha, int col, int dx, int dy, int len)
{
    int fim_linha = linha + (len - 1) * dx;
    int fim_col = col + (len - 1) * dy;
    return fim_linha >= 0 && fim_linha < m &&
           fim_col >= 0 && fim_col < n;
}

int palavra_encontra_na_direcao(char **grid, int m, int n, const char *palavra,
                                int linha, int col, int dx, int dy)
{
    int len = strlen(palavra);
    int i;

    for (i = 0; i < len; i++)
    {
        int nova_linha = linha + i * dx;
        int nova_col = col + i * dy;

        if (nova_linha < 0 || nova_linha >= m || nova_col < 0 || nova_col >= n)
            return 0;

        if (grid[nova_linha][nova_col] != palavra[i])
            return 0;
    }

    return 1;
}

void encontrar_palavra(char **grid, int m, int n, const char *palavra)
{
    int len = strlen(palavra);
    int encontrada = 0;
    int i, j, d;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (grid[i][j] == palavra[0])
            {
                for (d = 0; d < MAX_DIRECOES; d++)
                {
                    int dx = direcoes[d].dx;
                    int dy = direcoes[d].dy;

                    if (palavra_cabe(m, n, i, j, dx, dy, len))
                    {
                        if (palavra_encontra_na_direcao(grid, m, n, palavra, i, j, dx, dy))
                        {
                            printf("%d %d\n", i + 1, j + 1);
                            encontrada = 1;
                            break;
                        }
                    }
                }
            }
            if (encontrada)
                break;
        }
        if (encontrada)
            break;
    }
}

int main()
{
    int t;
    int m, n;
    int k;
    char **grid;
    char palavra[MAX_PALAVRA];
    int i;

    scanf("%d", &t);
    getchar();

    while (t--)
    {
        scanf("%d %d", &m, &n);
        getchar();

        grid = malloc(m * sizeof(char *));
        for (i = 0; i < m; i++)
        {
            grid[i] = malloc((n + 1) * sizeof(char));
            fgets(grid[i], n + 2, stdin);
            minusculo(grid[i]);
        }

        scanf("%d", &k);
        getchar();

        for (i = 0; i < k; i++)
        {
            fgets(palavra, MAX_PALAVRA, stdin);
            palavra[strcspn(palavra, "\n")] = '\0';
            minusculo(palavra);
            encontrar_palavra(grid, m, n, palavra);
        }

        for (i = 0; i < m; i++)
        {
            free(grid[i]);
        }
        free(grid);

        if (t)
        {
            printf("\n");
        }
    }

    return 0;
}
