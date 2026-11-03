#include <math.h>
#include <stdio.h>

int main(void) {
    char operacao;
    double a, b, resultado;

    printf("Operacoes disponiveis: +, -, *, /, ^\n");
    printf("Escolha a operacao: ");
    if (scanf(" %c", &operacao) != 1) {
        fprintf(stderr, "Erro: operacao invalida.\n");
        return 1;
    }

    printf("Digite os dois operandos reais: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        fprintf(stderr, "Erro: operandos invalidos.\n");
        return 1;
    }

    switch (operacao) {
        case '+':
            resultado = a + b;
            break;
        case '-':
            resultado = a - b;
            break;
        case '*':
            resultado = a * b;
            break;
        case '/':
            if (b == 0.0) {
                fprintf(stderr, "Erro: divisao por zero nao e permitida.\n");
                return 1;
            }
            resultado = a / b;
            break;
        case '^':
            resultado = pow(a, b);
            break;
        default:
            fprintf(stderr, "Erro: operacao desconhecida.\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
