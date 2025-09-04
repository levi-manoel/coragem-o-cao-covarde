#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void comparaCartas(struct carta c1, struct carta c2, int opcao) {
    printf("\n=== Comparação de Cartas ===\n");
    switch (opcao) {
        case 1:
            printf("Comparando População:\n");
            printf("%s (%s): %d vs %s (%s): %d\n",
                   c1.cidade, c1.codigo, c1.populacao,
                   c2.cidade, c2.codigo, c2.populacao);

            if (c1.populacao > c2.populacao)
                printf("Resultado: %s venceu!\n", c1.cidade);
            else if (c2.populacao > c1.populacao)
                printf("Resultado: %s venceu!\n", c2.cidade);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f vs %s: %.2f\n",
                   c1.cidade, c1.area, c2.cidade, c2.area);

            if (c1.area > c2.area)
                printf("Resultado: %s venceu!\n", c1.cidade);
            else if (c2.area > c1.area)
                printf("Resultado: %s venceu!\n", c2.cidade);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f vs %s: %.2f\n",
                   c1.cidade, c1.pib, c2.cidade, c2.pib);

            if (c1.pib > c2.pib)
                printf("Resultado: %s venceu!\n", c1.cidade);
            else if (c2.pib > c1.pib)
                printf("Resultado: %s venceu!\n", c2.cidade);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d vs %s: %d\n",
                   c1.cidade, c1.qt_pontos_turisticos,
                   c2.cidade, c2.qt_pontos_turisticos);

            if (c1.qt_pontos_turisticos > c2.qt_pontos_turisticos)
                printf("Resultado: %s venceu!\n", c1.cidade);
            else if (c2.qt_pontos_turisticos > c1.qt_pontos_turisticos)
                printf("Resultado: %s venceu!\n", c2.cidade);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Populacional:\n");
            printf("%s: %.2f vs %s: %.2f\n",
                   c1.cidade, c1.densidade_populacional,
                   c2.cidade, c2.densidade_populacional);

            if (c1.densidade_populacional < c2.densidade_populacional)
                printf("Resultado: %s venceu!\n", c1.cidade);
            else if (c2.densidade_populacional < c1.densidade_populacional)
                printf("Resultado: %s venceu!\n", c2.cidade);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Comparando PIB per Capita:\n");
            printf("%s: %.2f vs %s: %.2f\n",
                   c1.cidade, c1.pib_per_capita,
                   c2.cidade, c2.pib_per_capita);

            if (c1.pib_per_capita > c2.pib_per_capita)
                printf("Resultado: %s venceu!\n", c1.cidade);
            else if (c2.pib_per_capita > c1.pib_per_capita)
                printf("Resultado: %s venceu!\n", c2.cidade);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Comparando Super Poder:\n");
            printf("%s: %.2f vs %s: %.2f\n",
                   c1.cidade, c1.super_poder,
                   c2.cidade, c2.super_poder);

            if (c1.super_poder > c2.super_poder)
                printf("Resultado: %s venceu!\n", c1.cidade);
            else if (c2.super_poder > c1.super_poder)
                printf("Resultado: %s venceu!\n", c2.cidade);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
}

int main() {
    struct carta carta_1 = { 'X', "XXX", "CidadeX", 100000, 500.3, 22.7, 10 };
    struct carta carta_2 = { 'Y', "YYY", "CidadeY", 200000, 320.5, 18.4, 25 };

    carta_1.densidade_populacional = carta_1.populacao / carta_1.area;
    carta_1.pib_per_capita = (carta_1.pib * 1000000000) / carta_1.populacao;
    carta_1.super_poder = carta_1.populacao + carta_1.area + carta_1.pib
        + carta_1.qt_pontos_turisticos + carta_1.pib_per_capita
        - carta_1.densidade_populacional;

    carta_2.densidade_populacional = carta_2.populacao / carta_2.area;
    carta_2.pib_per_capita = (carta_2.pib * 1000000000) / carta_2.populacao;
    carta_2.super_poder = carta_2.populacao + carta_2.area + carta_2.pib
        + carta_2.qt_pontos_turisticos + carta_2.pib_per_capita
        - carta_2.densidade_populacional;

    int escolha;
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    comparaCartas(carta_1, carta_2, escolha);

    return 0;
}
