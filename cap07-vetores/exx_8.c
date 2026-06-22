#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[20]; 
    int MB[20];
    int aux; 

    for (int i = 0; i < 20; i++)
    {
    printf("\nDigite o %d valor de A(apenas negativo):\n", i+1); 
    scanf("%d", &MA[i]); 

    while (MA[i] >= 0)
    {
    printf("\nApenas numero NEGATIVO seu porra!:\n"); 
    scanf("%d", &MA[i]);
    }
    MB[i] = (MA[i] * -1); 
    }
    

    for (int i = 0; i < 20; i++)
    {
    for (int j = i+1; j < 20; j++)
    {
    if (MB[i] < MB[j])
    {
    aux = MB[i]; 
    MB[i] = MB[j]; 
    MB[j] = aux; 
    }
    }
    }
    

    printf("\nMatriz B em ordem decrescente e positiva:\n"); 

    for (int k = 0; k < 20; k++)
    {
    printf("%d\n", MB[k]); 
    }
    

    return 0;
}