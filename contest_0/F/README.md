# 🧱 F - Construir um Retângulo

Você tem **três varetas** com comprimentos inteiros `l1`, `l2` e `l3`.

Sua tarefa é verificar se é possível **quebrar exatamente uma** dessas varetas em **duas partes com comprimentos inteiros positivos**, de forma que:

- As duas partes resultantes tenham **comprimento maior que 0**;
- A **soma das partes seja igual** ao comprimento original da vareta quebrada;
- Com as quatro varetas (as duas intactas + as duas partes da quebrada) seja possível construir um **retângulo** — ou seja, dois pares de lados com comprimentos iguais.

Um **quadrado** também é considerado um retângulo.

---

## 📥 Entrada

- A primeira linha contém um inteiro `t` (1 ≤ t ≤ 10⁴) — o número de casos de teste.
- Cada uma das próximas `t` linhas contém três inteiros `l1`, `l2`, `l3` (1 ≤ li ≤ 10⁸) — os comprimentos das varetas.

---

## 📤 Saída

Para cada caso de teste, imprima:

- `"YES"` se for possível construir um retângulo com as quatro varetas;
- `"NO"` caso contrário.

Você pode usar letras maiúsculas ou minúsculas na resposta.

---

## 📌 Exemplo de Entrada

```
4
6 1 5
2 5 2
2 4 2
5 5 4
```

## ✅ Exemplo de Saída

```
YES
NO
YES
YES
```

---

## 📝 Explicação

- No **primeiro caso**, a vareta de comprimento `6` pode ser quebrada em `1` e `5`, formando pares `1, 1` e `5, 5`.
- No **segundo caso**, nenhuma quebra possível resulta em dois pares com comprimentos iguais.
- No **terceiro caso**, quebrando a vareta de comprimento `4` em `2` e `2`, temos pares `2, 2` e `2, 2` — um quadrado.
- No **quarto caso**, quebrando a vareta de `4` em `2` e `2`, temos pares `5, 5` e `2, 2`.
