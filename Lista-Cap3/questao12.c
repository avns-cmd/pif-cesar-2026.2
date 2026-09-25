#include <stdio.h>

int main() {
    printf("Celsius\tFahrenheit\tKelvin\n");

    for (int c = 0; c <= 100; c += 5) {
        double f = (9.0 * c) / 5.0 + 32;
        double k = c + 273.15;
        printf("%.2f\t%.2f\t\t%.2f\n", (double) c, f, k);
    }

    return 0;
}
