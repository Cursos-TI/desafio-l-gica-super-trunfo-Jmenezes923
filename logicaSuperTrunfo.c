#include <stdio.h>

int main(){

    // variáveis da primeira carta (Manaus AM)
    char estado1 [20] = ("A");
    char codigo1 [20] = ("A01");
    char cidade1 [30] = ("Manaus");
    int populacao1 = 2.064000 ;
    float area1 = 11.401;
    float PIB1 = 103.28100000;
    int numero_de_pontos_turisticos1 = 57;

    // variáveis da segunda carta (Salvador BAHIA)
    char estado2 [20] = ("B");
    char codigo2 [20] = ("B02");
    char cidade2 [30] = ("Salvador");
    int populacao2 = 2.418000;
    float area2 = 693.8;
    float PIB2 = 34.02000000;
    int numero_de_pontos_turisticos2 = 42;

    //dados inseridos da primeira carta
     //estrutura usada printf e scanf
     
    printf("Primeira Carta \n");
 
    printf("Estado: ");
    scanf("%s" , &estado1);

    printf("Código: ");
    scanf("%s" , &codigo1);

    printf("Cidade:");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d" , &populacao1);

    printf("Área: ");
    scanf("%f" , &area1);

    printf("PIB: ");
    scanf("%f" , &PIB1);

    printf("Números de Pontos Turísticos: ");
    scanf("%d" , &numero_de_pontos_turisticos1);

    printf("============================================\n");

    //dados inseridos da segunda carta
    //estrutura usada printf e scanf

    printf("Segunda Carta \n");

    printf("Estado: ");
    scanf("%s" , &estado2 );

    printf("Código: ");
    scanf("%s" , &codigo2);

    printf ("Cidade: ");
    scanf("%s" , cidade2);

    printf("População: ");
    scanf("%d" , &populacao2);

    printf("Área: ");
    scanf("%f" , &area2);

    printf("PIB: ");
    scanf("%f" , &PIB2);

    printf("Números de Pontos Turísticos: ");
    scanf("%d" , &numero_de_pontos_turisticos2);

    printf("============================================\n");

//calculo da densidade populacional / pib per capita carta 1
// estrutura usada (divisão)

float densidade_populacional1 = populacao1 / area1;
float pib_per_capita1 = PIB1 / populacao1;
 
    printf("Densidade Populacional do %s: %.2f\n", cidade1, densidade_populacional1);
    printf("PIB per capita do %s: %.2f\n", cidade1, pib_per_capita1);
    
    printf("============================================\n");

//calculo da densidade populacional / pib per capita carta 2
// estrutura usada (divisão)

float densidade_populacional2 = populacao2 / area2;
float pib_per_capita2 = PIB2 / populacao2;

    printf("Densidade Populacional da %s: %.2f\n", cidade2, densidade_populacional2);
    printf("PIB per capita da %s: %.2f\n", cidade2, pib_per_capita2); 

    printf("============================================\n");

    //Atributo escolhido para determinar a carta vencedora (PIB).
    //Estrutura usada if e if-else.
    if (PIB1 > PIB2){
        printf("Carta número 1 venceu \n");
    } else {
        printf("Carta número 2 venceu \n");
    } 
    if (PIB1 == PIB2){
        printf("Empate entre as duas cartas.");
    }


    return 0;






}
