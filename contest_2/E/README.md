# ⌨️ E - Crachá

Na Escola de Verão de Informática, se um aluno não se comporta bem, os professores fazem um furo em seu crachá. E hoje um dos professores pegou um grupo de n alunos fazendo mais uma travessura.

Vamos supor que todos esses alunos estejam numerados de 1 a n. O professor foi até o aluno `a` e fez um furo em seu crachá. O aluno, no entanto, alegou que o principal culpado é algum outro aluno `p[a]`.

Depois disso, o professor foi até o aluno `p[a]` e fez um furo em seu crachá também. O aluno, em resposta, disse que o principal culpado era o aluno `p[p[a]]`.

Esse processo continuou por um tempo, mas, como o número de alunos era finito, eventualmente o professor chegou ao aluno que já tinha um furo em seu crachá.

Depois disso, o professor fez um segundo furo no crachá do aluno e decidiu que havia terminado com esse processo, e foi para a sauna.

Você não sabe qual foi o primeiro aluno pego pelo professor. No entanto, você conhece todos os números `p[i]`. Sua tarefa é descobrir para cada aluno `a`, quem seria o aluno com dois furos no crachá se o primeiro aluno pego fosse `a`.

---

## 📥 Entrada

A primeira linha da entrada contém o único inteiro `n` (1 ≤ `n` ≤ 1000) — o número de alunos travessos.

A segunda linha contém `n` inteiros `p[1]`, ..., `p[n]` (1 ≤ `p[i]` ≤ `n`), onde `p[i]` indica o aluno que foi denunciado ao professor pelo aluno `i`.

---

## 📤 Saída

Para cada aluno `a` de 1 a `n`, imprima qual aluno receberia dois furos no crachá, se `a` fosse o primeiro aluno pego pelo professor.

---

## 🧪 Exemplo

### Entrada

```
3
2 3 2
```

### Saída

```
2 2 3
```

### Entrada

```
3
1 2 3
```

### Saída

```
1 2 3
```

---

## 💡 Observações

A imagem corresponde ao primeiro caso de teste de exemplo.

Quando `a` = 1, o professor vai aos alunos 1, 2, 3, 2, nesta ordem, e o aluno 2 é quem recebe um segundo furo em seu crachá.

Quando `a` = 2, o professor vai aos alunos 2, 3, 2, e o aluno 2 recebe um segundo furo em seu crachá. Quando `a` = 3, o professor visitará os alunos 3, 2, 3 com o aluno 3 recebendo um segundo furo em seu crachá.

Para o segundo caso de teste de exemplo, fica claro que não importa com quem o professor comece, esse aluno seria aquele que receberia o segundo furo em seu crachá.
