#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[15]; 
    int MB[15]; 
    int fatorial = 1; 

    for (int i = 0; i < 15; i++)
    {
    printf("DIgite o %d numero aqui:\n", i + 1); 
    scanf("%d", &MA[i]); 
    }
    
    for (int j = 0; j < 15; j++)
    {
    fatorial = 1; 
    for (int k = MA[j]; k > 1; k--)
    {
    fatorial *= k; 
    }
    MB[j] = fatorial; 
    }
    
    printf("Resultado dos fatoriais:\n"); 
    for (int l = 0; l < 15; l++)
    {
    printf("fatorial de %d: %d\n", MA[l], MB[l]);
    }
    return 0;
}