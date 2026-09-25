#include <stdio.h>

int main() {
    int senha, tentativa;
    int senhaCorreta = 2026;
    int acesso = 0;

    for (tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senhaCorreta) {
            acesso = 1;
            break;
        } else {
            printf("Senha incorreta!\n");
        }
    }

    if (acesso) {
        printf("Acesso Concedido!\n");
        printf("Numero de tentativas utilizadas: %d\n", tentativa);
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}
