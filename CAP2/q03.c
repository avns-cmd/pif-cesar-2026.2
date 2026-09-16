/* Questao 03 - Mesmo numero em decimal, hexadecimal, octal e ASCII
   Compilar: gcc q03.c -o q03 */
#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    /* O valor na memoria e sempre o mesmo. O que muda e a forma de exibir. */
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);

    return 0;
}
