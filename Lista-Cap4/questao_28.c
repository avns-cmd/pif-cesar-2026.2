#include <stdio.h>

int main(void) {
    int opcao;

    printf("=== Sistema de Atendimento Bancario ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Escolha uma opcao: ");

    if (scanf("%d", &opcao) != 1) {
        fprintf(stderr, "Erro: opcao invalida.\n");
        return 1;
    }

    switch (opcao) {
        case 1:
            printf("Direcionando para consulta de saldo...\n");
            break;
        case 2:
            printf("Direcionando para emissao de extrato...\n");
            break;
        case 3:
            printf("Direcionando para transferencia...\n");
            break;
        case 4:
            printf("Direcionando para atendimento humano...\n");
            break;
        default:
            printf("Opcao invalida. Por favor, escolha uma opcao de 1 a 4.\n");
    }

    return 0;
}
