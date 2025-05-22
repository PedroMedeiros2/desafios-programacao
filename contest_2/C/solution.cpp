#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void resolver_problema_C()
{
    int n_elementos;
    cin >> n_elementos;

    vector<long long> array(n_elementos + 1);
    vector<long long> dp(n_elementos + 1, 0);

    for (int i = 1; i <= n_elementos; ++i)
    {
        cin >> array[i];
    }

    long long pontuacao_maxima = 0;

    for (int i = n_elementos; i >= 1; --i)
    {
        int proximo = i + array[i];
        if (proximo <= n_elementos)
        {
            dp[i] = array[i] + dp[proximo];
        }
        else
        {
            dp[i] = array[i];
        }
        pontuacao_maxima = max(pontuacao_maxima, dp[i]);
    }

    cout << pontuacao_maxima << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numero_de_casos;
    cin >> numero_de_casos;

    while (numero_de_casos--)
    {
        resolver_problema_C();
    }

    return 0;
}
