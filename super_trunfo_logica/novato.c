#include<stdio.h>
#include<stdlib.h>
#define ARR_SIZE(arr) ( sizeof((arr)) / sizeof((arr[0])) )

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

void comparaCartas (struct carta carta_1, struct carta carta_2) {
    char* nome_propriedades[7] = {
        "População", "Área", "PIB", "Número de pontos turísticos", "Densidade populacional", "PIB per capita", "Super poder"
    };
    char* propriedades[7] = {
        "populacao", "area", "pib", "qt_pontos_turisticos", "densidade_populacional", "pib_per_capita", "super_poder"
    };

    int i = rand() % ARR_SIZE(propriedades);
    char* nome_propriedade_escolhida = nome_propriedades[i]; 
    char* propriedade_escolhida = propriedades[i];

    struct carta carta_vencedora;

    if (propriedade_escolhida == "densidade_populacional") {
        carta_vencedora = carta_1.densidade_populacional < carta_2.densidade_populacional ? carta_1 : carta_2;

        printf("Comparando cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.2f\n", carta_1.cidade, carta_1.codigo, carta_1.densidade_populacional);
        printf("Carta 2 - %s (%s): %.2f\n", carta_2.cidade, carta_2.codigo, carta_2.densidade_populacional);
    } else {
        carta_vencedora = carta_1.densidade_populacional < carta_2.densidade_populacional ? carta_1 : carta_2;

        printf("Comparando cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.2f\n", carta_1.cidade, carta_1.codigo, carta_1.densidade_populacional);
        printf("Carta 2 - %s (%s): %.2f\n", carta_2.cidade, carta_2.codigo, carta_2.densidade_populacional);
    }

    printf("Resultado: %s venceu!\n", carta_vencedora.cidade);
}

int main () {
    struct carta carta_1 = { 'X', "XXX", "CidadeX", 100000, 500.3, 22.7, 10 };
    struct carta carta_2 = { 'Y', "YYY", "CidadeY", 200000, 320.5, 18,4, 25 };

    carta_1.densidade_populacional = carta_1.populacao / carta_1.area;
    carta_1.pib_per_capita = carta_1.pib * 1000000000 / carta_1.populacao;
    carta_1.super_poder = (float) carta_1.populacao
        + carta_1.area + carta_1.pib + carta_1.qt_pontos_turisticos
        + carta_1.pib_per_capita
        - carta_1.densidade_populacional;

    carta_2.densidade_populacional = carta_2.populacao / carta_2.area;
    carta_2.pib_per_capita = carta_2.pib * 1000000000 / carta_2.populacao;
    carta_2.super_poder = (float) carta_2.populacao
        + carta_2.area + carta_2.pib + carta_2.qt_pontos_turisticos
        + carta_2.pib_per_capita
        - carta_2.densidade_populacional;

    comparaCartas(carta_1, carta_2);

    return 0;
}
