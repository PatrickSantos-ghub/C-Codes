#include <stdio.h>

int main() {
    int i, j;

    // Loop externo para percorrer as tabuadas de 1 a 10
    for (i = 1; i <= 10; i++) {
        printf("Tabuada do %d:\n", i);

        // Loop interno para calcular e exibir a tabuada
        for (j = 1; j <= 10; j++) {
            int resultado = i * j;
            printf("%d X %d = %d\n", i, j, resultado);
        }

        printf("\n"); // Adiciona uma linha em branco entre as tabuadas
    }

    return 0;
}

