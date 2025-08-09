#include <stdio.h>

struct carta {
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int qt_pontos_turisticos;
};

int main () {
    struct carta carta_1;
    struct carta carta_2;

    printf("Estado carta 1: ");
    scanf(" %c", &carta_1.estado);
    printf("Código carta 1: ");
    scanf(" %3s", carta_1.codigo);
    printf("Cidade carta 1: ");
    scanf(" %49s", carta_1.cidade);
    printf("População carta 1: ");
    scanf("%d", &carta_1.populacao);
    printf("Área carta 1: ");
    scanf("%f", &carta_1.area);
    printf("PIB carta 1: ");
    scanf("%f", &carta_1.pib);
    printf("Quantidade de pontos turísticos carta 1: ");
    scanf("%d", &carta_1.qt_pontos_turisticos);

    printf("\n\n");

    printf("Estado carta 2: ");
    scanf(" %c", &carta_2.estado);
    printf("Código carta 2: ");
    scanf(" %3s", carta_2.codigo);
    printf("Cidade carta 2: ");
    scanf(" %49s", carta_2.cidade);
    printf("População carta 2: ");
    scanf("%d", &carta_2.populacao);
    printf("Área carta 2: ");
    scanf("%f", &carta_2.area);
    printf("PIB carta 2: ");
    scanf("%f", &carta_2.pib);
    printf("Quantidade de pontos turísticos carta 2: ");
    scanf("%d", &carta_2.qt_pontos_turisticos);

    printf("\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", carta_1.estado);
    printf("Código: %s\n", carta_1.codigo);
    printf("Nome da cidade: %s\n", carta_1.cidade);
    printf("População: %i\n", carta_1.populacao);
    printf("Área: %.2f km²\n", carta_1.area);
    printf("PIB: %.2f bilhões de reais\n", carta_1.pib);
    printf("Número de pontos turísticos: %i\n", carta_1.qt_pontos_turisticos);

    printf("\n\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta_2.estado);
    printf("Código: %s\n", carta_2.codigo);
    printf("Nome da cidade: %s\n", carta_2.cidade);
    printf("População: %i\n", carta_2.populacao);
    printf("Área: %.2f km²\n", carta_2.area);
    printf("PIB: %.2f bilhões de reais\n", carta_2.pib);
    printf("Número de pontos turísticos: %i\n", carta_2.qt_pontos_turisticos);

    return 0;
}
