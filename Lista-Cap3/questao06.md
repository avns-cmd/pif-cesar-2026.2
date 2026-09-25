# Questão 06 - Laço Sem Corpo e Incremento Pós-fixado

Código analisado:

```c
int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);
```

a) O valor final impresso é: **x = 6**

b) Passo a passo: na expressão x++ < 5, primeiro o valor ATUAL de x é
usado na comparação, e SÓ DEPOIS x é incrementado (pós-fixado). Isso
acontece em toda avaliação da condição, mesmo quando o resultado da
comparação é falso:

```
x=0 -> compara 0<5 (verdadeiro) -> x passa a valer 1
x=1 -> compara 1<5 (verdadeiro) -> x passa a valer 2
x=2 -> compara 2<5 (verdadeiro) -> x passa a valer 3
x=3 -> compara 3<5 (verdadeiro) -> x passa a valer 4
x=4 -> compara 4<5 (verdadeiro) -> x passa a valer 5
x=5 -> compara 5<5 (falso)      -> x passa a valer 6, laço para
```

Ou seja, o incremento acontece 6 vezes no total (mesmo na última
comparação, que já é falsa), resultando em x = 6.

c) Reescrevendo de forma explícita, mantendo o mesmo resultado final:

```c
#include <stdio.h>

int main() {
    int x = 0;
    int condicao;

    do {
        condicao = (x < 5);
        x++;
    } while (condicao);

    printf("Valor final de x = %d\n", x);
    return 0;
}
```
