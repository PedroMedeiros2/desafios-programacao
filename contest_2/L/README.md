# ⌨️ L - Torre do Mortal Kombat

Você e seu amigo estão jogando o jogo Mortal Kombat XI. Vocês estão tentando passar por uma torre de desafios. Existem n chefes nesta torre, numerados de 1 a n. O tipo do i-ésimo chefe é a[i]. Se o i-ésimo chefe for fácil, então seu tipo é a[i] = 0, caso contrário, este chefe é difícil e seu tipo é a[i] = 1.

Durante uma sessão, você ou seu amigo podem matar um ou dois chefes (nem você nem seu amigo podem pular a sessão, então o número mínimo de chefes mortos durante uma sessão é pelo menos um). Após a sessão do seu amigo, sua sessão começa, depois novamente a sessão do seu amigo começa, sua sessão começa, e assim por diante. A primeira sessão é a sessão do seu amigo.

Seu amigo precisa melhorar porque ele não consegue realmente matar chefes difíceis. Para matá-los, ele usa pontos de pulo. Um ponto de pulo pode ser usado para matar um chefe difícil.

Sua tarefa é encontrar o número mínimo de pontos de pulo que seu amigo precisa usar para que você e seu amigo matem todos os n chefes na ordem dada.

Por exemplo: suponha que n = 8, a = [1, 0, 1, 1, 0, 1, 1, 1]. Então, o melhor curso de ação é o seguinte:

- seu amigo mata os dois primeiros chefes, usando um ponto de pulo para o primeiro chefe;
- você mata o terceiro e o quarto chefes;
- seu amigo mata o quinto chefe;
- você mata o sexto e o sétimo chefes;
- seu amigo mata o último chefe, usando um ponto de pulo, então a torre é completada usando dois pontos de pulo.

Você deve responder a t casos de teste independentes.

---

## 📥 Entrada

A primeira linha da entrada contém um inteiro t (1 ≤ t ≤ 2 ⋅ 10<sup>4</sup>) — o número de casos de teste. Em seguida, seguem t casos de teste.

A primeira linha do caso de teste contém um inteiro n (1 ≤ n ≤ 2 ⋅ 10<sup>5</sup>) — o número de chefes. A segunda linha do caso de teste contém n inteiros a[1], a[2], …, a[n] (0 ≤ a[i] ≤ 1), onde a[i] é o tipo do i-ésimo chefe.

É garantido que a soma de n não excede 2 ⋅ 10<sup>5</sup> (∑ n ≤ 2 ⋅ 10<sup>5</sup>).

---

## 📤 Saída

Para cada caso de teste, imprima a resposta: o número mínimo de pontos de pulo que seu amigo precisa usar para que você e seu amigo matem todos os n chefes na ordem dada.

---

## 🧪 Exemplo

### Entrada

```
6
8
1 0 1 1 0 1 1 1
5
1 1 1 1 0
7
1 1 1 1 0 0 1
6
1 1 1 1 1 1
1
1
1
0
```

### Saída

```
2
2
2
2
1
0
```
