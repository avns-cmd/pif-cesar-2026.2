# Questão 05 - Operador Vírgula e Múltiplas Variáveis de Controle

Código analisado:

```c
int i, j;
for (i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}
```

a) O laço executa exatamente 5 iterações (i assume os valores 0, 1, 2, 3
e 4; quando i chega a 5 e j chega a 5, a condição i < j se torna falsa e
o laço para).

b) Saída exata produzida:

```
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

(A soma i + j é sempre 10, pois enquanto i aumenta 1, j diminui 1.)

c) Reescrevendo com while:

```c
int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```
