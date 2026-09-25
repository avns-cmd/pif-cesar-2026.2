# Questão 02 - Escopo e Tempo de Vida de Variáveis de Bloco

Código analisado:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
 int i;
 for (i = 1; i < 10; i++) {
 int soma = 0;
 soma += i * i;
 }
 printf("Soma final = %d\n", soma);
 system("PAUSE");
 return 0;
}
```

a) O compilador emite erro porque "soma" é declarada dentro do bloco do
for. Seu escopo é local ao laço: ela é criada e destruída a cada
iteração. Fora do laço, no printf, "soma" não existe mais nesse escopo,
gerando erro de "identificador não declarado".

b) Mesmo movendo o printf para dentro do laço, o resultado estaria errado
porque a linha "int soma = 0;" também está dentro do for, então soma é
reiniciada (zerada) em toda iteração. Isso significa que soma nunca
acumula o valor das iterações anteriores - ela sempre conteria apenas o
quadrado do i da iteração atual (i*i), e não a soma acumulada de 1 a 9.

c) Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

Explicação de escopo e tempo de vida:
- Uma variável declarada dentro de um bloco {} só é visível (escopo de
  bloco) dentro daquele bloco. Seu tempo de vida termina quando o bloco
  termina - a memória é liberada e o valor é perdido.
- Uma variável declarada no escopo da função (fora do laço, mas dentro de
  main), como o "soma" corrigido, existe durante toda a execução da
  função. Ela é visível dentro e fora do laço, e mantém seu valor entre
  as iterações, permitindo a acumulação correta.
