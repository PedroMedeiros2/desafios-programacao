# ⌨️ F - New Year's Number

Polycarp se lembrou do ano 2020 e está feliz com a chegada do novo ano 2021. Para lembrar de um momento tão maravilhoso, Polycarp quer representar o número n como a soma de uma certa quantidade de 2020 e uma certa quantidade de 2021.

Por exemplo, se:

- n = 4041, então o número n pode ser representado como a soma 2020 + 2021;
- n = 4042, então o número n pode ser representado como a soma 2021 + 2021;
- n = 8081, então o número n pode ser representado como a soma 2020 + 2020 + 2020 + 2021;
- n = 8079, então o número n não pode ser representado como a soma dos números 2020 e 2021.

Ajude Polycarp a descobrir se o número n pode ser representado como a soma de uma certa quantidade de números 2020 e uma certa quantidade de números 2021.

---

## 📥 Entrada

A primeira linha contém um inteiro t (1 ≤ t ≤ 10^4) — o número de casos de teste. Em seguida, seguem t casos de teste.

Cada caso de teste contém um inteiro n (1 ≤ n ≤ 10^6) — o número que Polycarp quer representar como a soma dos números 2020 e 2021.

---

## 📤 Saída

Para cada caso de teste, imprima em uma linha separada:

- "YES" se o número n for representável como a soma de uma certa quantidade de 2020 e uma certa quantidade de 2021;
- "NO" caso contrário.

Você pode imprimir "YES" e "NO" em qualquer caso (por exemplo, as strings yEs, yes, Yes e YES serão reconhecidas como positivas).

---

## 🧪 Exemplos

### Entrada

```
5
1
4041
4042
8081
8079
```

### Saída

```
NO
YES
YES
YES
NO
```
