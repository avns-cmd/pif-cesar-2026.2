#include <stdio.h>

int main() {
    int segundos, horas, minutos, resto;

    printf("Quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    resto = segundos % 60;

    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, resto);

    return 0;
}
