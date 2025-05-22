#include <iostream>
#include <vector>
#include <string>

using namespace std;

void resolver_problema_A()
{
    int numero_de_avioes;
    cin >> numero_de_avioes;

    vector<int> gosta_de(numero_de_avioes + 1);
    for (int i = 1; i <= numero_de_avioes; ++i)
    {
        cin >> gosta_de[i];
    }

    bool triangulo_encontrado = false;
    for (int i = 1; i <= numero_de_avioes; ++i)
    {
        int aviao_j = gosta_de[i];
        int aviao_k = gosta_de[aviao_j];

        if (gosta_de[aviao_k] == i)
        {
            triangulo_encontrado = true;
            break;
        }
    }

    if (triangulo_encontrado)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    resolver_problema_A();
    return 0;
}
