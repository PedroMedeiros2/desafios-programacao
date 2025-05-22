# ⌨️ J - Caminhos Verticais

Você recebe uma árvore enraizada consistindo de n vértices. Os vértices são numerados de 1 a n. Qualquer vértice pode ser a raiz de uma árvore.

Uma árvore é um grafo não direcionado conectado sem ciclos. Uma árvore enraizada é uma árvore com um vértice selecionado, que é chamado de raiz.

A árvore é especificada por um array de pais `p` contendo `n` números: `p[i]` é o pai do vértice com o índice `i`. O pai de um vértice `u` é um vértice que é o próximo vértice no caminho mais curto de `u` para a raiz. Por exemplo, no caminho simples de 5 para 3 (a raiz), o próximo vértice seria 1, então o pai de 5 é 1.

A raiz não tem pai, então para ela, o valor de `p[i]` é `i` (a raiz é o único vértice para o qual `p[i] = i`).

Encontre um conjunto de caminhos tal que:

- cada vértice pertence a exatamente um caminho, cada caminho pode conter um ou mais vértices;
- em cada caminho, cada próximo vértice é filho do vértice atual (ou seja, os caminhos sempre levam para baixo — de pai para filho);
- o número de caminhos é mínimo.

Por exemplo, se `n = 5` e `p = [3, 1, 3, 3, 1]`, então a árvore pode ser dividida em três caminhos:

1. 3 → 1 → 5 (caminho de 3 vértices),
2. 4 (caminho de 1 vértice).
3. 2 (caminho de 1 vértice).

---

## 📥 Entrada

A primeira linha de dados de entrada contém um inteiro `t` (1 ≤ `t` ≤ 10<sup>4</sup>) — o número de casos de teste no teste.

Cada caso de teste consiste em duas linhas.

A primeira delas contém um inteiro `n` (1 ≤ `n` ≤ 2 ⋅ 10<sup>5</sup>). É o número de vértices na árvore.

A segunda linha contém `n` inteiros `p[1]`, `p[2]`, ..., `p[n]` (1 ≤ `p[i]` ≤ `n`). É garantido que o array `p` codifica alguma árvore enraizada.

É garantido que a soma dos valores `n` sobre todos os casos de teste no teste não excede 2 ⋅ 10<sup>5</sup>.

---

## 📤 Saída

Para cada caso de teste, na primeira linha, imprima um inteiro `m` — o número mínimo de caminhos não intersectantes que levam para baixo que podem cobrir todos os vértices da árvore.

Em seguida, imprima `m` pares de linhas contendo descrições de caminhos. Na primeira delas, imprima o comprimento do caminho, na segunda — a sequência de vértices especificando esse caminho na ordem de cima para baixo. Você pode imprimir os caminhos em qualquer ordem.

Se houver várias respostas, imprima qualquer uma delas.

---

## 🧪 Exemplo

### Entrada

```
6
5
3 1 3 3 1
4
1 1 4 1
7
1 1 2 3 4 5 6
1
1
6
4 4 4 4 1 2
4
2 2 2 2
```

### Saída

```
3
3
3 1 5
1
2
1
4
2
2
1 2
2
4 3

1
7
1 2 3 4 5 6 7

1
1
1

3
3
4 1 5
2
2 6
1
3

3
2
2 1
1
3
1
4
```
