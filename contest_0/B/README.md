# 🔁 B - O Problema de 3n + 1

Neste desafio, você irá analisar uma propriedade curiosa de um algoritmo simples — porém misterioso — conhecido por gerar sequências que sempre terminam em 1... ou será que não?

👀 Seu programa deve calcular o **comprimento máximo do ciclo** gerado por números entre dois valores inteiros fornecidos.

---

## 🧠 Como funciona o algoritmo:

Dado um número `n`, aplique as seguintes regras:

1.  Mostre `n`

2.  Se `n == 1`, **pare**

3.  Se `n` for **ímpar**, `n ← 3n + 1`

4.  Se `n` for **par**, `n ← n / 2`

5.  Volte ao passo 1

Exemplo para entrada `22`:

```

22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

```

O ciclo tem 16 números. Esse número é chamado de **comprimento do ciclo**.

---

## 📥 Entrada

Uma série de pares de números inteiros `i` e `j`, um par por linha.

- Todos os números serão maiores que 0 e menores que 10.000.

- Cada linha representa um intervalo de busca.

---

## 📤 Saída

Para cada linha de entrada, seu programa deve imprimir:

```

i j comprimento_máximo_do_ciclo

```

📝 Os números `i` e `j` devem aparecer na **mesma ordem** da entrada.

---

## 📌 Exemplo de Entrada

```txt

1 10

100 200

201 210

900 1000

```

## ✅ Exemplo de Saída

```txt

1 10 20

100 200 125

201 210 89

900 1000 174

```
