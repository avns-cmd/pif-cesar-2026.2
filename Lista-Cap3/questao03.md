# Questão 03 - Flexibilidade do Laço for e Omissão de Expressões

## Trecho A
```c
for (a = 36; a > 0; a /= 2)
    printf("%d\t", a);
```

a) Sequência exata impressa (divisão inteira a cada passo):

```
36  18  9  4  2  1
```

Passo a passo: 36 -> 18 -> 9 -> 4 (9/2 = 4, inteiro) -> 2 -> 1 -> 0 (para,
pois 0 não é > 0).

## Trecho B
```c
for (; (ch = getch()) != 'X' ;)
    printf("%c", ch + 1);
```

b) A cada repetição, getch() lê um caractere digitado e o guarda em ch. O
laço continua enquanto esse caractere for diferente de 'X'. A expressão
"ch + 1" imprime o caractere seguinte na tabela ASCII (ex.: se o usuário
digitar 'a', o programa imprime 'b').

Os parênteses em (ch = getch()) são obrigatórios porque o operador de
atribuição (=) tem precedência menor que o operador de comparação (!=).
Sem os parênteses, a expressão "ch = getch() != 'X'" seria avaliada como
"ch = (getch() != 'X')" - ou seja, primeiro se compararia o caractere lido
com 'X' (resultando em 0 ou 1), e SÓ o resultado dessa comparação (0 ou 1)
seria atribuído a ch, e não o caractere digitado. Os parênteses garantem
que o caractere seja atribuído a ch primeiro, e só depois comparado com
'X'.

## Trecho C
```c
for (;;)
    printf("Laço Infinito\n");
```

c) Para interromper esse laço infinito de forma programática (sem forçar
o encerramento pelo sistema operacional), pode-se usar um comando break
dentro do corpo do laço, condicionado a algum evento, por exemplo:

```c
for (;;) {
    printf("Laço Infinito\n");
    if (alguma_condicao) {
        break;
    }
}
```

Outra alternativa é usar `return` (se estiver dentro de uma função) ou a
função `exit()` da biblioteca `<stdlib.h>` para terminar o programa a
partir de dentro do laço.
