/* Questao 12 - Antecessor e sucessor usando so ++ e --
   Compilar: gcc q12.c -o q12 */
#include <stdio.h>

int main(void) {
    int numero, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    /* Como ++ e -- alteram a propria variavel, nao da para aplica-los
       direto no numero sem perder o valor original. Por isso copio
       para duas variaveis auxiliares e altero as copias.
       Usei a forma prefixada porque ela ja devolve o valor novo. */
    antecessor = numero;
    sucessor = numero;

    --antecessor;
    ++sucessor;

    printf("Antecessor : %d\n", antecessor);
    printf("Sucessor   : %d\n", sucessor);

    return 0;
}
