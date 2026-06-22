#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[10]; 
    int MB[10]; 
    int MC[10]; 
    int aux; 

    for (int i = 0; i < 10; i++)
    {
    printf("\nDigite o %d valor de A:\n", i+1);
    scanf("%d", &MA[i]); 

    printf("\nDigite o %d valor de B:\n", i+1);
    scanf("%d", &MB[i]); 
    }
    
    for (int i = 0; i < 10; i++)
    {
    MC[i] = (MA[i] * MA[i]) + (MB[i] * MB[i]); 
    }
    
    for (int i = 0; i < 10; i++)
    {
    for (int j = i+1; j < 10; j++)
    {
    if (MC[i] < MC[j])
    {
    aux = MC[i]; 
    MC[i] = MC[j]; 
    MC[j] = aux; 
    }
    }
    }
    
    printf("\nMatriz C\n"); 

    for (int i = 0; i < 10; i++)
    {
    printf("%d\n", MC[i]); 
    }


    return 0;
}