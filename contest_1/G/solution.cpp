#include <iostream>
#include <string>

using namespace std;

void remover_espacos_finais(string &linha)
{
    while (!linha.empty() && linha.back() == ' ')
        linha.pop_back();
}

void remover_espacos_iniciais(string &linha)
{
    size_t i = 0;
    while (i < linha.size() && linha[i] == ' ')
        ++i;
    linha = linha.substr(i);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string linha, buffer, texto_formatado;
    bool linha_quebrada = false;

    while (true)
    {
        linha.clear();
        if (!linha_quebrada && !getline(cin, linha))
            break;

        if (linha_quebrada)
            linha_quebrada = false;

        if (!linha.empty() && linha[0] == '*')
            break;

        remover_espacos_finais(linha);
        linha = buffer + linha;

        if (linha.length() > 72)
        {
            buffer.clear();
            bool palavra_muito_grande = true;
            int ultima_posicao_espaco = -1;

            for (int i = linha.length() - 1; i > 0; --i)
            {
                if (linha[i] == ' ')
                {
                    ultima_posicao_espaco = i;
                    if (i <= 72)
                    {
                        buffer = linha.substr(i + 1);
                        linha = linha.substr(0, i);
                        palavra_muito_grande = false;
                        break;
                    }
                }
            }

            if (ultima_posicao_espaco != -1 && palavra_muito_grande)
            {
                buffer = linha.substr(ultima_posicao_espaco + 1);
                linha = linha.substr(0, ultima_posicao_espaco);
                palavra_muito_grande = false;
            }

            if (!palavra_muito_grande)
                linha_quebrada = true;

            remover_espacos_finais(linha);
            remover_espacos_iniciais(buffer);
        }
        else if (linha.length() < 72)
        {
            if (linha.empty())
                buffer.clear();
            else if (linha.back() == ' ')
                buffer.clear();
            else if (cin.peek() == ' ' || cin.peek() == '\n' || cin.eof())
                buffer.clear();
            else
            {
                buffer = linha + " ";
                linha.clear();
                continue;
            }
        }
        else
            buffer.clear();

        texto_formatado += linha + '\n';
    }

    if (!texto_formatado.empty() &&
        (texto_formatado.back() == ' ' || texto_formatado.back() == '\n'))
    {
        texto_formatado.pop_back();
    }

    cout << texto_formatado << '\n';

    return 0;
}
