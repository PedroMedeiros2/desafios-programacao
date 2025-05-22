# ⌨️ K - Padaria

Masha quer abrir sua própria padaria e assar muffins em uma das n cidades numeradas de 1 a n. Existem m estradas bidirecionais, cada uma conectando um par de cidades.

Para assar muffins em sua padaria, Masha precisa estabelecer o fornecimento de farinha de algum depósito. Existem apenas k depósitos, localizados em diferentes cidades numeradas a1, a2, ..., ak.

Infelizmente, a lei do país em que Masha vive proíbe a abertura de padarias em qualquer uma das cidades que possuem um depósito localizado nela. Ela só pode abri-la em uma das outras n - k cidades e, claro, a entrega da farinha deve ser paga — para cada quilômetro de caminho entre o depósito e a padaria, Masha deve pagar 1 rublo.

Formalmente, Masha pagará x rublos, se ela abrir a padaria em alguma cidade b (ai ≠ b para todo 1 ≤ i ≤ k) e escolher um depósito em alguma cidade s (s = aj para algum 1 ≤ j ≤ k) e b e s estiverem conectadas por algum caminho de estradas de comprimento total x (se houver mais de um caminho, Masha pode escolher qual deles deve ser usado).

Masha é muito econômica e racional. Ela está interessada em uma cidade onde possa abrir sua padaria (e escolher um dos k depósitos e um dos caminhos entre a cidade com a padaria e a cidade com o depósito) e pagar o valor mínimo possível em rublos pela entrega da farinha. Por favor, ajude Masha a encontrar esse valor.

---

## 📥 Entrada

A primeira linha da entrada contém três inteiros n, m e k (1 ≤ n, m ≤ 10<sup>5</sup>, 0 ≤ k ≤ n) — o número de cidades no país em que Masha vive, o número de estradas entre elas e o número de depósitos de farinha, respectivamente.

Em seguida, seguem m linhas. Cada uma delas contém três inteiros u, v e l (1 ≤ u, v ≤ n, 1 ≤ l ≤ 10<sup>9</sup>, u ≠ v) significando que existe uma estrada entre as cidades u e v com l quilômetros de comprimento.

Se k > 0, então a última linha da entrada contém k inteiros distintos a1, a2, ..., ak (1 ≤ ai ≤ n) — o número de cidades que possuem um depósito de farinha localizado nelas. Se k = 0, esta linha não é apresentada na entrada.

---

## 📤 Saída

Imprima o valor mínimo possível em rublos que Masha deve pagar pela entrega da farinha em uma única linha.

Se a padaria não puder ser aberta (satisfazendo as condições) em nenhuma das n cidades, imprima -1 em uma única linha.

---

## 🧪 Exemplo

### Entrada

```
5 4 2
1 2 5
1 2 3
2 3 4
1 4 10
1 5
```

### Saída

```
3
```

### Entrada

```
3 1 1
1 2 3
3
```

### Saída

```
-1
```

---

## 💡 Observações

A imagem ilustra o primeiro caso de exemplo. As cidades com depósito localizado e a estrada que representa a resposta estão escurecidas.
