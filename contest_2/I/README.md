# ⌨️ I - Ping-Pong (Versão Fácil)

Neste problema, a cada momento você tem um conjunto de intervalos. Você pode se mover do intervalo (a, b) do nosso conjunto para o intervalo (c, d) do nosso conjunto se e somente se c < a < d ou c < b < d. Além disso, existe um caminho do intervalo I1 do nosso conjunto para o intervalo I2 do nosso conjunto se existir uma sequência de movimentos sucessivos começando em I1 para que possamos alcançar I2.

Seu programa deve lidar com consultas dos dois tipos a seguir:

1. "1 x y" (x < y) — adiciona o novo intervalo (x, y) ao conjunto de intervalos. O comprimento do novo intervalo é garantido como sendo estritamente maior que todos os intervalos anteriores.
2. "2 a b" (a ≠ b) — responde à pergunta: existe um caminho do a-ésimo (baseado em um) intervalo adicionado para o b-ésimo (baseado em um) intervalo adicionado?

Responda a todas as consultas. Note que, inicialmente, você tem um conjunto vazio de intervalos.

---

## 📥 Entrada

A primeira linha da entrada contém o inteiro n, que denota o número de consultas (1 ≤ n ≤ 100). Cada uma das linhas seguintes contém uma consulta conforme descrito acima. Todos os números na entrada são inteiros e não excedem 10^9 em seu valor absoluto.

É garantido que todas as consultas estão corretas.

---

## 📤 Saída

Para cada consulta do segundo tipo, imprima "YES" ou "NO" em uma linha separada, dependendo da resposta.

---

## 🧪 Exemplo

### Entrada

```
5
1 1 5
1 5 11
2 1 2
1 2 9
2 1 2
```

### Saída

```
NO
YES
```
