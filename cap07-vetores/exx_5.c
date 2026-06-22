#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[20]; 
    int MB[30]; 
    int MC[50]; 
    int aux; 

    for (int i = 0; i < 20; i++)
    {
    printf("Digite o %d valor de A:\n", i+1); 
    scanf("%d", &MA[i]); 
    MC[i] = MA[i]; 
    }
    
    for (int i = 0; i < 30; i++)
    {
    printf("Digite o %d valor de B:\n", i+1); 
    scanf("%d", &MB[i]);
    MC[i+20] = MB[i];  
    }
    
    for (int j = 0; j < 50; j++)
    {
    for (int k = j+1; k < 50; k++)
    {
    if (MC[j] < MC[k])
    {
    aux = MC[j]; 
    MC[j] = MC[k]; 
    MC[k] = aux; 
    }
    }
    }
    
    printf("A e B juntos em ordem decrescente:\n"); 

    for (int l = 0; l < 50; l++)
    {
    printf("%d\n", MC[l]); 
    }
    
    return 0;
}