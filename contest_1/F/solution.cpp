#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testes;
    string linha;
    cin >> testes;
    getline(cin, linha);
    getline(cin, linha);

    while (testes--) {
        vector<string> fragmentos;
        while (getline(cin, linha)) {
            if (linha.empty()) break;
            fragmentos.push_back(linha);
        }

        unordered_map<string, int> combinacoes;
        int total = fragmentos.size();
        int arquivos = total / 2;
        string resultado;

        for (int i = 0; i < total; ++i) {
            for (int j = 0; j < total; ++j) {
                if (i == j) continue;
                string tentativa = fragmentos[i] + fragmentos[j];
                ++combinacoes[tentativa];
                if (combinacoes[tentativa] == arquivos) resultado = tentativa;
            }
        }

        cout << resultado << '\n';
        if (testes) cout << '\n';
    }

    return 0;
}
