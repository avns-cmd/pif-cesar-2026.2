# Questão 05 - Avaliação de curto-circuito em operadores lógicos

Considere inicialmente `a = 0`, `b = 5` e `c = 10`.

### a) Saída exata

Na condição `a != 0 && ++b > 5`, a primeira parte é falsa (`0 != 0` é falso). Por causa do curto-circuito do operador `&&`, a segunda parte não é avaliada e `b` não é incrementado. O `else` executa `c -= 2`, deixando `c` igual a 8.

```text
a = 0, b = 5, c = 8
```

### b) Curto-circuito de `&&` e `||`

- Em `A && B`, se `A` for falso, `B` não é avaliado, pois o resultado da operação já será falso.
- Em `A || B`, se `A` for verdadeiro, `B` não é avaliado, pois o resultado da operação já será verdadeiro.

Essa avaliação evita operações desnecessárias e pode impedir efeitos colaterais, como um incremento, quando a segunda expressão não precisa ser executada.

### c) Condição alterada

Com `if (a == 0 || ++b > 5)`, a primeira parte (`a == 0`) é verdadeira. Portanto, a segunda parte não é avaliada, `b` continua valendo 5 e o bloco do `if` executa `c += 10`. O valor final de `c` será 20.
