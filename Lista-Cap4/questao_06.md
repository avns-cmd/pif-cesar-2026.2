# Questão 06 - Construções `else-if` e análise lógica de intervalos

### a) Saída para `idade = 65`

A saída será:

```text
Idoso
Adulto
Jovem
```

Os três comandos `if` são independentes. Para a idade 65, as condições `idade >= 60`, `idade >= 18` e `idade >= 12` são todas verdadeiras, então os três comandos `printf` são executados. O `else` pertence somente ao último `if`; como `idade >= 12` é verdadeiro, `Criança` não é exibido.

### b) `if` independentes e cadeia `else-if`

Em uma sequência de `if` independentes, cada condição é testada separadamente e mais de um bloco pode ser executado. Em uma cadeia `if` / `else if` / `else`, as condições são verificadas em ordem; assim que uma delas é verdadeira, seu bloco é executado e as alternativas seguintes são ignoradas.

### c) Reescrita correta

```c
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```

Dessa forma, somente uma categoria é impressa. A ordem das condições, da maior faixa etária para a menor, garante a classificação correta.
