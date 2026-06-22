#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[20]; 
    int MB[20]; 
    int soma; 

    for (int i = 0; i < 20; i++)
    {
    printf("Digite o %d numero de A:\n", i+1); 
    scanf("%d", &MA[i]); 
    }
    
    for (int i = 0; i < 20; i++)
    {
    soma = 0; 
    for (int j = MA[i]; j >= 1; j--)
    {
    soma += j; 
    }
    MB[i] = soma; 
    }
    
    printf("Matriz B:\n"); 

    for (int k = 0; k < 20; k++)
    {
    printf("%d\n", MB[k]); 
    }
    
    return 0;
}