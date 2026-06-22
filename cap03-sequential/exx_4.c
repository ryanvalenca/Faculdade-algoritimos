#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float tempo, velocidade, distancia, litros_usados; 

    printf("tempo gasto:\n"); 
    scanf("%f", &tempo); 

    printf("velocidade media:\n"); 
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;

    litros_usados = distancia / 12; 

    printf("relatorio final da viagem:\n");
    printf("tempo gasto: %.1f horas\n", tempo); 
    printf("velocidade media: %.1f km/h\n", velocidade); 
    printf("distancia percorrida: %.1f km\n", distancia);
    printf("litros totais: %.1f litros\n", litros_usados);

    return 0;
}