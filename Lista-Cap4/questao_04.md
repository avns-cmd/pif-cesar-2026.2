# Questão 04 - Seleção múltipla com `switch-case` e efeito *fall-through*

### a) Saída exata

Como `codigo` vale 2, a execução começa em `case 2`. Como não existe `break` depois de `printf("Prata\n")`, a execução continua no `case 3` e imprime também `Ouro`.

```text
Prata
Ouro
```

O bloco `default` não é executado, pois já foi encontrada uma alternativa correspondente.

### b) Papel do `break`

O `break` encerra a execução do `switch` e transfere o controle para a instrução seguinte ao bloco. Quando ele é omitido, a execução prossegue para os próximos rótulos `case`; esse comportamento é chamado de *fall-through*.

### c) Tipos aceitos por `switch`

A expressão de controle do `switch` deve ter tipo inteiro, incluindo tipos inteiros como `char`, `short`, `int`, `long`, seus equivalentes sem sinal e tipos enumerados (após as promoções inteiras aplicáveis). `float` e `double` não são permitidos como expressão de controle do `switch`, pois não são tipos inteiros.
