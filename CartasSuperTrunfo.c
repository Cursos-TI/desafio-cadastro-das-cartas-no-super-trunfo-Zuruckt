#include <stdio.h>

struct Card {
    char state;
    char code[3];
    char name[21];
    int population;
    float area;
    float gdp;
    int poi;
    float populationDensity;
    float gdpPerCapita;
};

int main() {
    struct Card cardOne;
    struct Card cardTwo;

    printf("Cadastro de Cartas\n");

    printf("=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=\n");

    printf("Digite o Estado da Primeira Carta: ");
    scanf(" %c", &cardOne.state);

    printf("Digite o Código da Primeira Carta: ");
    scanf(" %2s", cardOne.code);

    printf("Digite o Nome da Primeira Carta: ");
    scanf(" %20s", cardOne.name);

    printf("Digite a População da Primeira Carta: ");
    scanf(" %d", &cardOne.population);
    
    printf("Digite a Área da Primeira Carta: ");
    scanf(" %f", &cardOne.area);

    printf("Digite o PIB da Primeira Carta: ");
    scanf(" %f", &cardOne.gdp);

    printf("Digite o Número de Pontos Turísticos da Primeira Carta: ");
    scanf(" %d", &cardOne.poi);

    printf("=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=\n");

    printf("Digite o Estado da Segunda Carta: ");
    scanf(" %c", &cardTwo.state);

    printf("Digite o Código da Segunda Carta: ");
    scanf(" %2s", cardTwo.code);

    printf("Digite o Nome da Segunda Carta: ");
    scanf(" %20s", cardTwo.name);

    printf("Digite a População da Segunda Carta: ");
    scanf(" %d", &cardTwo.population);
    
    printf("Digite a Área da Segunda Carta: ");
    scanf(" %f", &cardTwo.area);

    printf("Digite o PIB da Segunda Carta: ");
    scanf(" %f", &cardTwo.gdp);

    printf("Digite o Número de Pontos Turísticos da Segunda Carta: ");
    scanf(" %d", &cardTwo.poi);

    cardOne.populationDensity = cardOne.population / cardOne.area;
    cardTwo.populationDensity = cardTwo.population / cardTwo.area;

    cardOne.gdpPerCapita = cardOne.gdp / cardOne.population;
    cardTwo.gdpPerCapita = cardTwo.gdp / cardTwo.population;

    printf("=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=\n");

    printf("Carta %c%s \n", cardOne.state, cardOne.code);
    printf("Nome: %s\n", cardOne.name);
    printf("População: %d\n", cardOne.population);
    printf("Área: %.2f\n", cardOne.area);
    printf("PIB: %.2f\n", cardOne.gdp);
    printf("Pontos Turísticos: %d\n", cardOne.poi);
    printf("Densidade Populacional: %f\n", cardOne.populationDensity);
    printf("PIB per Capita: %f\n", cardOne.gdpPerCapita);

    printf("\n");

    printf("Carta %c%s \n", cardTwo.state, cardTwo.code);
    printf("Nome: %s\n", cardTwo.name);
    printf("População: %d\n", cardTwo.population);
    printf("Área: %.2f\n", cardTwo.area);
    printf("PIB: %.2f\n", cardTwo.gdp);
    printf("Pontos Turísticos: %d\n", cardTwo.poi);
    printf("Densidade Populacional: %f\n", cardTwo.populationDensity);
    printf("PIB per Capita: %f\n", cardTwo.gdpPerCapita);
    printf("\n");
    
    return 0;
}