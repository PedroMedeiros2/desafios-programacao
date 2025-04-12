# 🔢 D - Gerador de Primos

Peter quer gerar alguns números primos para usar em seu sistema de criptografia. Sua tarefa é ajudá-lo a gerar **todos os números primos entre dois valores dados**.

---

## 📥 Entrada

- A primeira linha da entrada contém um número inteiro `t` (t ≤ 10), representando o número de casos de teste.
- As próximas `t` linhas contêm dois inteiros `m` e `n` (1 ≤ m ≤ n ≤ 1.000.000.000, `n - m` ≤ 100.000), separados por um espaço.

---

## 📤 Saída

Para cada caso de teste, imprima todos os números primos `p` tais que `m ≤ p ≤ n`, **um por linha**.

- Separe a saída de cada caso de teste com **uma linha em branco**.

---

## 📌 Exemplo de Entrada

```
2
1 10
3 5
```

## ✅ Exemplo de Saída

```
2
3
5
7

3
5
```

---

## ⚠️ Aviso

> Entrada/Saída com grandes volumes de dados — tenha cuidado ao usar linguagens mais lentas ou que lidam mal com entrada e saída. Prefira algoritmos eficientes, como o Crivo de Eratóstenes com otimizações (por exemplo, crivo segmentado).
