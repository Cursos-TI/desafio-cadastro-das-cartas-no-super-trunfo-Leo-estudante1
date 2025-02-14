#include <stdio.h>
int main(){
//ENTRADA DE DADOS
    char estado, nome[20];
    int cidade, area, populacao, pib, pontos_turistico;

    printf("SUPER TRUNFO\n"); 
    printf("CADASTRE SUA CARTA PREENCHEDO AS INFORMAÇÕES ABAIXO:\n -");

    printf("ESCOLHA UMA LETRA ENTRE (A a H) PARA IDENTIFICAR O ESTRADO \n -");
    scanf(" %c", &estado);

    printf("ESCOLHA UM NÚMERO ENTRE (1 a 8) PARA IDENTIFICAR A CIDADE\n -");
    scanf(" %d", &cidade);

    printf("NOME DA CIDADE: \n -");
    scanf(" %s", &nome);

    printf("AREA: \n -");
    scanf(" %d", &area);

    printf("POPULAÇÃO: \n -");
    scanf(" %d", &populacao); 

    printf("PIB: \n -");
    scanf(" %d", &pib); 

    printf("NÚMERO DE PONTOS TURÍSTICOS: \n -");
    scanf(" %d", &pontos_turistico);

//SAIDA DE DADOS
//INFORMAÇÕES CADASTRADAS
    printf("INFORMAÇÕES CADASTRADAS: \n");
    printf("CÓDIGO DA CARTA: %c%d \n", estado, cidade);
    printf("NOME DA CIDADE: %s \n", nome);
    printf("ÁREA: %d \n", area);
    printf("POPULAÇÃO: %d \n", populacao),
    printf("PIB: %d \n", pib);
    printf("PONTOS TURÍSTICOS: %d \n", pontos_turistico);

}

