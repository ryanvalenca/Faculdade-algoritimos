#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[15]; 
    int MB[15]; 
    int aux; 

    for (int i = 0; i < 15; i++)
    {
    printf("\nDigite o %d valor de A:\n", i+1); 
    scanf("%d", &MA[i]); 
    MB[i] = (MA[i] / 2); 
    }
    
    for (int i = 0; i < 15; i++)
    {
    for (int j = i+1; j < 15; j++)
    {
    if (MA[i] < MA[j])
    {
    aux = MA[i]; 
    MA[i] = MA[j]; 
    MA[j] =  aux; 
    }
    if (MB[i] > MB[j])
    {
    aux = MB[i]; 
    MB[i] = MB[j]; 
    MB[j] = aux; 
    }
    }
    }
    

    printf("\nMatriz A em ordem decrescente\n"); 

    for (int i = 0; i < 15; i++)
    {
    printf("%d\n", MA[i]);
    }
    

    printf("\nMatriz B em ordem crescente\n");

    for (int i = 0; i < 15; i++)
    {
    printf("%d\n", MB[i]);
    }
    return 0;
}