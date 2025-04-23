#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string extrairDigitos(const vector<string> &linhas)
{
    string digitos;
    for (const auto &linha : linhas)
        for (char c : linha)
            if (isdigit(c))
                digitos += c;
    return digitos;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int execucao = 1;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;

        cin.ignore();
        vector<string> oficial(n);
        for (auto &linha : oficial)
            getline(cin, linha);

        int m;
        cin >> m;
        cin.ignore();
        vector<string> enviado(m);
        for (auto &linha : enviado)
            getline(cin, linha);

        if (oficial == enviado)
            cout << "Run #" << execucao << ": Accepted\n";
        else if (extrairDigitos(oficial) == extrairDigitos(enviado))
            cout << "Run #" << execucao << ": Presentation Error\n";
        else
            cout << "Run #" << execucao << ": Wrong Answer\n";

        execucao++;
    }

    return 0;
}
