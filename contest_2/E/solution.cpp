#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void resolver_problema_E()
{
    int numero_de_alunos;
    cin >> numero_de_alunos;

    vector<int> denunciado(numero_de_alunos + 1);
    for (int i = 1; i <= numero_de_alunos; ++i)
    {
        cin >> denunciado[i];
    }

    for (int aluno_inicial = 1; aluno_inicial <= numero_de_alunos; ++aluno_inicial)
    {
        vector<bool> visitado(numero_de_alunos + 1, false);
        int aluno_atual = aluno_inicial;

        while (!visitado[aluno_atual])
        {
            visitado[aluno_atual] = true;
            aluno_atual = denunciado[aluno_atual];
        }

        cout << aluno_atual << (aluno_inicial == numero_de_alunos ? "\n" : " ");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    resolver_problema_E();

    return 0;
}
