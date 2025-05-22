#include <iostream>
#include <string>
#include <vector>

using namespace std;

void resolver_problema_C()
{
    string s;
    cin >> s;

    int n = s.length();

    vector<int> dp(4, 0);
    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'Q')
        {
            dp[3] += dp[2];
            dp[1] += dp[0];
        }
        else if (s[i] == 'A')
        {
            dp[2] += dp[1];
        }
    }

    cout << dp[3] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    resolver_problema_C();

    return 0;
}
