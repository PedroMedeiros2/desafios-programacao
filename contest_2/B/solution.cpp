#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> gerente_de_funcionario;
vector<int> profundidade_funcionario;

int calcular_profundidade(int id_funcionario)
{
    if (profundidade_funcionario[id_funcionario] != 0)
    {
        return profundidade_funcionario[id_funcionario];
    }

    if (gerente_de_funcionario[id_funcionario] == -1)
    {
        profundidade_funcionario[id_funcionario] = 1;
        return 1;
    }

    profundidade_funcionario[id_funcionario] = calcular_profundidade(gerente_de_funcionario[id_funcionario]) + 1;
    return profundidade_funcionario[id_funcionario];
}

void resolver_problema_B()
{
    int numero_de_funcionarios;
    cin >> numero_de_funcionarios;

    gerente_de_funcionario.assign(numero_de_funcionarios + 1, 0);
    profundidade_funcionario.assign(numero_de_funcionarios + 1, 0);

    for (int i = 1; i <= numero_de_funcionarios; ++i)
    {
        cin >> gerente_de_funcionario[i];
    }

    int profundidade_maxima_na_empresa = 0;
    for (int i = 1; i <= numero_de_funcionarios; ++i)
    {
        profundidade_maxima_na_empresa = max(profundidade_maxima_na_empresa, calcular_profundidade(i));
    }

    cout << profundidade_maxima_na_empresa << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    resolver_problema_B();

    return 0;
}
