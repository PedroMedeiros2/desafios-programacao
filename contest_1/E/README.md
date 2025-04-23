# 🧑‍⚖️ E - Juiz Automático Preguiçoso

Os juízes das competições de programação são conhecidos por serem muito exigentes — e bem preguiçosos! Para facilitar suas vidas e dificultar a dos competidores, queremos um sistema automatizado que classifique as submissões como:

- ✅ **Accepted**: A saída do time é **idêntica** à saída padrão, caractere por caractere e linha por linha.
- ⚠️ **Presentation Error**: Todos os **dígitos numéricos** estão corretos e na ordem correta, mas há diferenças em espaços, quebras de linha ou outros caracteres.
- ❌ **Wrong Answer**: A resposta do time contém **erros numéricos** ou está em ordem errada.

Sua missão é implementar esse juiz automático.

---

## 📥 Entrada

A entrada é composta por vários conjuntos de dados.

Cada conjunto segue este formato:

1. Um número inteiro `n < 100` indicando o número de linhas da **saída padrão**.
2. As próximas `n` linhas contêm a saída padrão.
3. Um número inteiro `m < 100` indicando o número de linhas da **saída do time**.
4. As próximas `m` linhas contêm a saída do time.

A entrada termina com uma linha contendo `0`, que **não deve ser processada**.

⚠️ Nenhuma linha terá mais que 120 caracteres.

---

## 📤 Saída

Para cada conjunto de dados, imprima:

```
Run #x: <resultado>
```

Onde `<resultado>` pode ser:

- `Accepted`
- `Presentation Error`
- `Wrong Answer`

E `x` é o número do conjunto (começando de 1).

---

## 🧪 Exemplo

### Entrada

```
2
The answer is: 10
The answer is: 5
2
The answer is: 10
The answer is: 5
2
The answer is: 10
The answer is: 5
2
The answer is: 10
The answer is: 15
2
The answer is: 10
The answer is: 5
2
The answer is: 10
The answer is: 5
3
Input Set #1: YES
Input Set #2: NO
Input Set #3: NO
3
Input Set #0: YES
Input Set #1: NO
Input Set #2: NO
1
1 0 1 0
1
1010
1
The judges are mean!
1
The judges are good!
0
```

### Saída

```
Run #1: Accepted
Run #2: Wrong Answer
Run #3: Presentation Error
Run #4: Wrong Answer
Run #5: Presentation Error
Run #6: Presentation Error
```
