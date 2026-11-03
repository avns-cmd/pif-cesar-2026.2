#include <stdio.h>

int main(void) {
    double salario, percentual, aumento, novo_salario;
    int cargo;

    printf("Digite o salario atual: R$ ");
    if (scanf("%lf", &salario) != 1 || salario < 0.0) {
        fprintf(stderr, "Erro: informe um salario valido e nao negativo.\n");
        return 1;
    }
    printf("Cargo (1 = Tecnico; 2 = Gerente; 3 = Demais Cargos): ");
    if (scanf("%d", &cargo) != 1) {
        fprintf(stderr, "Erro: codigo de cargo invalido.\n");
        return 1;
    }

    switch (cargo) {
        case 1:
            percentual = (salario <= 3000.0) ? 0.15 : 0.10;
            break;
        case 2:
            percentual = (salario <= 5000.0) ? 0.10 : 0.05;
            break;
        case 3:
            percentual = 0.08;
            break;
        default:
            fprintf(stderr, "Erro: codigo de cargo invalido.\n");
            return 1;
    }

    aumento = salario * percentual;
    novo_salario = salario + aumento;
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
