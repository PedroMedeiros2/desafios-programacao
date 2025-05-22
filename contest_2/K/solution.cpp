#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void resolver_problema_K()
{
    int n_cidades, m_estradas, k_depositos;
    cin >> n_cidades >> m_estradas >> k_depositos;

    vector<vector<pair<int, long long>>> grafo(n_cidades + 1);
    for (int i = 0; i < m_estradas; ++i)
    {
        int u, v;
        long long comprimento;
        cin >> u >> v >> comprimento;
        grafo[u].push_back({v, comprimento});
        grafo[v].push_back({u, comprimento});
    }

    vector<bool> tem_deposito(n_cidades + 1, false);
    for (int i = 0; i < k_depositos; ++i)
    {
        int cidade;
        cin >> cidade;
        tem_deposito[cidade] = true;
    }

    if (k_depositos == 0)
    {
        cout << -1 << endl;
        return;
    }

    long long menor_distancia = 1e18;

    for (int cidade = 1; cidade <= n_cidades; ++cidade)
    {
        if (tem_deposito[cidade])
        {
            for (const auto &vizinha : grafo[cidade])
            {
                int cidade_vizinha = vizinha.first;
                long long distancia = vizinha.second;

                if (!tem_deposito[cidade_vizinha])
                {
                    menor_distancia = min(menor_distancia, distancia);
                }
            }
        }
    }

    if (menor_distancia == 1e18)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << menor_distancia << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    resolver_problema_K();

    return 0;
}
