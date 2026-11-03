#include <stdio.h>

static int ano_bissexto(int ano) {
    return ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0);
}

int main(void) {
    int dia, mes, ano, dias_no_mes;
    const char *nome_mes;

    printf("Digite dia, mes e ano (ex.: 25 12 2026): ");
    if (scanf("%d %d %d", &dia, &mes, &ano) != 3) {
        fprintf(stderr, "Erro: informe tres numeros inteiros.\n");
        return 1;
    }

    if (ano <= 0 || mes < 1 || mes > 12) {
        fprintf(stderr, "Erro: data ou mes invalido.\n");
        return 1;
    }

    switch (mes) {
        case 1: nome_mes = "janeiro"; dias_no_mes = 31; break;
        case 2:
            nome_mes = "fevereiro";
            dias_no_mes = ano_bissexto(ano) ? 29 : 28;
            break;
        case 3: nome_mes = "marco"; dias_no_mes = 31; break;
        case 4: nome_mes = "abril"; dias_no_mes = 30; break;
        case 5: nome_mes = "maio"; dias_no_mes = 31; break;
        case 6: nome_mes = "junho"; dias_no_mes = 30; break;
        case 7: nome_mes = "julho"; dias_no_mes = 31; break;
        case 8: nome_mes = "agosto"; dias_no_mes = 31; break;
        case 9: nome_mes = "setembro"; dias_no_mes = 30; break;
        case 10: nome_mes = "outubro"; dias_no_mes = 31; break;
        case 11: nome_mes = "novembro"; dias_no_mes = 30; break;
        case 12: nome_mes = "dezembro"; dias_no_mes = 31; break;
        default:
            return 1; /* O mes foi validado antes do switch. */
    }

    if (dia < 1 || dia > dias_no_mes) {
        fprintf(stderr, "Erro: dia invalido para o mes informado.\n");
        return 1;
    }

    printf("%d de %s de %d\n", dia, nome_mes, ano);
    return 0;
}
