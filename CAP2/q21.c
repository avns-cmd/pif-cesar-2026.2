/* Questao 21 - Mostra o codigo ASCII de um caractere
   Compilar: gcc q21.c -o q21 */
#include <stdio.h>

int main(void) {
    char caractere;

    printf("Digite um caractere: ");

    /* O espaco antes de %%c faz o scanf pular quebras de linha residuais */
    scanf(" %c", &caractere);

    /* O QUE ESSE NUMERO SIGNIFICA:
       Um char em C nao guarda uma letra: guarda um numero inteiro de
       1 byte. A tabela ASCII e a convencao que diz qual simbolo
       corresponde a cada numero ('A' e 65, 'a' e 97, '0' e 48).
       Com %%c o printf desenha o simbolo; com %%d ele mostra o numero
       cru. O dado na memoria e exatamente o mesmo nos dois casos. */
    printf("Caractere   : %c\n", caractere);
    printf("Codigo ASCII: %d\n", caractere);

    return 0;
}
