#include <stdio.h>

int main() {
    char codcidade[20], nome[20];
    int populacao, area, pib, pontturisticos;

    printf("PREENCHA AS INFORMAÇÕES ABAIXO PARA CADASTRAR A CARTA NO SUPER TRUNFO \n");
    printf("CÓDIGO DA CIDADE \n - ");
    scanf(" %s", &codcidade);

    printf("NOME \n - ");
    scanf(" %s", &nome);

    printf("POLULAÇÃO \n - ");
    scanf(" %d", &populacao);

    printf("AREA \n");
    scanf(" %d", &area);

    printf("PIB \n");
    scanf(" %d", &pib);

    printf("NUMERO DE PONTOS TURÍSTICOS \n - ");
    scanf(" %d", &pontturisticos);

    printf("Código da carta: %s - Nome da cidade: %s - População: %d \n Área: %d - Pib: %d - Pontos turísticos: %d", codcidade, nome, populacao, area, pib, pontturisticos);

    return 0;
}
