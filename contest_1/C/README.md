# 🔁 C - Permutação Comum

Dadas duas strings contendo apenas letras minúsculas, o objetivo é encontrar **a maior string possível** formada por letras que aparecem em **ambas as strings**. A string resultante deve conter cada letra **o número mínimo de vezes que ela aparece nas duas strings**, e deve estar em **ordem alfabética**.

---

## 📥 Entrada

- A entrada contém **várias linhas**.
- A cada **duas linhas consecutivas**, temos um par de strings `a` e `b` (1 ≤ |a|, |b| ≤ 1000), compostas apenas por letras minúsculas.

---

## 📤 Saída

- Para cada par de strings, imprima em uma linha a **maior string em ordem alfabética** que pode ser formada pelas letras que aparecem nas duas strings.
- Cada letra da resposta deve aparecer **o número mínimo de vezes** entre as ocorrências em `a` e em `b`.

---

## 🧠 Explicação

Queremos encontrar os **caracteres em comum** entre as duas strings, respeitando a **frequência mínima** de cada um. Por exemplo:

- `a = pretty`, `b = women`  
  `a` contém: `p r e t t y`  
  `b` contém: `w o m e n`  
  Letra em comum: `e`  
  Frequência mínima: `1`  
  Resultado: `e`

- `a = walking`, `b = down`  
  Letras em comum: `n`, `w` → resultado ordenado: `nw`

---

## 🧪 Exemplo

### Entrada

```
pretty
women
walking
down
the
street
```

### Saída

```
e
nw
et
```
