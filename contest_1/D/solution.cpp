#include <bits/stdc++.h>
using namespace std;

const string chave = "the quick brown fox jumps over the lazy dog";

bool eh_linha_mapeadora(const string &linha, char mapa[128])
{
    if (linha.size() != chave.size())
        return false;
    for (int i = 0; i < (int)linha.size(); i++)
        if ((linha[i] == ' ') != (chave[i] == ' '))
            return false;

    char inverso[128] = {0};
    memset(mapa, 0, 128);

    for (int i = 0; i < (int)linha.size(); i++)
    {
        char l = linha[i], c = chave[i];
        if (l != ' ')
        {
            if ((mapa[(int)l] && mapa[(int)l] != c) || (inverso[(int)c] && inverso[(int)c] != l))
                return false;
            mapa[(int)l] = c;
            inverso[(int)c] = l;
        }
    }

    for (char c = 'a'; c <= 'z'; c++)
        if (inverso[(int)c] == 0)
            return false;

    return true;
}

void decodificar_linhas(const vector<string> &linhas, const char mapa[128])
{
    for (const auto &linha : linhas)
    {
        for (char c : linha)
        {
            if (c == ' ')
                cout << ' ';
            else
                cout << mapa[(int)c];
        }
        cout << '\n';
    }
}

int main()
{
    int casos;
    cin >> casos;
    string aux;
    getline(cin, aux);
    getline(cin, aux);

    while (casos--)
    {
        vector<string> linhas;
        string entrada;

        while (getline(cin, entrada) && !entrada.empty())
        {
            linhas.push_back(entrada);
        }

        char mapa[128];
        bool encontrou = false;

        for (const auto &linha : linhas)
        {
            if (eh_linha_mapeadora(linha, mapa))
            {
                encontrou = true;
                break;
            }
        }

        if (!encontrou)
            cout << "No solution.\n";
        else
            decodificar_linhas(linhas, mapa);

        if (casos)
            cout << "\n";
    }

    return 0;
}
