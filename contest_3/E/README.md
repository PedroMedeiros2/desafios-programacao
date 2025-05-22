# ⌨️ E - The Way to Home

Um sapo vive no eixo Ox e precisa chegar em casa, que está no ponto n. Ele começa a partir do ponto 1. O sapo pode pular para a direita a uma distância não superior a d. Assim, depois de pular do ponto x, ele pode alcançar o ponto x + a, onde a é um inteiro de 1 a d.

Para cada ponto de 1 a n, sabe-se se há uma flor de lírio nele. O sapo só pode pular em pontos com lírios. É garantido que há lírios nos pontos 1 e n.

Determine o número mínimo de pulos que o sapo precisa para chegar em casa, que está no ponto n, a partir do ponto 1. Considere que inicialmente o sapo está no ponto 1. Se o sapo não puder chegar em casa, imprima -1.

---

## 📥 Entrada

A primeira linha contém dois inteiros n e d (2 ≤ n ≤ 100, 1 ≤ d ≤ n - 1) — o ponto que o sapo quer alcançar e o comprimento máximo do pulo do sapo.

A segunda linha contém uma string s de comprimento n, consistindo de zeros e uns. Se um caractere da string s for igual a zero, então no ponto correspondente não há flor de lírio. No outro caso, no ponto correspondente há uma flor de lírio. É garantido que o primeiro e o último caracteres da string s são iguais a um.

---

## 📤 Saída

Se o sapo não puder chegar em casa, imprima -1.

No outro caso, imprima o número mínimo de pulos que o sapo precisa para chegar em casa, que está no ponto n, a partir do ponto 1.

---

## 🧪 Exemplos

### Entrada

```
8 4
10010101
```

### Saída

```
2
```

### Entrada

```
4 2
1001
```

### Saída

```
-1
```

### Entrada

```
8 4
11100101
```

### Saída

```
3
```

### Entrada

```
12 3
101111100101
```

### Saída

```
4
```

---

## 📝 Observações

No primeiro exemplo, o sapo pode chegar em casa em dois pulos: o primeiro pulo do ponto 1 para o ponto 4 (o comprimento do pulo é três), e o segundo pulo do ponto 4 para o ponto 8 (o comprimento do pulo é quatro).

No segundo exemplo, o sapo não pode chegar em casa, porque para fazê-lo ele precisa pular a uma distância três, mas o comprimento máximo do seu pulo é igual a dois.
