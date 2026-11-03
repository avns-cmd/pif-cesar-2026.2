# Questão 03 - Operador condicional ternário vs. estrutura `if-else`

### a) Funcionamento do operador ternário

A expressão

```c
situacao = (media >= 7.0) ? 'A' : 'R';
```

avalia primeiro a condição `media >= 7.0`. Se ela for verdadeira, o operador seleciona `'A'`; caso contrário, seleciona `'R'`. O caractere escolhido é atribuído à variável `situacao`. Para `media = 6.8`, a condição é falsa e `situacao` recebe `'R'`.

### b) Reescrita com `if-else`

```c
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

### c) Limitações

O operador ternário é uma **expressão** que seleciona entre duas expressões, produzindo um valor. Ele é adequado para escolhas simples, como atribuir uma nota ou um caractere. Não substitui diretamente qualquer `if-else`: estruturas com vários comandos, blocos extensos ou operações que não resultam em um valor ficam mais claras e apropriadas com `if-else` tradicional. Também é possível aninhar operadores ternários, mas isso pode reduzir a legibilidade.
