#include <stdio.h>

int main() {
    int numero, somaPares = 0, somaImpares = 0;
    char continuar;

    do {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            somaPares += numero;
        } else {
            somaImpares += numero;
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar); // O espaço antes de %c é usado para evitar problemas com o buffer de entrada

    } while (continuar == 'S' || continuar == 's');

    printf("Soma dos números pares: %d\n", somaPares);
    printf("Soma dos números ímpares: %d\n", somaImpares);

    return 0;
}

