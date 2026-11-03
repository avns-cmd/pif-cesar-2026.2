# Questão 02 - Associação do comando `else` e aninhamento de decisões

Considere `int x = 15, y = 5;` e o código sem chaves apresentado no enunciado.

### a) Mensagem exibida

A mensagem impressa será:

```text
Opção B
```

A condição externa `x > 10` é verdadeira. Em seguida, a condição interna `y > 10` é falsa, pois `y` vale 5. O `else` está associado ao `if (y > 10)`, por isso seu bloco é executado e imprime `Opção B`.

### b) Regra de associação do `else`

Na linguagem C, uma cláusula `else` é associada ao `if` mais próximo que ainda não possua um `else` correspondente. Essa regra explica o chamado *dangling else* (associação do `else` pendente).

### c) Reescrita com chaves

Para que `Opção B` seja impressa somente quando `x <= 10`, o bloco pode ser escrito assim:

```c
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

Com essa organização, o `else` pertence explicitamente ao `if (x > 10)`. Quando `x > 10`, a decisão interna é avaliada; quando `x <= 10`, é impressa `Opção B`.
