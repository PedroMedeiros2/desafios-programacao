# 📐 J - Projeção Paralela (Parallel Projection)

Vika tem uma sala no formato de um **paralelepípedo retangular**. O chão é um retângulo de dimensões `w × d`, e o teto está a uma altura constante `h`.

Um **laptop** está no ponto `(a, b)` sobre o chão, e um **projetor** está pendurado no teto exatamente sobre o ponto `(f, g)`.

Vika quer conectar o laptop ao projetor com um **cabo que só pode correr pelas paredes, chão ou teto**, e **sempre paralelo às arestas do cubo** (sem diagonais).

Seu objetivo é encontrar o **comprimento mínimo** do cabo necessário.

---

## 📥 Entrada

- A primeira linha contém um inteiro `t` (1 ≤ t ≤ 10⁴) — número de casos de teste.

Para cada caso de teste:

- Uma linha com três inteiros `w, d, h` (2 ≤ w, d, h ≤ 1000) — largura, profundidade e altura da sala.
- Uma linha com quatro inteiros `a, b, f, g` (0 < a, f < w; 0 < b, g < d) — coordenadas do laptop `(a, b)` e do projetor `(f, g)`.

---

## 📤 Saída

Para cada caso de teste, imprima uma linha contendo um único inteiro — o **menor comprimento possível** do cabo, seguindo as restrições.

---

## 🧮 Cálculo da distância

O cabo precisa subir de `(a, b, 0)` até o teto (altura `h`) e descer de volta até `(f, g, 0)` pelo caminho mais curto, usando as paredes, teto ou chão. Isso sempre totaliza **`h + distância_minima_no_chão`**, onde:

A distância mínima no chão pode ser calculada como:

```
min(
  |a - f| + b + g,        -> caminho pelas paredes da frente
  |a - f| + (d - b) + (d - g),  -> caminho pelas paredes de trás
  |b - g| + a + f,        -> caminho pelas laterais esquerdas
  |b - g| + (w - a) + (w - f)   -> caminho pelas laterais direitas
)
```

---

## 💡 Exemplo de Entrada

```
5
55 20 29
23 10 18 3
20 10 5
1 5 2 5
15 15 4
7 13 10 10
2 1000 2
1 1 1 999
10 4 10
7 1 2 1
```

## ✅ Exemplo de Saída

```
47
8
14
1002
17
```

---

## 🧠 Explicação

No primeiro exemplo:

- A distância vertical total é `h = 29`.
- A menor distância horizontal entre `(23,10)` e `(18,3)` seguindo as regras é `18`.
- Total: `29 + 18 = 47`.

Esse mesmo raciocínio se aplica aos demais casos.
