#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor < 1) {
        printf("Por favor, digite um valor maior ou igual a 1.\n");
        return 1; // Encerra o programa com código de erro
    }

    printf("Contagem de 1 até %d:\n", valor);

    for (int i = 1; i <= valor; i++) {
        printf("%d\n", i);
    }

    return 0;
}

