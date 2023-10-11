#include <stdio.h>

int main() {
    int valor, soma = 0;
    char continuar;

    do {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        soma += valor; // Adiciona o valor à soma atual

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar); // O espaço antes de %c é usado para evitar problemas com o buffer de entrada

    } while (continuar == 'S' || continuar == 's');

    printf("A soma dos valores digitados é: %d\n", soma);

    return 0;
}

