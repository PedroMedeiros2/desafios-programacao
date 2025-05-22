#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int calcular_volume_lago(int r, int c, int n, int m, vector<vector<int>> &grade, vector<vector<bool>> &visitado)
{
    if (r < 0 || r >= n || c < 0 || c >= m || visitado[r][c] || grade[r][c] == 0)
    {
        return 0;
    }

    visitado[r][c] = true;
    int volume = grade[r][c];

    volume += calcular_volume_lago(r + 1, c, n, m, grade, visitado);
    volume += calcular_volume_lago(r - 1, c, n, m, grade, visitado);
    volume += calcular_volume_lago(r, c + 1, n, m, grade, visitado);
    volume += calcular_volume_lago(r, c - 1, n, m, grade, visitado);

    return volume;
}

void resolver_problema_G()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grade(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> grade[i][j];
        }
    }

    vector<vector<bool>> visitado(n, vector<bool>(m, false));

    int volume_maximo = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (!visitado[i][j] && grade[i][j] > 0)
            {
                int volume_atual = calcular_volume_lago(i, j, n, m, grade, visitado);
                volume_maximo = max(volume_maximo, volume_atual);
            }
        }
    }

    cout << volume_maximo << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numero_de_casos;
    cin >> numero_de_casos;

    while (numero_de_casos--)
    {
        resolver_problema_G();
    }

    return 0;
}
