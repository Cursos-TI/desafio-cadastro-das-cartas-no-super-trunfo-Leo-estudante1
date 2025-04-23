#include <stdio.h>
int main(){
    //VARIÁVEIS DA CARTA 01
    int populacao1, pontos_turistico1, cidade1;
    char estado1, nome1[20];
    float pib1, area1, dens_popul1, renda_percapta1, superpoder1;

    //VARIAVEIS DA CARTA 02
    int populacao2, pontos_turistico2, cidade2;
    char estado2, nome2[20];
    float pib2, area2, dens_popul2, renda_percapta2, superpoder2;

    //CADASTRO D CARTA 01
    //ETRADA DE DADOS
    printf("========================= SUPER TRUNFO =========================\n\n");
    printf("Responda as perguntas abaixo para cadastrar as cartas...\n\n");
    printf("Carta 01\n");

    printf("Nome: ");
    scanf("%s", nome1);
    printf("\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("\n");

    printf("Cidade (01 a 04): ");
    scanf(" %d", &cidade1);
    printf("\n");

    printf("População: ");
    scanf("%d", &populacao1);
    printf("\n");

    printf("Pontos turísticos: ");
    scanf(" %d", &pontos_turistico1);
    printf("\n");

    printf("Pib: ");
    scanf(" %f", &pib1);
    printf("\n");

    printf("Area (em Km²): ");
    scanf(" %f", &area1);
    printf("\n\n");

    renda_percapta1 = populacao1 / pib1; // CALCULANDO A RENDA PERCAPTA DA CARTA 01
    dens_popul1 = populacao1 / area1; // CALCULANDO A DENSIDADE POPULACIONAL DA CARTA 02

    printf("================================================================\n\n");

    //CADASTRO DA CARTA 02
    //ENTRADA DE DADOS

    printf("Carta 02\n");

    printf("Nome: ");
    scanf("%s", nome2);
    printf("\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("\n");

    printf("Cidade (01 a 04): ");
    scanf(" %d", &cidade2);
    printf("\n");

    printf("População: ");
    scanf("%d", &populacao2);
    printf("\n");

    printf("Pontos turísticos: ");
    scanf(" %d", &pontos_turistico2);
    printf("\n");

    printf("Pib: ");
    scanf(" %f", &pib2);
    printf("\n");

    printf("Area (em Km²): ");
    scanf(" %f", &area2);
    printf("\n\n");

    renda_percapta2 = populacao2 / pib2; // CALCULANDO A RENDA PERCAPTA DA CARTA 02
    dens_popul2 = populacao2 / area2; // CALCULANDO A DENSIDADE POPULACIONAL DA CARTA 02

    //SUPER PODER

    //CALCULANDO O SUPER  PODER DA CARTA 01
     superpoder1 = (float)(populacao1 + pontos_turistico1 + area1 + pib1 + renda_percapta1) - dens_popul1;

    //CALCULANDO O SUPER  PODER DA CARTA 02
    superpoder2 = (float)(populacao2 + pontos_turistico2 + area2 + pib2 + renda_percapta2) - dens_popul2;

    //DADOS CADASTRADOS DA CARTA 01 E 02
    //SAÍDA DE DADOS
    printf("DADOS CADASTRADOS (CARTA 01)====================================\n\n");

    printf("Código da carta: %c%d\n", estado1, cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos_turistico1);
    printf("Pib: %.2f\n", pib1);
    printf("Área: %.2f Km²\n", area1);
    printf("Renda percapta: %.2f\n", renda_percapta1);
    printf("Densidade populacional: %.2f\n\n", dens_popul1);
 

    printf("DADOS CADASTRADOS (CARTA 02)====================================\n\n");

    printf("Código da carta: %c%d\n", estado2, cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos_turistico2);
    printf("Pib: %.2f\n", pib2);
    printf("Área: %.2f Km²\n", area2);
    printf("Renda percapta: %.2f\n", renda_percapta2);
    printf("Densidade populacional: %.2f\n\n", dens_popul2);
    

    printf("Comparação das cartas (1 p/ verdadeiro e 0 p/ falso)============\n\n");


    printf("População da carta 01 Venceu (%d)\n\n", populacao1 > populacao2);
    printf("Pontos turísticos da carta 01 venceu (%d)\n\n", pontos_turistico1 > pontos_turistico2);
    printf("Pib da carta 01 venceu (%d)\n\n", pib1 > pib2);
    printf("Área da carta 01 venceu (%d)\n\n", area1 > area2);
    printf("Renda Percapta dacarta 01 venceu (%d)\n\n", renda_percapta1 > renda_percapta2);
    printf("Densidade populacional da carta 02 venceu (%d)\n\n", dens_popul1 > dens_popul2);
    printf("Super poder da carta 01 venceu (%d)\n\n", superpoder1 > superpoder2);
    printf("FIM");


    return 0;
}