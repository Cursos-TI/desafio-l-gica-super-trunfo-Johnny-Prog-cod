#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){


    int tur1, tur2, pop1, pop2, jogador, computador;
    float area1, pib1, dpop1, per1;
    float area2, pib2, dpop2, per2;
    float superpoder1, superpoder2;

    //Informações da Carta Jogador
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

    //Informações da Carta Computador
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
    
    // Escolha da Disputa
    printf("***************************************\n");
    printf("************* Super Trunfo ************\n");
    printf("***************************************\n");
    printf("   Informações da Carta do Jogador \n");
    printf("Carta Jogador \n");
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
    printf("***************************************\n");
    printf("   Informações da Carta do Computador \n");
    printf("Carta Computador \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("***************************************\n");
    printf("      Opções de Disputa \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Quantidade de pontos Turistico \n");
    printf("5. Densidade Populacional \n");
    printf("6. PIB per Capita \n");
    printf("7. Super Poder \n");
    printf("Escolha uma opção deseja disputar!");
    scanf(" %d", &jogador);

    computador = jogador;

    printf("***************************************\n");
    printf("***************************************\n");


    // Comparativo
    switch (jogador)
    {
    case 1:
       printf("Jogador %s: População: %d \n", nome1, pop1);
        break;
    
    case 2:
       printf("Jogador %s: Área: %.2f km² \n", nome1, area1);
        break;

    case 3:
       printf("Jogador %s: PIB: %.2f bilhões de reais \n", nome1, pib1);
        break;

    case 4:
       printf("Jogador %s: Número de Pontos Turísticos: %d \n", nome1, tur1);
        break;

    case 5:
       printf("Jogador %s: Densidade Populacional: %.2f hab/km² \n", nome1, dpop1);
        break;
        
    case 6:
       printf("Jogador %s: PIB per Capita: %.2f reais \n", nome1, per1);
        break;

    case 7:
       printf("Jogador %s: Super Poder: %.2f \n", nome1, superpoder1);
        break;
    
    default:
        break;
    }

    switch (computador)
    {
     case 1:
        printf("Computador %s: População: %d \n", nome2, pop2);
        break;
    
    case 2:
        printf("Computador %s: Área: %.2f km² \n", nome2, area2);
        break;

    case 3:
        printf("Computador %s: PIB: %.2f bilhões de reais \n", nome2, pib2);
        break;

    case 4:
        printf("Computador %s: Número de Pontos Turísticos: %d \n", nome2, tur2);
        break;

    case 5:
        printf("Computador %s: Densidade Populacional: %.2f hab/km² \n", nome2, dpop2);
        break;
        
    case 6:
        printf("Computador %s: PIB per Capita: %.2f reais \n", nome2, per2);
        break;

    case 7:
        printf("Computador %s: Super Poder: %.2f \n", nome2, superpoder2);
        break;
    
    default:
        break;
    }
    // Resultado
    if(jogador == 4 && computador == 4){
        printf("**************************\n");
        printf("        Empatou! \n");
        printf("**************************\n");

    } else if ((jogador == 1 && computador == 1)||
               (jogador == 2 && computador == 2)||
               (jogador == 3 && computador == 3)) {
                printf("**************************\n");
                printf("     Jogador Ganhou! \n");
                printf("**************************\n");
                } else {
                    printf("**************************\n");
                    printf("    Computador Ganhou! \n");
                    printf("**************************\n");
        }

    return 0;
}