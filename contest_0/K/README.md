# 🪵 Ujan e o Telhado de Madeira

Ujan quer construir um **telhado quadrado** usando algumas de suas tábuas retangulares. Cada tábua tem **largura 1** e **altura ai**.

Ele pode escolher **qualquer subconjunto** das tábuas e colocá-las lado a lado. Depois, ele quer cortar **um quadrado perfeito** da figura resultante, com lados horizontais e verticais.

Seu objetivo é descobrir **o maior lado possível** desse quadrado.

---

## 📥 Entrada

- A primeira linha contém um número inteiro `k` (1 ≤ k ≤ 10) — o número de casos de teste.

Para cada caso de teste:

- Uma linha com um número inteiro `n` (1 ≤ n ≤ 1000) — o número de tábuas.
- Uma linha com `n` inteiros `a₁, a₂, ..., aₙ` (1 ≤ aᵢ ≤ n) — as alturas das tábuas.

---

## 📤 Saída

Para cada caso de teste, imprima uma única linha com um número inteiro — o **maior tamanho possível do lado do quadrado** que Ujan pode cortar.

---

## 💡 Lógica

Para formar um quadrado de lado `L`, precisamos de pelo menos `L` tábuas com **altura ≥ L**.

Assim, basta:

1. Ordenar as tábuas em ordem decrescente.
2. Para cada posição `i`, verificar se existem `i + 1` tábuas com altura `≥ i + 1`.
3. O maior valor de `i + 1` que satisfaz essa condição é o lado do maior quadrado possível.

---

## 🧪 Exemplos

### Entrada

```
4
5
4 3 1 4 5
4
4 4 4 4
3
1 1 1
5
5 5 1 1 5
```

### Saída

```
3
4
1
3
```

---

## 🧠 Explicação

- No primeiro exemplo, é possível escolher as tábuas `[5, 4, 3]` e cortar um quadrado `3×3`.
- No segundo, todas as tábuas têm altura `4`, e temos `4` delas — logo, um quadrado `4×4`.
- No terceiro, todas são de altura `1`, então só dá pra fazer `1×1`.
- No quarto, as três tábuas `5, 5, 5` permitem formar um `3×3`.
