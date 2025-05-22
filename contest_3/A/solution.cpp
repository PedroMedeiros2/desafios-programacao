#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void resolver_problema_A()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int comprimento_atual = 1;
    int comprimento_maximo = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            comprimento_atual++;
            comprimento_maximo = max(comprimento_maximo, comprimento_atual);
        }
        else
        {
            comprimento_atual = 1;
        }
    }

    cout << comprimento_maximo << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    resolver_problema_A();

    return 0;
}
