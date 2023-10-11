#include <stdio.h>

int main() {
    float nota1, nota2, media;

    // Solicita a entrada das duas notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Calcula a média das notas
    media = (nota1 + nota2) / 2.0;

    // Verifica se o aluno foi aprovado ou reprovado
    if (media >= 6.0) {
        printf("Média: %.2f\n", media);
        printf("Aluno Aprovado!\n");
    } else {
        printf("Média: %.2f\n", media);
        printf("Aluno Reprovado.\n");
    }

    return 0;
}
