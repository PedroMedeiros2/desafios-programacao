#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void resolver_problema_J()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> pai(n + 1);
        vector<vector<int>> filhos(n + 1);
        vector<int> grau(n + 1, 0);

        for (int i = 1; i <= n; ++i)
        {
            cin >> pai[i];
            if (pai[i] != i)
            {
                filhos[pai[i]].push_back(i);
                grau[pai[i]]++;
            }
        }

        vector<bool> incluido(n + 1, false);
        vector<vector<int>> caminhos;

        for (int i = 1; i <= n; ++i)
        {
            if (filhos[i].empty())
            {
                vector<int> caminho;
                int atual = i;
                while (!incluido[atual])
                {
                    caminho.push_back(atual);
                    incluido[atual] = true;
                    if (pai[atual] == atual)
                        break;
                    atual = pai[atual];
                }
                reverse(caminho.begin(), caminho.end());
                caminhos.push_back(caminho);
            }
        }

        cout << caminhos.size() << '\n';
        for (auto &caminho : caminhos)
        {
            cout << caminho.size() << '\n';
            for (int v : caminho)
            {
                cout << v << ' ';
            }
            cout << '\n';
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    resolver_problema_J();

    return 0;
}
