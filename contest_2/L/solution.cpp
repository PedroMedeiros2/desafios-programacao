#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int resolver_caso_L()
{
    int n_chefes;
    cin >> n_chefes;

    vector<int> tipo_chefe(n_chefes);
    for (int i = 0; i < n_chefes; ++i)
    {
        cin >> tipo_chefe[i];
    }

    vector<vector<int>> dp(n_chefes + 1, vector<int>(2, 0));
    dp[n_chefes][0] = dp[n_chefes][1] = 0;

    for (int i = n_chefes - 1; i >= 0; --i)
    {
        int pontos_pulo_um_chefe = (tipo_chefe[i] == 1) ? 1 : 0;
        dp[i][0] = pontos_pulo_um_chefe + dp[i + 1][1];

        if (i + 1 < n_chefes)
        {
            int pontos_pulo_dois_chefes = 0;
            if (tipo_chefe[i] == 1)
                pontos_pulo_dois_chefes++;
            if (tipo_chefe[i + 1] == 1)
                pontos_pulo_dois_chefes++;
            dp[i][0] = min(dp[i][0], pontos_pulo_dois_chefes + dp[i + 2][1]);
        }

        dp[i][1] = dp[i + 1][0];
        if (i + 1 < n_chefes)
        {
            dp[i][1] = min(dp[i][1], dp[i + 2][0]);
        }
    }

    return dp[0][0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numero_de_casos;
    cin >> numero_de_casos;

    while (numero_de_casos--)
    {
        cout << resolver_caso_L() << endl;
    }

    return 0;
}
