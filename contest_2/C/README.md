# ⌨️ C - Saltos Longos

Polycarp encontrou debaixo da árvore de Natal um array `a` de `n` elementos e instruções para brincar com ele:

- Primeiro, escolha um índice `i` (1 ≤ `i` ≤ `n`) — a posição inicial no array. Coloque a ficha no índice `i` (sobre o valor `a[i]`).
- Enquanto `i` ≤ `n`, adicione `a[i]` à sua pontuação e mova a ficha `a[i]` posições para a direita (ou seja, substitua `i` por `i` + `a[i]`).
- Se `i` > `n`, então Polycarp termina o jogo.

Por exemplo, se `n` = 5 e `a` = [7, 3, 1, 2, 3], então as seguintes opções de jogo são possíveis:

- Polycarp escolhe `i` = 1. Processo do jogo: `i` = 1 ⟶ 8. A pontuação do jogo é: `a[1]` = 7.
- Polycarp escolhe `i` = 2. Processo do jogo: `i` = 2 ⟶ 5 ⟶ 8. A pontuação do jogo é: `a[2]` + `a[5]` = 3 + 3 = 6.
- Polycarp escolhe `i` = 3. Processo do jogo: `i` = 3 ⟶ 4 ⟶ 6. A pontuação do jogo é: `a[3]` + `a[4]` = 1 + 2 = 3.
- Polycarp escolhe `i` = 4. Processo do jogo: `i` = 4 ⟶ 6. A pontuação do jogo é: `a[4]` = 2.
- Polycarp escolhe `i` = 5. Processo do jogo: `i` = 5 ⟶ 8. A pontuação do jogo é: `a[5]` = 3.

Ajude Polycarp a descobrir a pontuação máxima que ele pode obter se escolher o índice inicial de forma ótima.

---

## 📥 Entrada

A primeira linha contém um inteiro `t` (1 ≤ `t` ≤ 10<sup>4</sup>) — o número de casos de teste. Em seguida, seguem `t` casos de teste.

A primeira linha de cada caso de teste contém um inteiro `n` (1 ≤ `n` ≤ 2 ⋅ 10<sup>5</sup>) — o tamanho do array `a`.

A próxima linha contém `n` inteiros `a[1]`, `a[2]`, ..., `a[n]` (1 ≤ `a[i]` ≤ 10<sup>9</sup>) — os elementos do array `a`.

É garantido que a soma de `n` sobre todos os casos de teste não excede 2 ⋅ 10<sup>5</sup>.

---

## 📤 Saída

Para cada caso de teste, imprima em uma linha separada um número — a pontuação máxima que Polycarp pode obter jogando o jogo no array correspondente de acordo com as instruções do enunciado. Note que Polycarp escolhe qualquer posição inicial de 1 a `n` de forma a maximizar seu resultado.

---

## 🧪 Exemplo

### Entrada

```
4
5
7 3 1 2 3
3
2 1 4
6
2 1000 2 3 995 1
5
1 1 1 1 1
```

### Saída

```
7
6
1000
5
```

---

## 💡 Observações

O primeiro caso de teste é explicado no enunciado.

No segundo caso de teste, a pontuação máxima pode ser alcançada escolhendo `i` = 1.

No terceiro caso de teste, a pontuação máxima pode ser alcançada escolhendo `i` = 2.

No quarto caso de teste, a pontuação máxima pode ser alcançada escolhendo `i` = 1.
