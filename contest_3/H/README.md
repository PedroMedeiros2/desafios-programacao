# ⌨️ H - Kuriyama Mirai's Stones

Kuriyama Mirai matou muitos monstros e conseguiu muitas (precisamente n) pedras. Ela numera as pedras de 1 a n. O custo da i-ésima pedra é vi. Kuriyama Mirai quer saber algumas coisas sobre essas pedras, então ela fará dois tipos de perguntas:

1. Ela dirá dois números, l e r (1 ≤ l ≤ r ≤ n), e você deve dizer a ela a soma dos custos das pedras de l a r (∑(i=l to r) vi).

2. Seja ui o custo da i-ésima pedra mais barata (o custo que estará na i-ésima posição se organizarmos todos os custos das pedras em ordem não decrescente). Desta vez, ela dirá dois números, l e r (1 ≤ l ≤ r ≤ n), e você deve dizer a ela a soma dos custos das pedras de l a r nesta ordem ordenada (∑(i=l to r) ui).

Para cada pergunta, você deve dar a resposta correta, ou Kuriyama Mirai dirá "fuyukai desu" e ficará infeliz.

---

## 📥 Entrada

A primeira linha contém um inteiro n (1 ≤ n ≤ 10^5). A segunda linha contém n inteiros: v1, v2, ..., vn (1 ≤ vi ≤ 10^9) — custos das pedras.

A terceira linha contém um inteiro m (1 ≤ m ≤ 10^5) — o número de perguntas de Kuriyama Mirai. Em seguida, seguem m linhas, cada linha contém três inteiros type, l e r (1 ≤ l ≤ r ≤ n; 1 ≤ type ≤ 2), descrevendo uma pergunta. Se type for igual a 1, então você deve imprimir a resposta para a primeira pergunta, caso contrário, você deve imprimir a resposta para a segunda.

---

## 📤 Saída

Imprima m linhas. Cada linha deve conter um inteiro — a resposta à pergunta de Kuriyama Mirai. Imprima as respostas às perguntas na ordem de entrada.

---

## 🧪 Exemplos

### Entrada

```
6
6 4 2 7 2 7
3
2 3 6
1 3 4
1 1 6
```

### Saída

```
24
9
28
```

### Entrada

```
4
5 5 2 3
10
1 2 4
2 1 4
1 1 1
2 1 4
2 1 2
1 1 1
1 3 3
1 1 3
1 4 4
1 2 2
```

### Saída

```
10
15
5
15
5
5
2
12
3
5
```

---

## 📝 Observações

Por favor, note que as respostas às perguntas podem estourar o tipo inteiro de 32 bits.
