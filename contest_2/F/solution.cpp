#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

struct Ponto
{
    int x, y;
};

bool esta_em_xeque(const Ponto &posicao, const Ponto &rainha)
{
    if (posicao.x == rainha.x || posicao.y == rainha.y)
    {
        return true;
    }
    if (abs(posicao.x - rainha.x) == abs(posicao.y - rainha.y))
    {
        return true;
    }
    return false;
}

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void resolver_problema_F()
{
    int n;
    cin >> n;

    Ponto rainha, rei_inicio, rei_fim;
    cin >> rainha.x >> rainha.y;
    cin >> rei_inicio.x >> rei_inicio.y;
    cin >> rei_fim.x >> rei_fim.y;

    if (esta_em_xeque(rei_inicio, rainha) || esta_em_xeque(rei_fim, rainha))
    {
        cout << "NO" << endl;
        return;
    }

    vector<vector<bool>> visitado(n + 1, vector<bool>(n + 1, false));
    visitado[rei_inicio.x][rei_inicio.y] = true;

    queue<Ponto> fila;
    fila.push(rei_inicio);

    while (!fila.empty())
    {
        Ponto atual = fila.front();
        fila.pop();

        if (atual.x == rei_fim.x && atual.y == rei_fim.y)
        {
            cout << "YES" << endl;
            return;
        }

        for (int i = 0; i < 8; ++i)
        {
            Ponto proximo = {atual.x + dx[i], atual.y + dy[i]};

            if (proximo.x >= 1 && proximo.x <= n && proximo.y >= 1 && proximo.y <= n &&
                !visitado[proximo.x][proximo.y] && !esta_em_xeque(proximo, rainha))
            {
                visitado[proximo.x][proximo.y] = true;
                fila.push(proximo);
            }
        }
    }

    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    resolver_problema_F();

    return 0;
}
