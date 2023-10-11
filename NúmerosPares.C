#include <stdio.h>

int main() {
    int escolha;

    printf("Escolha uma opção:\n");
    printf("1 - Exibir números ímpares\n");
    printf("2 - Exibir números pares\n");
    printf("Outra tecla - Exibir todos os números\n");
    scanf("%d", &escolha);

    printf("Números escolhidos:\n");

    for (int i = 1; i <= 100; i++) {
        if ((escolha == 1 && i % 2 != 0) || (escolha == 2 && i % 2 == 0) || (escolha != 1 && escolha != 2)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

