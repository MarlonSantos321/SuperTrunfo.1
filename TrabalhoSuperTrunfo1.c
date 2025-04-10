//***SUPER TRUNFO NOVATO***

#include <stdio.h>

    int main(){ 

        char Codigo1[5], Codigo2[5];

        char Estado1[20], Estado2[20];

        char Cidade1[30], Cidade2[30];

        int populacao1, populacao2;

        float area1, area2;

        float pib1, pib2;

        int pontos_turisticos1, pontos_turisticos2;

        //primeira carta

        printf("\nCadastro da Primeira Carta: \n");
        printf("Código da cidade: ");
        scanf("%5s", &Codigo1);

        printf("Siglas do Estado: ");
        scanf("%6s", &Estado1);

        printf("Nome da Cidade: ");
        scanf("%30s", &Cidade1);

        printf("Quantidade de População: ");
        scanf("%i", &populacao1);
        
        printf("Tamanho da Área da Cidade em Km²: ");
        scanf("%f", &area1);

        printf("PIB da Cidade: ");
        scanf("%f", &pib1);

        printf("Qantidade de Pontos Turisticos da Cidade: ");
        scanf("%i", &pontos_turisticos1);

        //Segunda Carta

        printf("\nCadastro da Segunda Carta: \n");

        printf("Código da cidade: ");
        scanf("%5s", &Codigo2);

        printf("Siglas do Estado: ");
        scanf("%6s", &Estado2);

        printf("Nome da Cidade: ");
        scanf("%30s", &Cidade2);

        printf("Quantidade de População: ");
        scanf("%i", &populacao2);
        
        printf("Tamanho da Área da Cidade em Km²: ");
        scanf("%f", &area2);

        printf("PIB da Cidade: ");
        scanf("%f", &pib2);

        printf("Qantidade de Pontos Turisticos da Cidade: ");
        scanf("%i", &pontos_turisticos2);

        //Resultado Carta 1

        printf("\nCartas cadastradas: \n");
        
        printf("\nCarta 1: \n");
        printf("Codigo: %s\n", Codigo1);
        printf("Estado: %s\n", Estado1);
        printf("Cidade: %s\n", Cidade1);
        printf("Área Km²: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turisticos: %i\n",pontos_turisticos1);

        //Resultado Carta 2

        printf("\nCarta 2:\n");
        printf("Codigo: %s\n", Codigo2);
        printf("Estado: %s\n", Estado2);
        printf("Cidade: %s\n", Cidade2);
        printf("Área Km²: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turisticos: %i\n",pontos_turisticos2);

        return 0;
        
    }
