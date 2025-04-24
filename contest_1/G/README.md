# 🧾 G - Formatador de Texto estilo Unix `fmt`

Você deve implementar um programa similar ao utilitário **`fmt`** do Unix, que formata blocos de texto para que cada linha de saída tenha no **máximo 72 caracteres**, com quebras de linha feitas de forma apropriada.

---

## 📜 Regras de Formatação

- Uma nova linha pode começar **em qualquer espaço** da entrada.
- Se uma linha for quebrada, **não deve haver espaços no fim da linha anterior** nem **no começo da nova**.
- Quebras de linha na entrada podem ser eliminadas na saída **se não forem seguidas por um espaço ou nova quebra de linha**. Se forem eliminadas, são substituídas por **um único espaço**.
- Nunca devem haver espaços no final de uma linha.
- Palavras ou blocos com mais de 72 caracteres **sem espaços** devem ser impressos **sozinhos** em uma linha.

---

## 📥 Entrada

- O programa receberá **várias linhas de texto arbitrário**.
- A entrada termina no **fim do arquivo (EOF)**.
- Cada linha pode conter espaços, quebras de linha, e caracteres comuns de texto.

---

## 📤 Saída

- O texto deve ser reformatado para que cada linha tenha no **máximo 72 caracteres**.
- Palavras devem ser agrupadas de forma eficiente para preencher ao máximo o espaço, respeitando as regras acima.

---

## 🧪 Exemplo

### Entrada

```
    Unix fmt

The unix fmt program reads lines of text, combining
and breaking lines so as to create an
output file with lines as close to without exceeding
72 characters long as possible. The rules for combining and breaking
lines are as follows.

    1. A new line may be started anywhere there is a space in the input.
If a new line is started, there will be no trailing blanks at the
end of the previous line or at the beginning of the new line.

    2. A line break in the input may be eliminated in the output, provided
it is not followed by a space or another line break. If a line
break is eliminated, it is replaced by a space.
```

### Saída

```
    Unix fmt
The unix fmt program reads lines of text, combining and breaking lines
so as to create an output file with lines as close to without exceeding
72 characters long as possible. The rules for combining and breaking
lines are as follows.

    1. A new line may be started anywhere there is a space in the input.
If a new line is started, there will be no trailing blanks at the end of
the previous line or at the beginning of the new line.

    2. A line break in the input may be eliminated in the output,
provided it is not followed by a space or another line break. If a line
break is eliminated, it is replaced by a space.
```
