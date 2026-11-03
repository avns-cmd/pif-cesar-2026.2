# Questão 01 - Avaliação de expressões condicionais e atribuição vs. igualdade

### a) Diferença entre `if (x = 0)` e `if (x == 0)`

Em `if (x = 0)`, o operador `=` realiza uma **atribuição**: o valor zero é armazenado em `x`. O valor da própria expressão de atribuição também é zero. Como zero é interpretado como falso em uma condição de C, o bloco do `if` não é executado. Caso exista um `else`, ele será executado.

Em `if (x == 0)`, o operador `==` faz uma **comparação**. A variável não é alterada; a condição será verdadeira somente se o valor de `x` já for igual a zero.

### b) Valores numéricos em condições

Em C, uma expressão escalar usada como condição é considerada falsa quando seu valor é igual a zero e verdadeira quando é diferente de zero. Isso vale para valores inteiros e reais. Portanto, `0`, `0.0` e `-0.0` representam falso; valores como `1`, `-5` e `2.7` representam verdadeiro.

### c) Análise de `if (x = -5)`

A instrução atribui `-5` à variável `x`. O valor da expressão é `-5`, que é diferente de zero. Assim, a condição é verdadeira e o bloco associado ao `if` será executado. Essa interpretação segue a regra de C segundo a qual zero representa falso e qualquer valor escalar diferente de zero representa verdadeiro.
