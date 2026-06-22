#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[15]; 
    int MB[15]; 
    int MC[15]; 
    int MD[15];
    int ME[15];  
    int soma, fatorial, aux; 

    for (int i = 0; i < 15; i++)
    {
    printf("\nDigite o %d valor de A:\n", i+1); 
    scanf("%d", &MA[i]); 

    printf("\nDigite o %d valor de B:\n", i+1); 
    scanf("%d", &MB[i]); 
    }
    

    for (int i = 0; i < 15; i++)
    {
    soma = 0; 
    for (int j = MA[i]; j >= 1; j--)
    {
    soma += j; 
    }
    MC[i] = soma; 
    }
    

    for (int i = 0; i < 15; i++)
    {
    fatorial = 1; 
    for (int j = MB[i]; j >= 1; j--)
    {
    fatorial *= j; 
    }
    MD[i] = fatorial; 
    }
    
    for (int i = 0; i < 15; i++)
    {
    ME[i] = (MC[i] - MD[i]) - (MA[i] + MB[i]); 
    }
    

    for (int i = 0; i < 15; i++)
    {
    for (int j = i+1; j < 15; j++)
    {
    if (ME[i] > ME[j])
    {
    aux = ME[i]; 
    ME[i] = ME[j]; 
    ME[j] = aux; 
    }
    }
    }
    
    printf("\nMatriz E em ordem crescente:\n"); 


    for (int i = 0; i < 15; i++)
    {
    printf("%d\n", ME[i]); 
    }

    return 0;
}