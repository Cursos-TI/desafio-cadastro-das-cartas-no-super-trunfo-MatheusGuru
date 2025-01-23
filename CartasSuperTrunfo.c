#include <stdio.h>

int main(){
    char codigo[4];
    char nome[20]; 
    float populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    float densidade_populacional; 
    float PIB_per_capita;

    printf("Digite o codido da cidade\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade\n");
    scanf("%s", nome);

    printf("Digite a população\n");
    scanf(" %f", &populacao);

    printf("Digite a área\n");
    scanf("%f", &area);

    printf("Digite o PIB\n");
    scanf(" %f", &PIB);
    
    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (populacao / area);
    PIB_per_capita = (PIB / populacao );

    printf("codigo da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %.2f mil\n", populacao);
    printf("Área: %.2f km\n", area);
    printf("PIB: %.2f mil\n", PIB);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos);
    printf("A densidade populacional é:%.2f\n", densidade_populacional);
    printf("O PIB per capita é:%.2f", PIB_per_capita);

    return 0;

} 