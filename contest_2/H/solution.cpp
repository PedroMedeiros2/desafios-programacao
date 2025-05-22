#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

struct DSU
{
    vector<int> pai, tamanho;

    DSU(int n)
    {
        pai.resize(n + 1);
        tamanho.resize(n + 1, 1);
        for (int i = 1; i <= n; ++i)
        {
            pai[i] = i;
        }
    }

    int encontrar(int x)
    {
        if (pai[x] == x)
            return x;
        return pai[x] = encontrar(pai[x]);
    }

    void unir(int x, int y)
    {
        x = encontrar(x);
        y = encontrar(y);
        if (x != y)
        {
            if (tamanho[x] < tamanho[y])
                swap(x, y);
            pai[y] = x;
            tamanho[x] += tamanho[y];
        }
    }

    bool mesmoConjunto(int x, int y)
    {
        return encontrar(x) == encontrar(y);
    }
};

void resolver_problema_H()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> governos(k);
    for (int i = 0; i < k; ++i)
    {
        cin >> governos[i];
    }

    DSU dsu(n);

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        dsu.unir(u, v);
    }

    vector<bool> eh_governo(n + 1, false);
    for (int gov : governos)
    {
        eh_governo[gov] = true;
    }

    vector<int> representantes_governos;
    for (int gov : governos)
    {
        representantes_governos.push_back(dsu.encontrar(gov));
    }

    sort(representantes_governos.begin(), representantes_governos.end());
    representantes_governos.erase(
        unique(representantes_governos.begin(), representantes_governos.end()),
        representantes_governos.end());

    vector<int> tamanho_componente(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        tamanho_componente[dsu.encontrar(i)]++;
    }

    long long max_arestas = 0;
    int maior_componente = 0;
    int total_usados = 0;

    for (int rep : representantes_governos)
    {
        int tam = tamanho_componente[rep];
        max_arestas += (long long)tam * (tam - 1) / 2;
        if (tam > maior_componente)
        {
            maior_componente = tam;
        }
        total_usados += tam;
    }

    int restantes = n - total_usados;
    max_arestas += (long long)(maior_componente + restantes) * (maior_componente + restantes - 1) / 2;
    max_arestas -= (long long)maior_componente * (maior_componente - 1) / 2;

    cout << max_arestas - m << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    resolver_problema_H();
    return 0;
}
