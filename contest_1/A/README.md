# ⌨️ A - WERTYU

Às vezes, ao digitar no teclado, é comum que as mãos estejam **deslocadas uma tecla para a direita**. Nesse caso, cada caractere digitado corresponde ao que está **à sua esquerda** no teclado QWERTY.

Seu trabalho é decodificar uma mensagem digitada com esse erro, **substituindo cada caractere pelo imediatamente à esquerda no teclado QWERTY**.

---

## 📥 Entrada

Várias linhas de texto contendo:

- Letras **maiúsculas** (exceto `Q`, `A`, `Z`);
- Dígitos (`0`-`9`);
- Espaços (` `);
- Pontuação comum do teclado QWERTY (exceto o acento grave `` ` ``).

As linhas devem ser tratadas até o fim da entrada.

---

## 📤 Saída

Para cada linha da entrada, imprima a mensagem **corrigida**, substituindo cada caractere pelo imediatamente à **esquerda** dele no teclado QWERTY.

---

## 💡 Observações

- O caractere `Q`, `A`, `Z` **não aparecem** na entrada, pois não há teclas à esquerda deles.
- Espaços devem ser mantidos.
- Não há distinção entre letras e símbolos que não aparecem no teclado padrão.

---

## 🧪 Exemplo

### Entrada

```
O S, GOMR YPFSU/
```

### Saída

```
I AM FINE TODAY.
```
