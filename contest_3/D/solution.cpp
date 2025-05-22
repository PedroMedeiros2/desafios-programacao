#include <iostream>
#include <vector>
#include <string>

using namespace std;

void resolver_problema_D()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int custo_total = (m - 1) + (n - 1) * m;

        if (custo_total == k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    resolver_problema_D();

    return 0;
}
