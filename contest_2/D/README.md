# ⌨️ D - Torre, Bispo e Rei

O pequeno Petya está aprendendo a jogar xadrez. Ele já aprendeu como mover um rei, uma torre e um bispo. Vamos relembrar as regras de movimento das peças de xadrez. Um tabuleiro de xadrez possui 64 casas organizadas em uma tabela 8 × 8. Uma casa é representada por um par de inteiros (r, c) — o número da linha e o número da coluna (em um jogo clássico, as colunas são tradicionalmente indexadas por letras). Cada peça de xadrez ocupa exatamente uma casa. Fazer um movimento é mover uma peça de xadrez, e as peças se movem pelas seguintes regras:

- Uma torre move qualquer número de casas horizontalmente ou verticalmente.
- Um bispo move qualquer número de casas diagonalmente.
- Um rei move uma casa em qualquer direção — horizontalmente, verticalmente ou diagonalmente.

Petya está pensando no seguinte problema: qual o número mínimo de movimentos necessários para cada uma dessas peças se mover da casa (r1, c1) para a casa (r2, c2)? Assume-se que não há outras peças além desta no tabuleiro. Ajude-o a resolver este problema.

---

## 📥 Entrada

A entrada contém quatro inteiros r1, c1, r2, c2 (1 ≤ r1, c1, r2, c2 ≤ 8) — as coordenadas da casa inicial e final. A casa inicial não coincide com a final.

Você pode assumir que as linhas do tabuleiro de xadrez são numeradas de cima para baixo de 1 a 8, e as colunas são numeradas da esquerda para a direita de 1 a 8.

---

## 📤 Saída

Imprima três inteiros separados por espaços: o número mínimo de movimentos que a torre, o bispo e o rei (nesta ordem) precisam para se mover da casa (r1, c1) para a casa (r2, c2). Se uma peça não puder fazer tal movimento, imprima 0 em vez do número correspondente.

---

## 🧪 Exemplo

### Entrada

```
4 3 1 6
```

### Saída

```
2 1 3
```

### Entrada

```
5 5 5 6
```

### Saída

```
1 0 1
```
