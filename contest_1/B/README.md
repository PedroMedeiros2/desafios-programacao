# 🔍 B - Onde está Waldorf?

Dado um grid de letras e uma lista de palavras, o objetivo é encontrar **a posição inicial de cada palavra** dentro do grid. As palavras podem estar escritas em **qualquer uma das oito direções possíveis** (horizontal, vertical ou diagonal) e o caso das letras **não importa**.

---

## 📥 Entrada

- A primeira linha contém um número inteiro **T** (número de casos de teste).
- Em cada caso de teste:
  - Uma linha com dois inteiros `m` e `n` (1 ≤ m, n ≤ 50): as dimensões do grid.
  - `m` linhas, cada uma com `n` letras (maiúsculas ou minúsculas), representando o grid.
  - Uma linha com um inteiro `k` (1 ≤ k ≤ 20): número de palavras a serem buscadas.
  - `k` linhas com uma palavra por linha, contendo apenas letras (maiúsculas ou minúsculas).
- Há uma **linha em branco** entre dois casos consecutivos.

---

## 📤 Saída

Para cada palavra em cada caso de teste, imprima **a linha e a coluna da primeira letra** da palavra no grid.

- Numeração começa em **1** (linha e coluna).
- Se houver múltiplas ocorrências, escolha a **mais superior** (linha menor). Se houver empate, escolha a **mais à esquerda** (coluna menor).
- Separe os resultados de diferentes casos de teste com uma **linha em branco**.

---

## 🔄 Direções Válidas

As palavras podem aparecer nas seguintes **8 direções**:

```
↖ ↥ ↗
←  · →
↙ ↧ ↘
```

Isto inclui: horizontal (direita/esquerda), vertical (cima/baixo) e diagonais.

---

## ✅ Observações

- Letras maiúsculas e minúsculas são tratadas como **iguais**.
- Todas as palavras podem ser encontradas **ao menos uma vez** no grid.
- A busca deve ser feita considerando a **prioridade por linha, depois por coluna**.

---

## 🧪 Exemplo

### Entrada

```
1

8 11
abcDEFGhigg
hEbkWalDork
FtyAwaldORm
FtsimrLqsrc
byoArBeDeyv
Klcbqwikomk
strEBGadhrb
yUiqlxcnBjf
4
Waldorf
Bambi
Betty
Dagbert
```

### Saída

```
2 5
2 3
1 2
7 8
```
