#include <stdio.h>

int main() {

int populacaoA, populacaoB;
int pontos1, pontos2;
float areakm1,areakm2;
float pibA,pibB;
char citA[50], citB[50];
char estadoA[50], estadoB[50];
char cod1[50], cod2[50];

   printf("Codigo da carta 1: ");
   scanf("%s", cod1);
   printf("Estado: ");
   scanf("%s", estadoA);
   printf("Cidade: ");
   scanf("%s", citA);
   printf("Area do estado %s (em km2): ", estadoA);
   scanf("%f", &areakm1);
   printf("Populacao do estado %s: ", estadoA);
   scanf("%d", &populacaoA);
   printf("PIB %s: ", estadoA);
   scanf("%f", &pibA);
   printf("Pontos turisticos do estado %s: ", estadoA);
   scanf("%d", &pontos1);

    printf("\n");

   printf("Codigo da carta 2: ");
   scanf("%s", cod2);
   printf("Estado: ");
   scanf("%s", estadoB);
   printf("Cidade: ");
   scanf("%s", citB);
   printf("Estado %s (em km2): ", estadoB);
   scanf("%f", &areakm2);
   printf("Populacao do estado %s: ", estadoB);
   scanf("%d", &populacaoB);
   printf("PIB %s: ", estadoB);
   scanf("%f", &pibB);
   printf("Pontos turisticos do estado %s: ", estadoB);
   scanf("%d", &pontos2);

   printf("\n"); 
   printf("Carta 1: %s - %s - %s\n", cod1, estadoA, citA);
   printf("Area: %.2f km2\n", areakm1);
   printf("Populacao: %d\n", populacaoA);
   printf("PIB: %.2f\n", pibA);
   printf("Pontos Turisticos: %d\n", pontos1);

   printf("\n");
   printf("Carta 2: %s - %s - %s\n", cod2, estadoB, citB);
   printf("Area: %.2f km2\n", areakm2);
   printf("Populacao: %d\n", populacaoB);
   printf("PIB: %.2f\n", pibB);
   printf("Pontos Turisticos: %d\n", pontos2);

return 0;
}