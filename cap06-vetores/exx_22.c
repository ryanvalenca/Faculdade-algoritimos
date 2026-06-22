#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[30]; 
    int par=0, impar=0;

    for (int i = 0; i < 30; i++)
    {
    printf("Digite o %d numero de A:\n", i+1);
    scanf("%d", &MA[i]); 
    }
    
    for (int i = 0; i < 30; i++)
    {
    if (MA[i] % 2 == 0)
    {
    par++; 
    }
    else
    {
    impar++; 
    }
    }
    
    printf("Resultados:\n"); 
    printf("Quantidade de numeros Pares: %d\n", par); 
    printf("Quantidade de numeros Impares: %d\n", impar); 
    
    return 0;
}