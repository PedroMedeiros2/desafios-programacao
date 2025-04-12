# 🔢 I - Três Índices (Three Indices)

Você recebe uma **permutação** `p` de `n` inteiros distintos, onde `p` contém **todos os inteiros de 1 até n**, exatamente uma vez.

Seu objetivo é encontrar **três índices `i`, `j`, `k`** (com `1 ≤ i < j < k ≤ n`) que satisfaçam as seguintes condições:

- `p[i] < p[j]`
- `p[j] > p[k]`

Ou seja, a sequência deve **subir de `i` para `j` e depois descer de `j` para `k`**.

Se for possível, imprima **YES** e os índices `i`, `j`, `k`. Caso contrário, imprima **NO**.

---

## 📥 Entrada

- A primeira linha contém o número de casos de teste `T` (1 ≤ T ≤ 200).

Para cada caso de teste:

- Uma linha com o número `n` (3 ≤ n ≤ 1000): o tamanho da permutação.
- Uma linha com `n` inteiros distintos `p₁, p₂, ..., pₙ` (1 ≤ pᵢ ≤ n): a permutação.

---

## 📤 Saída

Para cada caso de teste:

- Se existir uma tripla `(i, j, k)` válida, imprima:

  ```
  YES
  i j k
  ```

- Caso contrário, imprima:
  ```
  NO
  ```

Se houver mais de uma tripla válida, qualquer uma delas pode ser impressa.

---

## 📌 Exemplo de Entrada

```
3
4
2 1 4 3
6
4 6 1 2 5 3
5
5 3 1 2 4
```

## ✅ Exemplo de Saída

```
YES
2 3 4
YES
3 5 6
NO
```

---

## 🧠 Explicação

- No primeiro caso: `p = [2, 1, 4, 3]`. Os elementos nos índices `2, 3, 4` são `1, 4, 3` → `1 < 4 > 3`.
- No segundo caso: `p = [4, 6, 1, 2, 5, 3]`. Nos índices `3, 5, 6`: `1 < 5 > 3`.
- No terceiro caso: não existe nenhuma tripla que satisfaça as condições.
