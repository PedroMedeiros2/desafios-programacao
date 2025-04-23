# 🧬 F - Reconstruindo Arquivos Quebrados

Seu amigo, estudante de bioquímica, tropeçou enquanto carregava uma bandeja com arquivos digitais. Todos os arquivos caíram no chão e se **quebraram em dois pedaços**. Por sorte, todos os arquivos eram **idênticos**, e todos os **fragmentos foram recuperados**. Mas como se misturaram completamente, você precisa ajudá-lo a descobrir como os arquivos originais eram.

Você recebeu os fragmentos como **strings binárias** (compostas por `'0'` e `'1'`) e precisa reconstruir o **bit pattern completo de cada arquivo**.

---

## 📥 Entrada

A entrada começa com um número inteiro positivo indicando o número de casos de teste.

Esse número é seguido por uma linha em branco.

Cada caso de teste é composto por **diversos fragmentos** binários, um por linha, terminando **no final do arquivo** (`EOF`) ou por uma **linha em branco** que indica o fim do caso de teste.

- Cada fragmento é uma string de `'0'`s e `'1'`s.
- Sempre haverá um número **par** de fragmentos.
- Cada arquivo foi quebrado **em exatamente dois pedaços**, então os fragmentos podem ser combinados dois a dois para formar os arquivos originais.
- Não haverá mais de `2 * 144 = 288` fragmentos por caso.

---

## 📤 Saída

Para **cada caso de teste**, imprima **uma única linha** com o bit pattern completo de um dos arquivos originais.

Se houver **mais de uma possível reconstrução**, qualquer uma pode ser impressa.

Separe a saída de dois casos consecutivos com **uma linha em branco**.

---

## 🧪 Exemplo

### Entrada
```
1

011
0111
01110
111
0111
10111
```

### Saída
```
01110111
```