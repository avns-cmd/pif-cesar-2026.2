/* Questao 23 - Horario de termino de um experimento
   Compilar: gcc q23.c -o q23 */
#include <stdio.h>

int main(void) {
    int hora, minuto, segundo, duracao, total;

    printf("Hora de inicio: ");
    scanf("%d", &hora);
    printf("Minuto de inicio: ");
    scanf("%d", &minuto);
    printf("Segundo de inicio: ");
    scanf("%d", &segundo);
    printf("Duracao em segundos: ");
    scanf("%d", &duracao);

    /* Converto tudo para segundos, somo, e depois separo de volta */
    total = (hora * 3600) + (minuto * 60) + segundo + duracao;
    total = total % 86400;   /* da a volta se passar de 24h */

    printf("\nTermino: %02d:%02d:%02d\n",
           total / 3600,           /* horas inteiras   */
           (total % 3600) / 60,    /* minutos do resto */
           total % 60);            /* segundos finais  */

    return 0;
}
