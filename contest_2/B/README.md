# ⌨️ B - Festa

Uma empresa possui n funcionários, numerados de 1 a n. Cada funcionário ou não possui um gerente imediato ou possui exatamente um gerente imediato, que é outro funcionário com um número diferente. Um funcionário A é considerado superior de outro funcionário B se pelo menos uma das seguintes condições for verdadeira:

* O funcionário A é o gerente imediato do funcionário B.
* O funcionário B possui um gerente imediato, o funcionário C, tal que o funcionário A é superior ao funcionário C.

A empresa não terá ciclos de gerência. Ou seja, não existirá um funcionário que seja superior de seu próprio gerente imediato.

Hoje, a empresa organizará uma festa. Isso envolve dividir todos os n funcionários em vários grupos: cada funcionário deve pertencer a exatamente um grupo. Além disso, dentro de qualquer grupo, não deve haver dois funcionários A и B tais que A seja superior de B.

Qual é o número mínimo de grupos que devem ser formados?

---

## 📥 Entrada

A primeira linha contém o inteiro n (1 ≤ n ≤ 2000) — o número de funcionários.

As próximas n linhas contêm os inteiros p_i (1 ≤ p_i ≤ n ou p_i = -1). Cada p_i denota o gerente imediato do i-ésimo funcionário. Se p_i for -1, isso significa que o i-ésimo funcionário não possui um gerente imediato.

É garantido que nenhum funcionário será o gerente imediato de si mesmo (p_i ≠ i).

Além disso, não haverá ciclos de gerência.

---

## 📤 Saída

Imprima um único inteiro que denote o número mínimo de grupos que serão formados na festa.

---

## 🧪 Exemplo

### Entrada

```
5
-1
1
2
1
-1
```

### Saída

```
3
```

---

## 💡 Observações

Para o primeiro exemplo, três grupos são suficientes, por exemplo:

* Funcionário 1
* Funcionários 2 e 4
* Funcionários 3 e 5
