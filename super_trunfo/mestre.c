#include<stdio.h>
#include<stdlib.h>

struct carta {
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int qt_pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
};

struct carta montaCarta() {
    struct carta carta;

    printf("Estado carta: ");
    scanf(" %c", &carta.estado);
    printf("Código carta: ");
    scanf(" %s", carta.codigo);
    printf("Cidade carta: ");
    scanf(" %s", carta.cidade);
    printf("População carta: ");
    scanf("%d", &carta.populacao);
    printf("Área carta: ");
    scanf("%f", &carta.area);
    printf("PIB carta: ");
    scanf("%f", &carta.pib);
    printf("Quantidade de pontos turísticos carta: ");
    scanf("%d", &carta.qt_pontos_turisticos);

    carta.densidade_populacional = carta.populacao / carta.area;
    carta.pib_per_capita = carta.pib * 1000000000 / carta.populacao;

    carta.super_poder = (float) carta.populacao + carta.area + carta.pib + carta.qt_pontos_turisticos + carta.pib_per_capita - carta.densidade_populacional;

    return carta;
}

void printaCarta(struct carta carta) {
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da cidade: %s\n", carta.cidade);
    printf("População: %i\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de pontos turísticos: %i\n", carta.qt_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", carta.densidade_populacional);
    printf("PIB per capita: %.2f reais\n", carta.pib_per_capita);
}

void comparaCartas (struct carta carta_1, struct carta carta_2) {
    printf("População: %s\n", carta_1.populacao > carta_2.populacao ? "Carta 1 venceu": "Carta 2 venceu");
    printf("Área: %s\n", carta_1.area > carta_2.area ? "Carta 1 venceu": "Carta 2 venceu");
    printf("PIB: %s\n", carta_1.pib > carta_2.pib ? "Carta 1 venceu": "Carta 2 venceu");
    printf("Número de pontos turísticos: %s\n", carta_1.qt_pontos_turisticos > carta_2.qt_pontos_turisticos ? "Carta 1 venceu": "Carta 2 venceu");
    printf("Densidade populacional: %s\n", carta_1.densidade_populacional < carta_2.densidade_populacional ? "Carta 1 venceu": "Carta 2 venceu");
    printf("PIB per capita: %s\n", carta_1.pib_per_capita > carta_2.pib_per_capita ? "Carta 1 venceu": "Carta 2 venceu");
    printf("Super poder: %s\n", carta_1.super_poder > carta_2.super_poder ? "Carta 1 venceu": "Carta 2 venceu");
}

int main () {
    printf("Carta 1:\n");
    struct carta carta_1 = montaCarta();

    printf("\n\n");

    printf("Carta 2:\n");
    struct carta carta_2 = montaCarta();

    system("clear");

    printf("Carta 1:\n");
    printaCarta(carta_1);

    printf("\n\n");

    printf("Carta 2:\n");
    printaCarta(carta_2);

    printf("\n\n");
    comparaCartas(carta_1, carta_2);

    return 0;
}
