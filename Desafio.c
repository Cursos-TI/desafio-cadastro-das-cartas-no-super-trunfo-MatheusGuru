#include <stdio.h>

int main(){
    char código[4];
    char nome[20]; 
    int populacao;
    float area;
    float PIB;
    int pontos_turísticos;

    printf("Digite o codido da cidade\n");
    scanf("%s", &código);

    printf("Digite o nome da cidade\n");
    scanf("%s", &nome);

    printf("Digite a população\n");
    scanf(" %f", &populacao);

    printf("Digite a área\n");
    scanf("%f", &area);

    printf("Digite o PIB\n");
    scanf("%f", &PIB);
    
    printf("Digite o número de pontos turísticos\n");
    scanf("%F", &pontos_turísticos);

} 