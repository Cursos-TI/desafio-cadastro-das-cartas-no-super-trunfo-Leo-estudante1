#include <stdio.h>
int main(){
    int carta, populacao, pont_turisticos;
    char estado;
    char nome[20]; 
    float area, pib, rend_percapta, dens_populacional;

//ENTRADA DE DADOS
    printf("*** SUPER TRUNFO ***\n");
    printf("Preencha as informações abaxo para cadastrar a carta: \n");

    printf("Estado: \n - ");
    scanf(" %c", &estado);

    printf("Carta: \n - ");
    scanf(" %d", &carta);

    printf("Nome: \n - ");
    scanf(" %s", &nome);

    printf("População: \n - ");
    scanf(" %d", &populacao); 

    printf("Área: \n - ");
    scanf(" %f", &area);

    printf("PIB: \n - ");
    scanf(" %f", &pib);

    printf("PONTOS TURÍSTICOS: \n - ");
    scanf(" %d", &pont_turisticos);

    dens_populacional = (float) populacao / area;
    rend_percapta = (float) pib / populacao;

//SAÍDA DE DADOS 
//INFORMAÇÕES CADASTRADAS
    printf("\n");
    printf("CÓDIGO DA CARTA: %c%d \n", estado, carta);
    printf("NOME: %s \n", nome);
    printf("POPULAÇÃO: %d \n", populacao);
    printf("ÁREA: %.2f km²\n", area);
    printf("PIB: %.2f BilhÔes de reais\n", pib);
    printf("PONTOS TURÍSTICOS: %d \n", pont_turisticos);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", dens_populacional);
    printf("RENDA PERCÁPITA: R$ %.2f \n", rend_percapta);

    return 0;
}
