# ⌨️ D - The Cake Is a Lie

Existe uma grade n × m. Você está na célula (1, 1) e seu objetivo é chegar à célula (n, m).

Você pode se mover para as células vizinhas à direita ou para baixo. Em outras palavras, suponha que você esteja na célula (x, y). Você pode:

- mover para a direita para a célula (x, y + 1) — isso custa x burles;
- mover para baixo para a célula (x + 1, y) — isso custa y burles.

Você consegue chegar à célula (n, m) gastando exatamente k burles?

---

## 📥 Entrada

A primeira linha contém um único inteiro t (1 ≤ t ≤ 100) — o número de casos de teste.

A primeira e única linha de cada caso de teste contém três inteiros n, m e k (1 ≤ n, m ≤ 100; 0 ≤ k ≤ 10^4) — os tamanhos da grade e a quantidade exata de dinheiro que você precisa gastar.

---

## 📤 Saída

Para cada caso de teste, se você puder chegar à célula (n, m) gastando exatamente k burles, imprima YES. Caso contrário, imprima NO.

Você pode imprimir cada letra em qualquer caso que desejar (então, por exemplo, as strings yEs, yes, Yes e YES são todas reconhecidas como resposta positiva).

---

## 🧪 Exemplos

### Entrada

```
6
1 1 0
2 2 2
2 2 3
2 2 4
1 4 3
100 100 10000
```

### Saída

```
YES
NO
YES
NO
YES
NO
```

---

## 📝 Observações

No primeiro caso de teste, você já está na célula final, então gasta 0 burles.

No segundo, terceiro e quarto casos de teste, existem dois caminhos de (1, 1) para (2, 2): (1, 1) → (1, 2) → (2, 2) ou (1, 1) → (2, 1) → (2, 2). Ambos custam 1 + 2 = 3 burles, então é a única quantidade de dinheiro que você pode gastar.

No quinto caso de teste, há apenas um caminho de (1, 1) para (1, 4) e custa 1 + 1 + 1 = 3 burles.
