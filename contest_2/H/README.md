# ⌨️ H - Hongcow Constrói uma Nação

Hongcow é o governante do mundo. Como governante do mundo, ele quer facilitar as viagens rodoviárias das pessoas dentro de seus próprios países.

O mundo pode ser modelado como um grafo não direcionado com n nós e m arestas. k dos nós são sedes dos governos dos k países que compõem o mundo.

Há no máximo uma aresta conectando quaisquer dois nós e nenhuma aresta conecta um nó a si mesmo. Além disso, para quaisquer dois nós correspondentes a governos, não há caminho entre esses dois nós. Qualquer grafo que satisfaça todas essas condições é estável.

Hongcow quer adicionar o maior número possível de arestas ao grafo, mantendo-o estável. Determine o número máximo de arestas que Hongcow pode adicionar.

---

## 📥 Entrada

A primeira linha de entrada conterá três inteiros n, m e k (1 ≤ n ≤ 1000, 0 ≤ m ≤ 100.000, 1 ≤ k ≤ n) — o número de vértices e arestas no grafo, e o número de vértices que são sedes do governo.

A próxima linha de entrada conterá k inteiros c1, c2, ..., ck (1 ≤ ci ≤ n). Esses inteiros serão distintos dois a dois e denotam os nós que são sedes dos governos neste mundo.

As m linhas seguintes de entrada conterão dois inteiros ui e vi (1 ≤ ui, vi ≤ n). Isso denota uma aresta não direcionada entre os nós ui e vi.

É garantido que o grafo descrito pela entrada é estável.

---

## 📤 Saída

Imprima um único inteiro, o número máximo de arestas que Hongcow pode adicionar ao grafo enquanto o mantém estável.

---

## 🧪 Exemplo

### Entrada

```
4 1 2
1 3
1 2
```

### Saída

```
2
```

### Entrada

```
3 3 1
2
1 2
1 3
2 3
```

### Saída

```
0
```

---

## 💡 Observações

Para o primeiro exemplo de teste, o grafo se parece com isto:

Os vértices 1 e 3 são especiais. A solução ótima é conectar o vértice 4 aos vértices 1 e 2. Isso adiciona um total de 2 arestas. Não podemos adicionar mais arestas, pois os vértices 1 e 3 não podem ter nenhum caminho entre eles.

Para o segundo exemplo de teste, o grafo se parece com isto:

Não podemos adicionar mais arestas a este grafo. Note que não somos permitidos a adicionar auto-loops, e o grafo deve ser simples.
