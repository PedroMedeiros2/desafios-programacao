# 🧹 H - Tarefas (Chores)

Luba precisa fazer `n` tarefas hoje. A `i`-ésima tarefa leva `ai` unidades de tempo para ser concluída.

As tarefas estão em **ordem crescente** de tempo (`a[i] ≥ a[i-1]`), ou seja, estão **ordenadas**.

Porém, Luba pode se esforçar bastante em **no máximo `k` tarefas** e fazê-las em **`x` unidades de tempo** cada, independentemente do valor original `ai`.

Luba é muito responsável, então **todas as tarefas devem ser feitas**, mas ela quer saber **o tempo mínimo total** necessário para realizá-las.

---

## 📥 Entrada

- A primeira linha contém três inteiros: `n`, `k`, `x` (1 ≤ k ≤ n ≤ 100, 1 ≤ x ≤ 99):

  - `n`: número total de tarefas
  - `k`: número máximo de tarefas que Luba pode acelerar
  - `x`: tempo gasto por tarefa acelerada

- A segunda linha contém `n` inteiros `a₁, a₂, ..., aₙ` (2 ≤ ai ≤ 100), representando o tempo de cada tarefa.
  - Garante-se que os valores estão ordenados: `a₁ ≤ a₂ ≤ ... ≤ aₙ`

---

## 📤 Saída

- Imprima um único número: o **tempo mínimo total** necessário para realizar todas as tarefas.

---

## 📌 Exemplo de Entrada

```
4 2 2
3 6 7 10
```

## ✅ Exemplo de Saída

```
13
```

---

## 📌 Outro Exemplo de Entrada

```
5 2 1
100 100 100 100 100
```

## ✅ Exemplo de Saída

```
302
```

---

## 🧠 Explicação

- No **primeiro exemplo**, as tarefas mais demoradas são `7` e `10`. Acelerando essas duas com `x = 2`, temos:

  - Tempo total = 3 + 6 + 2 + 2 = 13

- No **segundo exemplo**, todas as tarefas são `100`. Acelerando duas delas:
  - Tempo total = 3 × 100 + 2 × 1 = 302
