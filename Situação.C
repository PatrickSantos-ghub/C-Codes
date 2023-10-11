#include <stdio.h>

int main() {
    float nota1, nota2, media;

    // Solicita a entrada das duas notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    // Verifica se a nota1 é válida
    if (nota1 < 0 || nota1 > 10) {
        printf("Nota inválida! As notas devem estar entre 0 e 10.\n");
        return 1; // Encerra o programa com código de erro
    }

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Verifica se a nota2 é válida
    if (nota2 < 0 || nota2 > 10) {
        printf("Nota inválida! As notas devem estar entre 0 e 10.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Calcula a média das notas
    media = (nota1 + nota2) / 2.0;

    // Verifica a situação do aluno
    if (media >= 6.0) {
        printf("Média: %.2f\n", media);
        printf("Aluno Aprovado!\n");
    } else if (media >= 4.0) {
        printf("Média: %.2f\n", media);
        printf("Aluno em Exame.\n");
    } else {
        printf("Média: %.2f\n", media);
        printf("Aluno Reprovado.\n");
    }

    return 0;
}

