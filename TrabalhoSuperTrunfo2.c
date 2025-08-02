//Desafio Super Trunfo Aventureiro

#include <stdio.h>

    int main(){

        // Dados para a Carta 1 

        char Estado1, Cidade1, Codigo1; // Estado, Cidade e Código
        // Variáveis para armazenar os dados da carta 1

        int Area1,População1; // Área em Km² e População
        // Variáveis para armazenar os dados da carta 1
        
        int Pontos1; // Quantidade de Pontos Turisticos

        float Pib1; // PIB da Cidade
        // Variável para armazenar o PIB da cidade

        int desensidade_Populacional1=População1/Area1; // Densidade populacional da carta 1
        // Variável para armazenar a densidade populacional da carta 1

        int Pib_Per_Capita1=Pib1/População1; // PIB per capita da carta 1
        // Variável para armazenar o PIB per capita da carta 1

        // Dados para a Carta 2

        char Estado2, Cidade2, Codigo2; // Estado, Cidade e Código
        // Variáveis para armazenar os dados da carta 2

        int População2, Area2; // População e Área em Km²
        // Variáveis para armazenar os dados da carta 2

        int pontos2; // Quantidade de Pontos Turisticos
        // Variável para armazenar a quantidade de pontos turísticos da carta 2

        float Pib2; // PIB da Cidade
        // Variável para armazenar o PIB da cidade 2

        int Pib_Per_Capita2=Pib2/População2; // PIB per capita da carta 2
        // Variável para armazenar o PIB per capita da carta 2

        int desensidade_Populacional2=População2/Area2; // Densidade populacional da carta 2
        // Variável para armazenar a densidade populacional da carta 2

        //entrada dos dados da Carta 1
        printf("\n***CARTA 1***\n");

        printf("Codigo: ");
        scanf("%s", &Codigo1);
        printf("Estado: ");
        scanf("%s", &Estado1);
        printf("Cidade: ");
        scanf("%s", &Cidade1);
        printf("Area da Cidade: ");
        scanf("%d", &Area1);
        printf("População: ");
        scanf("%d", &População1);
        printf("Pib Da Cidade: ");
        scanf("%f", &Pib1);
        printf("Quantidade de Pontos Turisticos: ");
        scanf("%d", &Pontos1);

        //entrada dos dados da Carta 2
        printf("\n***CARTA 2***\n");    
        printf("Codigo: ");
        scanf("%s", &Codigo2);
        printf("Estado: ");
        scanf("%s", &Estado2);
        printf("Cidade: ");
        scanf("%s", &Cidade2);
        printf("Area da Cidade: ");
        scanf("%d", &Area2);
        printf("População: ");
        scanf("%d", &População2);
        printf("Pib Da Cidade: ");
        scanf("%f", &Pib2);
        printf("Quantidade de Pontos Turisticos: ");
        scanf("%d", &pontos2);
        
        //Resultado Carta 1

        printf("\nCartas cadastradas: \n");
        
        printf("\nCarta 1: \n");
        printf("Codigo: %s\n", Codigo1);
        printf("Estado: %s\n", Estado1);
        printf("Cidade: %s\n", Cidade1);
        printf("Área Km²: %.2f\n", Area1);
        printf("PIB: %.2f\n", Pib1);
        printf("Pontos Turisticos: %i\n",Pontos1);
        printf("Densidade Populacional: %i\n", desensidade_Populacional1);
        printf("PIB per Capita: %i\n", Pib_Per_Capita1);
        printf("\n");

        //Resultado Carta 2

        printf("\nCarta 2:\n");
        printf("Codigo: %s\n", Codigo2);
        printf("Estado: %s\n", Estado2);
        printf("Cidade: %s\n", Cidade2);
        printf("Área Km²: %.2f\n", Area2);
        printf("PIB: %.2f\n", Pib2);
        printf("Pontos Turisticos: %i\n",pontos2);
        printf("Densidade Populacional: %i\n", desensidade_Populacional2);
        printf("PIB per Capita: %i\n", Pib_Per_Capita2);

    return 0; // Fim do programa
}
