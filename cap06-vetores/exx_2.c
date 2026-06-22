#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[8];
    int MB[8]; 

    for (int i = 0; i < 8; i++)
    {
    printf("Digite um valor aqui:\n"); 
    scanf("%d", &MA[i]); 
    }
    
    for (int j = 0; j < 8; j++)
    {
    MB[j] = MA[j]; 
    }
    
    for (int k = 0; k < 8; k++)
    {
    MB[k] *= 3; 
    }
    
    printf("Todos os valores de A multplicados 3 abaixo:\n"); 

    for (int l = 0; l < 8; l++)
    {
    printf("%d\n", MB[l]); 
    }
    
    return 0;
}