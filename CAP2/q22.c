/* Questao 22 - Converte maiuscula em minuscula sem usar <ctype.h>
   Compilar: gcc q22.c -o q22 */
#include <stdio.h>

int main(void) {
    char maiuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);

    /* Na tabela ASCII as minusculas ficam 32 posicoes depois das
       maiusculas: 'A' e 65 e 'a' e 97, logo a diferenca e 32. */
    printf("\nOriginal        : %c (ASCII %d)\n", maiuscula, maiuscula);
    printf("Somando 32      : %c\n", maiuscula + 32);
    printf("Com -'A' + 'a'  : %c\n", maiuscula - 'A' + 'a');

    return 0;
}
