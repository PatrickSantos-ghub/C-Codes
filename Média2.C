#include <stdio.h>

int main() {
    
    char nome[100];
    float pontos1, pontos2, media;

    
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    
    printf("Digite a primeira nota: ");
    scanf("%f", &pontos1);

    printf("Digite a segunda nota: ");
    scanf("%f", &pontos2);

    
    media = (pontos1 + pontos2) / 2;

   
    printf("\nAluno: %s\n", nome);
    printf("Nota 1: %.2f\n", pontos1);
    printf("Nota 2: %.2f\n", pontos2);
    printf("Media: %.2f\n", media);

    return 0;
}

