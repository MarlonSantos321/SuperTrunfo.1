//***SUPER TRUNFO AVENTUREIRO***

#include <stdio.h>

    int main(){ 

        char Codigo1[6], Codigo2[6];

        char Estado1[25], Estado2[25];

        char Cidade1[35], Cidade2[35];

        int populacao1, populacao2;

        float area1, area2;

        float pib1, pib2;

        int pontos_turisticos1, pontos_turisticos2;

        float Pib_Per_Capita1, Pib_Per_Capita2;
        
        float Densidade_Populacional1, Densidade_Populacional2;

        //primeira carta

        printf("\n***Cadastro da Primeira Carta*** \n");
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

        Densidade_Populacional1 =(float) (populacao1 / area1);

        Pib_Per_Capita1 = (float) (pib1 / populacao1);

        //Segunda Carta

        printf("\n***Cadastro da Segunda Carta*** \n");

        printf("Código da cidade: ");
        scanf("%5s", &Codigo2);

        printf("Siglas do Estado: ");
        scanf("%6s", &Estado2);

        printf("Nome da Cidade: ");
        scanf("%30s", &Cidade2);

        printf("Quantidade de População: ");
        scanf("%i", &populacao1);
        
        printf("Tamanho da Área da Cidade em Km²: ");
        scanf("%f", &area2);

        printf("PIB da Cidade: ");
        scanf("%f", &pib2);

        printf("Qantidade de Pontos Turisticos da Cidade: ");
        scanf("%i", &pontos_turisticos2);

        Densidade_Populacional2 =(float) (populacao2 / area2);

        Pib_Per_Capita2 =(float) (pib2 / populacao2);

        //Resultado Carta 1

        printf("\n***Cartas cadastradas*** \n");
        
        printf("\nCarta 1 \n");
        printf("Codigo: %s\n", Codigo1);
        printf("Estado: %s\n", Estado1);
        printf("Cidade: %s\n", Cidade1);
        printf("Área Km²: %.3f\n", area1);
        printf("População: %i\n", populacao1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turisticos: %i\n",pontos_turisticos1);
        printf("Densidade Populaciona: %.2f\n",Densidade_Populacional1);
        printf("Pib Per Capita: %.2f",Pib_Per_Capita1);

        //Resultado Carta 2

        printf("\nCarta 2 \n");
        printf("Codigo: %s\n", Codigo2);
        printf("Estado: %s\n", Estado2);
        printf("Cidade: %s\n", Cidade2);
        printf("Área Km²: %.3f\n", area2);
        printf("População: %i\n", populacao2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turisticos: %i\n",pontos_turisticos2);
        printf("Densidade Populaciona: %.2f\n",Densidade_Populacional2);
        printf("Pib Per Capita: %.2f",Pib_Per_Capita2);


        return 0;
    }