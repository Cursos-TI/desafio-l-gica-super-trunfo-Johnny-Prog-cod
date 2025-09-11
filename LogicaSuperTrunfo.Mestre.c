#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    // Variaveis para o jogo
    int jogada1, jogada2, computador1, computador2;
    float jogador, computador;
    float somaJogador;
    float somaComputador;
    float valorJ1, valorJ2, valorC1, valorC2;

    //Informações da Carta Jogador
    char estado1[30] = "SP";
    char codigo1[30] = "A01";
    char nome1[30] = "São Paulo";
    int pop1 = 11452;
    float area1 = 1521.202;
    float pib1 = 714.6;
    int tur1 = 30;
    float dpop1 = (float) pop1 / area1;
    float per1 = (float) (pib1 * 1000000000) / pop1;
    float superpoder1 = (float) pop1 + area1 + pib1 + tur1 + per1 + (1 / dpop1);

    //Informações da Carta Computador
    char estado2[30] = "RJ";
    char codigo2[30] = "B01";
    char nome2[30] = "Rio de Janeiro";
    int pop2 = 6212;
    float area2 = 1199.828;
    float pib2 = 450.7;
    int tur2 = 30;
    float dpop2 = (float) pop2 / area2;
    float per2 = (float) (pib2 * 1000000000) / pop2;
    float superpoder2 = (float) pop2 + area2 + pib2 + tur2 + per2 + (1 / dpop2);
    
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
    printf("     Opções de Disputa 1° rodada \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Quantidade de pontos Turistico \n");
    printf("5. Densidade Populacional \n");
    printf("6. PIB per Capita \n");
    printf("7. Super Poder \n");
    printf("***************************************\n");
    printf("Escolha a sua opção: ");
    scanf(" %d", &jogada1);
    if (jogada1 < 1 || jogada1 > 7) {
        printf("Opção inválida! O jogo será encerrado.\n");
        exit(0);
    }

    // Comparativo
    switch (jogada1) {
    case 1: 
        printf("%s, população: %d\n", nome1, pop1); 
        valorJ1 = pop1;
        printf("%s, população: %d\n", nome2, pop2);
        valorC1 = pop2; break;
    case 2: 
        printf("%s, Área: %.2f\n", nome1, area1); 
        valorJ1 = area1; 
        printf("%s, Área: %.2f\n", nome2, area2); 
        valorC1 = area2; break;
    case 3:
        printf("%s, PIB: %.2f\n", nome1, pib1);
        valorJ1 = pib1;
        printf("%s, PIB: %.2f\n", nome2, pib2);
        valorC1 = pib2;
        break;
    case 4:
        printf("%s, Pontos Turísticos: %d\n", nome1, tur1);
        valorJ1 = tur1;
        printf("%s, Pontos Turísticos: %d\n", nome2, tur2);
        valorC1 = tur2;
        break;
    case 5:
        printf("%s, Densidade Populacional: %.2f\n", nome1, dpop1);
        valorJ1 = dpop1;
        printf("%s, Densidade Populacional: %.2f\n", nome2, dpop2);
        valorC1 = dpop2;
        break;
    case 6:
        printf("%s, PIB per Capita: %.2f\n", nome1, per1);
        valorJ1 = per1;
        printf("%s, PIB per Capita: %.2f\n", nome2, per2);
        valorC1 = per2;
        break;
    case 7:
        printf("%s, Super Poder: %.2f\n", nome1, superpoder1);
        valorJ1 = superpoder1;
        printf("%s, Super Poder: %.2f\n", nome2, superpoder2);
        valorC1 = superpoder2;
        break;
    default:
        printf("Opção inválida! O jogo será encerrado.\n");
        exit(0);
}

// Comparar jogada1
printf("Jogada 1 - Disputa: %d\n", jogada1);
if (jogada1 == 5) { // Densidade Populacional: menor vence
    if (valorJ1 < valorC1)
        printf("Jogador venceu\n");
    else if (valorJ1 > valorC1)
        printf("Computador venceu\n");
    else
        printf("Empate\n");
} else {
    if (valorJ1 > valorC1)
        printf("Jogador venceu\n");
    else if (valorJ1 < valorC1)
        printf("Computador venceu\n");
    else
        printf("Empate\n");
}

    printf("***************************************\n");
    printf("***************************************\n");

    //2° rodada
    printf("     Opções de Disputa 2° rodada \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Quantidade de pontos Turistico \n");
    printf("5. Densidade Populacional \n");
    printf("6. PIB per Capita \n");
    printf("7. Super Poder \n");
    printf("***************************************\n");
do {
    printf("Escolha a sua opção: ");
    scanf(" %d", &jogada2);
    if (jogada2 < 1 || jogada2 > 7) {
        printf("Opção inválida! O jogo será encerrado.\n");
        exit(0);
    }
    if (jogada2 == jogada1) {
        printf("Você já escolheu esse atributo. Escolha outro.\n");
    }
    } while (jogada2 == jogada1);

switch (jogada2) {
    case 1: 
        printf("%s, população: %d\n", nome1, pop1); 
        valorJ2 = pop1;
        printf("%s, população: %d\n", nome2, pop2);
        valorC2 = pop2; break;
    case 2: 
        printf("%s, Área: %.2f\n", nome1, area1); 
        valorJ2 = area1; 
        printf("%s, Área: %.2f\n", nome2, area2); 
        valorC2 = area2; break;
    case 3:
        printf("%s, PIB: %.2f\n", nome1, pib1);
        valorJ2 = pib1;
        printf("%s, PIB: %.2f\n", nome2, pib2);
        valorC2 = pib2;
        break;
    case 4:
        printf("%s, Pontos Turísticos: %d\n", nome1, tur1);
        valorJ2 = tur1;
        printf("%s, Pontos Turísticos: %d\n", nome2, tur2);
        valorC2 = tur2;
        break;
    case 5:
        printf("%s, Densidade Populacional: %.2f\n", nome1, dpop1);
        valorJ2 = dpop1;
        printf("%s, Densidade Populacional: %.2f\n", nome2, dpop2);
        valorC2 = dpop2;
        break;
    case 6:
        printf("%s, PIB per Capita: %.2f\n", nome1, per1);
        valorJ2 = per1;
        printf("%s, PIB per Capita: %.2f\n", nome2, per2);
        valorC2 = per2;
        break;
    case 7:
        printf("%s, Super Poder: %.2f\n", nome1, superpoder1);
        valorJ2 = superpoder1;
        printf("%s, Super Poder: %.2f\n", nome2, superpoder2);
        valorC2 = superpoder2;
        break;
    default:
        printf("Opção inválida! O jogo será encerrado.\n");
        exit(0);
}

// Valor da Segunda rodada
//printf("Jogador rodada 2: %.2f - Computador rodada 2: %.2f\n", valorJ2, valorC2);

// Comparar jogada2
printf("Jogada 2 - Disputa: %d\n", jogada2);
if (jogada2 == 5) { // Densidade Populacional: menor vence
    if (valorJ2 < valorC2)
        printf("Jogador venceu\n");
    else if (valorJ2 > valorC2)
        printf("Computador venceu\n");
    else
        printf("Empate\n");
} else {
    if (valorJ2 > valorC2)
        printf("Jogador venceu\n");
    else if (valorJ2 < valorC2)
        printf("Computador venceu\n");
    else
        printf("Empate\n");
}

//Resultado das somas dos valores
printf("***************************************\n");
printf("***************************************\n");
somaJogador = valorJ1 + valorJ2;
somaComputador = valorC1 + valorC2;

printf("********* Rodada final! ***************\n");
printf("****** Soma dos atributos: ************\n");
printf("Jogador: %.2f\n", somaJogador);
printf("Computador: %.2f\n", somaComputador);

if (somaJogador > somaComputador)
    printf("Jogador venceu a rodada!\n");
else if (somaJogador < somaComputador)
    printf("Computador venceu a rodada!\n");
else
    printf("Empate na rodada!\n");


    return 0;
}