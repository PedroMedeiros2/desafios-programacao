#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void resolver_problema_H()
{
    int n;
    cin >> n;

    vector<long long> pedras(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> pedras[i];
    }

    vector<long long> pedras_ordenadas = pedras;
    sort(pedras_ordenadas.begin() + 1, pedras_ordenadas.end());

    vector<long long> soma_prefixo(n + 1, 0);
    vector<long long> soma_prefixo_ordenada(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        soma_prefixo[i] = soma_prefixo[i - 1] + pedras[i];
        soma_prefixo_ordenada[i] = soma_prefixo_ordenada[i - 1] + pedras_ordenadas[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int tipo, l, r;
        cin >> tipo >> l >> r;

        if (tipo == 1)
        {
            cout << soma_prefixo[r] - soma_prefixo[l - 1] << endl;
        }
        else
        {
            cout << soma_prefixo_ordenada[r] - soma_prefixo_ordenada[l - 1] << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    resolver_problema_H();

    return 0;
}
