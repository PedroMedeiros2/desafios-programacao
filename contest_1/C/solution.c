#include <stdio.h>
#include <string.h>

char a[1005], b[1005], ans[1005];
int vis[1005];

void bubble_sort(char arr[], int n)
{
    int i, j;
    char temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void solve(char *a, char *b)
{
    int lena = strlen(a), lenb = strlen(b);
    int i, j, c = 0;

    for (i = 0; i < lenb; i++)
        vis[i] = 0;

    for (i = 0; i < lena; i++)
    {
        for (j = 0; j < lenb; j++)
        {
            if (!vis[j] && a[i] == b[j])
            {
                ans[c++] = a[i];
                vis[j] = 1;
                break;
            }
        }
    }

    ans[c] = '\0';
    bubble_sort(ans, c);
    puts(ans);
}

int main()
{
    while (fgets(a, sizeof(a), stdin))
    {
        a[strcspn(a, "\n")] = '\0';

        fgets(b, sizeof(b), stdin);
        b[strcspn(b, "\n")] = '\0';

        if (strlen(a) < strlen(b))
            solve(a, b);
        else
            solve(b, a);
    }

    return 0;
}
