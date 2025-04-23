
# 🕵️‍♂️ D - Quebra de Criptografia por Texto Conhecido

Um método comum (mas inseguro) de criptografar textos é permutar as letras do alfabeto. Ou seja, cada letra do alfabeto é **substituída consistentemente** por outra letra única. Para que a criptografia seja reversível, **nenhuma letra pode ser mapeada para mais de uma outra**.

Neste problema, você será um criptanalista com acesso a várias linhas de texto criptografado. Sabemos que uma das linhas é a versão criptografada da famosa frase:

```
the quick brown fox jumps over the lazy dog
```

Sua tarefa é decodificar todas as linhas utilizando essa pista.

---

## 📥 Entrada

- A primeira linha contém um número inteiro `t` indicando o número de casos de teste.
- Cada caso de teste é separado por uma **linha em branco**.
- Cada caso consiste em **várias linhas de texto criptografado**, com no máximo 80 caracteres cada.
- Cada linha contém apenas letras minúsculas e espaços.
- No máximo 100 linhas por caso de teste.

---

## 📤 Saída

- Para cada caso de teste, imprima todas as linhas descriptografadas.
- Utilize o **primeiro mapeamento possível** onde uma das linhas corresponde à frase chave `the quick brown fox jumps over the lazy dog`.
- Caso não seja possível decodificar nenhuma linha com a frase de referência, imprima:
  ```
  No solution.
  ```
- Separe os casos com uma **linha em branco**.

---

## 📌 Observações

- A frase de referência contém **todas as 26 letras do alfabeto**, o que a torna ideal para esse tipo de ataque.
- A substituição é **por letra**, e o mapeamento deve ser **bijetivo** (1-para-1 e sem repetição).
- Os espaços devem ser mantidos como estão.

---

## 🧪 Exemplo

### Entrada
```
1

vtz ud xnm xugm itr pyy jttk gmv xt otgm xt xnm puk ti xnm fprxq
xnm ceuob lrtzv ita hegfd tsmr xnm ypwq ktj
frtjrpgguvj otvxmdxd prm iev prmvx xnmq
```

### Saída
```
now is the time for all good men to come to the aid of the party
the quick brown fox jumps over the lazy dog
programming contests are fun arent they
```

---


## ✅ Restrições

- Os testes garantem que, se houver solução, ela será única e usará a primeira linha possível como referência.
- O desempenho deve ser bom o suficiente para processar até 100 linhas por caso com até 80 caracteres cada.
