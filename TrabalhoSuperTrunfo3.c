//Nivel Mestre

#include <stdio.h>

    int main(){

        //Dados

        char Estado1[25], Cidade1[30], Codigo1[10];
        unsigned long int População1;
        int Pontos1;
        float Pib1, Densidade1, Per_Capita1, Area1, Poder1;
        double Inverso1;

        char Codigo2, Estado2[25], Cidade2[30];
        unsigned long int População2;
        int Pontos2;
        float Pib2, Densidade2, Per_Capita2, Area2, Poder2;
        double Inverso2;

        //DADOS DA CARTA 1

        printf("\n***CARTA 1***\n");

        printf("Codigo: ");
        scanf("%s", &Codigo1);

        printf("Estado:");
        scanf("%s", &Estado1);

        printf("Cidade: ");
        scanf("%s", &Cidade1);

        printf("Area da Cidade: ");
        scanf("%f", &Area1);

        printf("População: ");
        scanf("%lu", &População1);

        printf("Pib Da Cidade: ");
        scanf("%f", &Pib1);

        printf("Quantidades de Pontos Turisticos: ");
        scanf("%i", &Pontos1);

        //DADOS DA CARTA 2

        printf("\n***CARTA 2***\n");

        printf("Codigo: ");
        scanf("%s", &Codigo2);

        printf("Estado:");
        scanf("%s", &Estado2);

        printf("Cidade: ");
        scanf("%s", &Cidade2);

        printf("Area da Cidade: ");
        scanf("%f", &Area2);

        printf("População: ");
        scanf("%lu", &População2);

        printf("Pib Da Cidade: ");
        scanf("%f", &Pib2);

        printf("Quantidades de Pontos Turisticos: ");
        scanf("%i", &Pontos2);

        //CALCULANDO A DENSIDADE POPULACIONAL
        Densidade1 = População1 / Area1;
        Densidade2 = População2 / Area2;

        //CALCULANDO O PIB PER CAPITA
        Per_Capita1 = Pib1 / População1;
        Per_Capita2 = Pib2 / População2;

        //CALCULANDO A INVERSA DA DENSIDADE
        Inverso1 = 1 / Densidade1;
        Inverso2 = 1 / Densidade2;

        //CALCULANDO O PODER 
        Poder1 = (Area1+População1+Pib1+Pontos1+Per_Capita1+Densidade1)/Inverso1;
        Poder2 = (Area2+População2+Pib2+Pontos2+Per_Capita2+Densidade2)/Inverso2;

        // COMPARANDO AS CARTAS
       printf("\n\n***COMPARANDO AS CARTAS***\n");
       printf("População: Carta 1 venceu (%d)\n", População1 > População2);
       printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
       printf("PIB: Carta 1 venceu (%d)\n", Pib1 > Pib2);
       printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Pontos1 > Pontos1);
       printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade1 < Densidade2);
       printf("PIB per Capita: Carta 1 venceu (%d)\n", Per_Capita1 > Per_Capita2);
       printf("Super Poder: Carta 1 venceu (%d)\n", Poder1 > Poder1);
        return 0;
    }
