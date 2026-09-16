/* Questao 07 - Le uma data dd/mm/aaaa e exibe invertida
   Compilar: gcc q07.c -o q07 */
#include <stdio.h>

int main(void) {
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");

    /* As barras na string de controle nao viram dado: elas dizem ao
       scanf() quais caracteres literais descartar entre os numeros. */
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Data invertida: %04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}
