#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

void resolver_problema_E()
{
    int n, d;
    cin >> n >> d;

    string s;
    cin >> s;

    vector<int> pulos_minimos(n, -1);
    pulos_minimos[0] = 0; // Posição inicial

    queue<int> fila;
    fila.push(0);

    while (!fila.empty())
    {
        int posicao_atual = fila.front();
        fila.pop();

        for (int tamanho_pulo = 1; tamanho_pulo <= d; tamanho_pulo++)
        {
            int nova_posicao = posicao_atual + tamanho_pulo;

            if (nova_posicao < n && s[nova_posicao] == '1' && pulos_minimos[nova_posicao] == -1)
            {
                pulos_minimos[nova_posicao] = pulos_minimos[posicao_atual] + 1;
                fila.push(nova_posicao);
            }
        }
    }

    cout << pulos_minimos[n - 1] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    resolver_problema_E();

    return 0;
}
