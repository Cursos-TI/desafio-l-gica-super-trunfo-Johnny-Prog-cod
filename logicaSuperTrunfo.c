#include <stdio.h>

int main (){


    int tur1, tur2, pop1, pop2;
    float area1, pib1, dpop1, per1;
    float area2, pib2, dpop2, per2;
    float superpoder1, superpoder2;

    //Informações da Carta 1
    char estado1[30] = "SP";
    char codigo1[30] = "A01";
    char nome1[30] = "São Paulo";
    pop1 = 11452;
    area1 = 1521.202;
    pib1 = 714.6;
    tur1 = 30;
    dpop1 = (float) pop1 / area1;
    per1 = (float) (pib1 * 1000000000) / pop1;
    superpoder1 = (float) pop1 + area1 + pib1 + tur1 + per1 + (1 / dpop1);

    //Informações da Carta 2
    char estado2[30] = "RJ";
    char codigo2[30] = "B01";
    char nome2[30] = "Rio de Janeiro";
    pop2 = 6212;
    area2 = 1199.828;
    pib2 = 450.7;
    tur2 = 30;
    dpop2 = (float) pop2 / area2;
    per2 = (float) (pib2 * 1000000000) / pop2;
    superpoder2 = (float) pop2 + area2 + pib2 + tur2 + per2 + (1 / dpop2);
    
    // Cartas
    printf("*******************************\n");
    printf("********* Super Trunfo ********\n");
    printf("*******************************\n");
    
    printf("\n**************************************************************\n");
    printf("Carta 1 \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome1); 
    printf("População: %d \n", pop1); 
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", tur1);
    printf("Densidade Populacional: %.2f hab/km² \n", dpop1);
    printf("PIB per Capita: %.2f reais \n", per1);
    printf("Super Poder: %.2f\n", superpoder1);


    printf("\n**************************************************************\n");
    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2); 
    printf("População: %d \n", pop2); 
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", tur2);
    printf("Densidade Populacional: %.2f hab/km² \n", dpop2);
    printf("PIB per Capita: %.2f reais \n", per2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("\n**************************************************************\n");
    printf("*******************************\n");
    printf("********* Super Trunfo ********\n");
    printf("*******************************\n");

    if (per1 > per2) {
        printf("São Paulo e o vencedor! \n");
    } else {
        printf("Rio de Janeiro e o vencedor! \n");
    }
  
    return 0;
}