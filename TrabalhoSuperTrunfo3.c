//Nivel Mestre//Nivel Mestre

#include <stdio.h>

    int main(){

        //Dados

        char Estado1[25], Cidade1[30], Codigo1[10];
        int População1;
        int Pontos1;
        float Pib1, Densidade1, Per_Capita1, Area1, Poder1;
        int Inverso1;

        char Codigo2[10], Estado2[25], Cidade2[30];
        int População2;
        int Pontos2;
        float Pib2, Densidade2, Per_Capita2, Area2, Poder2; 
        float Inverso2; // o inverso serve para inverter um atributo, por exemplo, a densidade populacional, onde o menor vence

        //DADOS DA CARTA 1

        printf("\n***CARTA 1***\n");

        printf("Codigo: ");
        scanf("%s", Codigo1);

        printf("Estado: ");
        scanf("%s", Estado1);

        printf("Cidade: ");
        scanf("%s", Cidade1);

        printf("Area da Cidade: ");
        scanf("%f", &Area1);

        printf("População: ");
        scanf("%d", &População1);

        printf("Pib Da Cidade: ");
        scanf("%f", &Pib1);

        printf("Quantidades de Pontos Turisticos: ");
        scanf("%d", &Pontos1);

        //DADOS DA CARTA 2

        printf("\n***CARTA 2***\n");

        printf("Codigo: ");
        scanf("%s", Codigo2);

        printf("Estado: ");
        scanf("%s", Estado2);

        printf("Cidade: ");
        scanf("%s", Cidade2);

        printf("Area da Cidade: ");
        scanf("%f", &Area2);

        printf("População: ");
        scanf("%d", &População2);

        printf("Pib Da Cidade: ");
        scanf("%f", &Pib2);

        printf("Quantidades de Pontos Turisticos: ");
        scanf("%d", &Pontos2);

        //CALCULANDO A DENSIDADE POPULACIONAL
        Densidade1 = População1 / Area1;
        Densidade2 = População2 / Area2;

        //CALCULANDO O PIB PER CAPITA
        Per_Capita1 = Pib1 / População1;
        Per_Capita2 = Pib2 / População2;

        //CALCULANDO A INVERSA DA DENSIDADE
        Inverso1 = 1.0f / Densidade1;
        Inverso2 = 1.0f / Densidade2;
    
        //CALCULANDO O PODER 
        Poder1 = (Area1+População1+Pib1+Pontos1+Per_Capita1+Densidade1)/Inverso1;
        Poder2 = (Area2+População2+Pib2+Pontos2+Per_Capita2+Densidade2)/Inverso2;

        // COMPARANDO AS CARTAS
        printf("\n\n***COMPARANDO AS CARTAS***\n");
        printf("População: %s\n", (População1 > População2) ? "Carta 1 venceu" : ((População1 < População2) ? "Carta 2 venceu" : "Empate"));
        printf("Área: %s\n", (Area1 > Area2) ? "Carta 1 venceu" : ((Area1 < Area2) ? "Carta 2 venceu" : "Empate"));
        printf("PIB: %s\n", (Pib1 > Pib2) ? "Carta 1 venceu" : ((Pib1 < Pib2) ? "Carta 2 venceu" : "Empate"));
        printf("Pontos Turísticos: %s\n", (Pontos1 > Pontos2) ? "Carta 1 venceu" : ((Pontos1 < Pontos2) ? "Carta 2 venceu" : "Empate"));
        printf("Densidade Populacional: %s\n", (Densidade1 > Densidade2) ? "Carta 1 venceu" : ((Densidade1 < Densidade2) ? "Carta 2 venceu" : "Empate"));
        printf("PIB per Capita: %s\n", (Per_Capita1 > Per_Capita2) ? "Carta 1 venceu" : ((Per_Capita1 < Per_Capita2) ? "Carta 2 venceu" : "Empate"));
        printf("Super Poder: %s\n", (Poder1 > Poder2) ? "Carta 1 venceu" : ((Poder1 < Poder2) ? "Carta 2 venceu" : "Empate"));
        return 0;
    }
