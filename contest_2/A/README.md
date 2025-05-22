# ⌨️ A - Triângulo Amoroso

Como você deve saber, não existem aviões masculinos nem femininos. No entanto, cada avião na Terra gosta de algum outro avião. Existem n aviões na Terra, numerados de 1 a n, e o avião com o número i gosta do avião com o número f_i, onde 1 ≤ f_i ≤ n e f_i ≠ i.

Chamamos de triângulo amoroso uma situação em que o avião A gosta do avião B, o avião B gosta do avião C e o avião C gosta do avião A. Descubra se existe algum triângulo amoroso na Terra.

---

## 📥 Entrada

A primeira linha contém um único inteiro n (2 ≤ n ≤ 5000) — o número de aviões.

A segunda linha contém n inteiros f_1, f_2, ..., f_n (1 ≤ f_i ≤ n, f_i ≠ i), significando que o i-ésimo avião gosta do f_i-ésimo avião.

---

## 📤 Saída

Imprima «YES» se houver um triângulo amoroso consistindo em aviões na Terra. Caso contrário, imprima «NO».

Você pode imprimir qualquer letra em minúscula ou maiúscula.

---

## 🧪 Exemplo

### Entrada

```
5
2 4 5 1 3
```

### Saída

```
YES
```

### Entrada

```
5
5 5 5 5 1
```

### Saída

```
NO
```

---

## 💡 Observações

No primeiro exemplo, o avião 2 gosta do avião 4, o avião 4 gosta do avião 1, e o avião 1 gosta do avião 2, o que forma um triângulo amoroso.

No segundo exemplo, não há triângulos amorosos.
