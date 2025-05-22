#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

struct Intervalo
{
    int x, y;
    int id;
};

bool pode_mover(const Intervalo &de, const Intervalo &para)
{
    return (para.x < de.x && de.x < para.y) || (para.x < de.y && de.y < para.y);
}

bool dfs(int atual, int destino, const vector<vector<int>> &grafo, vector<bool> &visitado)
{
    if (atual == destino)
        return true;
    visitado[atual] = true;

    for (int vizinho : grafo[atual])
    {
        if (!visitado[vizinho])
        {
            if (dfs(vizinho, destino, grafo, visitado))
            {
                return true;
            }
        }
    }

    return false;
}

void resolver_problema_I()
{
    int n_consultas;
    cin >> n_consultas;

    vector<Intervalo> intervalos;
    vector<vector<int>> grafo;

    for (int q = 0; q < n_consultas; ++q)
    {
        int tipo;
        cin >> tipo;

        if (tipo == 1)
        {
            int x, y;
            cin >> x >> y;
            intervalos.push_back({x, y, (int)intervalos.size() + 1});
            grafo.resize(intervalos.size());

            for (int i = 0; i < intervalos.size() - 1; ++i)
            {
                if (pode_mover(intervalos.back(), intervalos[i]))
                {
                    grafo[intervalos.size() - 1].push_back(i);
                }
                if (pode_mover(intervalos[i], intervalos.back()))
                {
                    grafo[i].push_back(intervalos.size() - 1);
                }
            }
        }
        else
        {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            vector<bool> visitado(intervalos.size(), false);
            if (dfs(a, b, grafo, visitado))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    resolver_problema_I();
    return 0;
}
