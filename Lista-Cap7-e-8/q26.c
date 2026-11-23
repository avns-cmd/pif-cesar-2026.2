/*
 * Questão 26 – Pedidos e Status
 * Enunciado: Defina enum Status { PENDENTE, PAGO, ENTREGUE } e struct Pedido. Leia 6 pedidos, altere status de um código informado e totalize quantidade e valor por status.
 *
 * Complete a implementação e teste com diferentes entradas.
 */

#include <stdio.h>
#include <string.h>

typedef enum { PENDENTE, PAGO, ENTREGUE } Status;
typedef struct { int codigo; float valor; Status status; } Pedido;

int main(void) {
    /* TODO: implementar a solução da questão */
    return 0;
}
