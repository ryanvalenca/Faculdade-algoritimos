#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[8][6];
    float MB[8];
    float soma; 
    float somaT = 0; 

    for (int i = 0; i < 8; i++)
    {
    for (int j = 0; j < 6; j++)
    {
    printf("Digite o valor para MA[%d][%d]:", i, j);
    scanf("%f", &MA[i][j]);
    }
    }
    
    for (int i = 0; i < 8; i++)
    {
    soma = 0; 
    for (int j = 0; j < 6; j++)
    {
    soma += MA[i][j]; 
    }
    MB[i] = soma; 
    }

    for (int i = 0; i < 8; i++)
    {
    printf("Somatorio da %d linha: %.2f\n", i+1, MB[i]);
    somaT += MB[i]; 
    }

    printf("Soma de todos os elementos da Matriz B: %.2f", somaT);
    

    return 0;
}