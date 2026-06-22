#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[15]; 
    int par=0; 

    for (int i = 0; i < 15; i++)
    {
    printf("Digite o %d valor de A aqui:\n", i+1); 
    scanf("%d", &MA[i]);
    }
    
    for (int i = 0; i < 15; i++)
    {
    if (MA[i] % 2 == 0)
    {
    par++; 
    }
    }
    

    printf("Total de numeros pares: %d\n", par); 
    
    return 0;
}