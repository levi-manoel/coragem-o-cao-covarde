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

void comparaCartas(struct carta c1, struct carta c2, int op1, int op2) {
    float v1a = 0, v2a = 0;
    float v1b = 0, v2b = 0;

    printf("\n === Comparação de Cartas === \n");
    printf("%s (%s) vs %s (%s) \n\n", c1.cidade, c1.codigo, c2.cidade, c2.codigo);

    switch (op1) {
        case 1:
            v1a = c1.populacao; v2a = c2.populacao;
            printf("População: %d vs %d \n\n", c1.populacao, c2.populacao);
            break;
        case 2:
            v1a = c1.area; v2a = c2.area;
            printf("Área: %.2f vs %.2f \n\n", c1.area, c2.area);
            break;
        case 3:
            v1a = c1.pib; v2a = c2.pib;
            printf("PIB: %.2f vs %.2f \n\n", c1.pib, c2.pib);
            break;
        case 4:
            v1a = c1.qt_pontos_turisticos; v2a = c2.qt_pontos_turisticos;
            printf("Pontos Turísticos: %d vs %d \n\n", c1.qt_pontos_turisticos, c2.qt_pontos_turisticos);
            break;
        case 5:
            v1a = c1.densidade_populacional; v2a = c2.densidade_populacional;
            printf("Densidade Populacional: %.2f vs %.2f \n\n", c1.densidade_populacional, c2.densidade_populacional);
            break;
        case 6:
            v1a = c1.pib_per_capita; v2a = c2.pib_per_capita;
            printf("PIB per Capita: %.2f vs %.2f \n\n", c1.pib_per_capita, c2.pib_per_capita);
            break;
        case 7:
            v1a = c1.super_poder; v2a = c2.super_poder;
            printf("Super Poder: %.2f vs %.2f \n\n", c1.super_poder, c2.super_poder);
            break;
    }

    switch (op2) {
        case 1:
            v1b = c1.populacao; v2b = c2.populacao;
            printf("População: %d vs %d \n\n", c1.populacao, c2.populacao);
            break;
        case 2:
            v1b = c1.area; v2b = c2.area;
            printf("Área: %.2f vs %.2f \n\n", c1.area, c2.area);
            break;
        case 3:
            v1b = c1.pib; v2b = c2.pib;
            printf("PIB: %.2f vs %.2f \n\n", c1.pib, c2.pib);
            break;
        case 4:
            v1b = c1.qt_pontos_turisticos; v2b = c2.qt_pontos_turisticos;
            printf("Pontos Turísticos: %d vs %d \n\n", c1.qt_pontos_turisticos, c2.qt_pontos_turisticos);
            break;
        case 5:
            v1b = c1.densidade_populacional; v2b = c2.densidade_populacional;
            printf("Densidade Populacional: %.2f vs %.2f \n\n", c1.densidade_populacional, c2.densidade_populacional);
            break;
        case 6:
            v1b = c1.pib_per_capita; v2b = c2.pib_per_capita;
            printf("PIB per Capita: %.2f vs %.2f \n\n", c1.pib_per_capita, c2.pib_per_capita);
            break;
        case 7:
            v1b = c1.super_poder; v2b = c2.super_poder;
            printf("Super Poder: %.2f vs %.2f \n\n", c1.super_poder, c2.super_poder);
            break;
    }

    float soma1 = v1a + v1b;
    float soma2 = v2a + v2b;

    printf("Soma dos atributos: \n");
    printf("%s: %.2f vs %s: %.2f \n", c1.cidade, soma1, c2.cidade, soma2);

    if (soma1 > soma2) {
        printf("Resultado Final: %s venceu! \n", c1.cidade);
    } else if (soma2 > soma1) {
        printf("Resultado Final: %s venceu! \n", c2.cidade);
    } else {
        printf("Resultado Final: Empate!\n");
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

    int escolha1, escolha2;
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &escolha1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 7; i++) {
        if (i != escolha1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
                case 7: printf("7 - Super Poder\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2 || escolha1 < 1 || escolha1 > 7 || escolha2 < 1 || escolha2 > 7) {
        printf("Opções inválidas!\n");
        return 1;
    }

    comparaCartas(carta_1, carta_2, escolha1, escolha2);

    return 0;
}
