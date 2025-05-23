#include <iostream>
#include <vector>
#include <string>

using namespace std;

void resolver_problema_F()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        bool possivel = false;

        for (int i = 0; i * 2020 <= n; i++)
        {
            int restante = n - i * 2020;
            if (restante % 2021 == 0)
            {
                possivel = true;
                break;
            }
        }

        cout << (possivel ? "YES" : "NO") << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    resolver_problema_F();

    return 0;
}