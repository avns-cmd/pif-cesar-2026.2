#include <stdio.h>

int main() {
    printf("Decimal\tHexadecimal\tCaractere\n");

    for (int codigo = 32; codigo <= 126; codigo++) {
        printf("%d\t%X\t\t%c\n", codigo, codigo, codigo);
    }

    return 0;
}
