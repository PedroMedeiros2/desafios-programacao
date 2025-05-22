#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void resolver_problema_B()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> dp(n + 1, n);
        dp[0] = 0;

        vector<int> moedas = {1, 3, 5};

        for (int i = 1; i <= n; i++)
        {
            for (int moeda : moedas)
            {
                if (i >= moeda)
                {
                    int adicionar = (moeda == 1) ? 1 : 0;
                    dp[i] = min(dp[i], dp[i - moeda] + adicionar);
                }
            }
        }

        cout << dp[n] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    resolver_problema_B();

    return 0;
}
