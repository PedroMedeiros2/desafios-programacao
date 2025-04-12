# 📝 G - Palavras Longas Demais (Way Too Long Words)

Às vezes, palavras como `"localization"` ou `"internationalization"` são tão longas que escrevê-las repetidamente se torna cansativo.

Vamos considerar uma palavra como **"longa demais"** se seu comprimento for **estritamente maior que 10 caracteres**.

Para essas palavras, devemos substituí-las por uma **abreviação especial**:

- A abreviação é formada pela **primeira letra**, seguida do **número de letras entre a primeira e a última**, e então pela **última letra**.

Por exemplo:

- `"localization"` → `"l10n"`
- `"internationalization"` → `"i18n"`

Palavras com 10 caracteres ou menos **devem permanecer inalteradas**.

---

## 📥 Entrada

- A primeira linha contém um número inteiro `n` (1 ≤ n ≤ 100), o número de palavras.
- Cada uma das próximas `n` linhas contém **uma palavra** formada apenas por letras minúsculas e com comprimento entre 1 e 100.

---

## 📤 Saída

- Imprima `n` linhas.
- Cada linha deve conter a palavra processada:
  - Se ela for longa demais, imprima sua **abreviação**.
  - Caso contrário, imprima a palavra original.

---

## 📌 Exemplo de Entrada

```
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
```

## ✅ Exemplo de Saída

```
word
l10n
i18n
p43s
```
