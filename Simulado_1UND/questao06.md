# Questão 06

a) Erro de compilação no printf porque "soma" foi declarada dentro do
for, então ela só existe dentro do laço. Fora dele a variável não existe.

b) i vai de 1 até 10:
- i=1,2,3,4: executa normal
- i=5: continue pula o resto daquela iteração
- i=6,7: executa normal
- i=8: break interrompe o laço
- i=9,10: nunca executam, pois o laço já parou

continue pula só a iteração atual. break encerra o laço todo.

c) Código corrigido (soma declarada fora do for):

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

Soma: 1+4+9+16 (pula i=5) +36+49 (break em i=8, não soma 64) = 115

Resultado impresso: Soma final = 115
