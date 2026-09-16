/* Questao 02 (c) - Leitura robusta de caractere
   Ignora quebras de linha e espacos que sobraram no buffer.
   Compilar: gcc q02.c -o q02 */
#include <stdio.h>

int main(void) {
    int ch, limpar;

    printf("Digite um caractere: ");

    /* Descarta o lixo do buffer antes de aceitar a entrada */
    do {
        ch = getchar();
    } while (ch == '\n' || ch == '\r' || ch == ' ' || ch == '\t');

    if (ch == EOF) {
        printf("\nEntrada encerrada.\n");
        return 1;
    }

    printf("Caractere lido: '%c' (ASCII %d)\n", ch, ch);

    /* Limpa o resto da linha */
    while ((limpar = getchar()) != '\n' && limpar != EOF);

    return 0;
}
