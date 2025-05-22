# ⌨️ F - Fuga do Rei

Alice e Bob estão jogando xadrez em um enorme tabuleiro de dimensões n × n. Alice tem uma única peça restante — uma rainha, localizada em (ax, ay), enquanto Bob tem apenas o rei em (bx, by). Alice acha que, como sua rainha está dominando o tabuleiro, a vitória é dela.

Mas Bob tem um plano astuto para conquistar a vitória para si mesmo — ele precisa marchar com seu rei até (cx, cy) para reivindicar a vitória. Como Alice está distraída por seu senso de superioridade, ela não move mais nenhuma peça, e é apenas Bob quem faz os movimentos.

Bob vencerá se conseguir mover seu rei de (bx, by) para (cx, cy) sem nunca ficar em xeque.

Lembre-se de que um rei pode se mover para qualquer uma das 8 casas adjacentes. Um rei está em xeque se estiver na mesma linha, coluna ou diagonal que a rainha inimiga.

Descubra se Bob pode vencer ou não.

---

## 📥 Entrada

A primeira linha contém um único inteiro n (3 ≤ n ≤ 1000) — as dimensões do tabuleiro de xadrez.

A segunda linha contém dois inteiros ax e ay (1 ≤ ax, ay ≤ n) — as coordenadas da rainha de Alice.

A terceira linha contém dois inteiros bx e by (1 ≤ bx, by ≤ n) — as coordenadas do rei de Bob.

A quarta linha contém dois inteiros cx e cy (1 ≤ cx, cy ≤ n) — as coordenadas da localização para a qual Bob quer ir.

É garantido que o rei de Bob não está atualmente em xeque e a localização de destino também não está em xeque.

Além disso, o rei não está localizado na mesma casa que a rainha (ou seja, ax ≠ bx ou ay ≠ by), e o destino não coincide nem com a posição da rainha (ou seja, cx ≠ ax ou cy ≠ ay) nem com a posição do rei (ou seja, cx ≠ bx ou cy ≠ by).

---

## 📤 Saída

Imprima "YES" (sem aspas) se Bob puder ir de (bx, by) para (cx, cy) sem nunca ficar em xeque, caso contrário, imprima "NO".

Você pode imprimir cada letra em qualquer caso (maiúsculo ou minúsculo).

---

## 🧪 Exemplo

### Entrada

```
8
4 4
1 3
3 1
```

### Saída

```
YES
```

### Entrada

```
8
4 4
2 3
1 6
```

### Saída

```
NO
```

### Entrada

```
8
3 5
1 2
6 1
```

### Saída

```
NO
```

---

## 💡 Observações

Nos diagramas abaixo, as casas controladas pela rainha preta estão marcadas em vermelho, e a casa de destino está marcada em azul.

No primeiro caso, o rei pode se mover, por exemplo, pelas casas (2, 3) e (3, 2). Note que a rota direta por (2, 2) passa por xeque.

No segundo caso, a rainha vigia a quarta linha, e o rei não tem como cruzá-la.

No terceiro caso, a rainha vigia a terceira coluna.
