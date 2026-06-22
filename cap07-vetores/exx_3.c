#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[15]; 
    int MB[15]; 
    int fatorial, aux; 

    for (int i = 0; i < 15; i++)
    {
    printf("Digite o %d valor de A aqui:\n", i+1); 
    scanf("%d", &MA[i]); 
    }
    
    for (int i = 0; i < 15; i++)
    {
    fatorial=1; 

    for (int j = MA[i]; j > 1; j--)
    {
    fatorial *= j; 
    }
    MB[i] = fatorial; 
    }
    
    for (int k = 0; k < 15; k++)
    {
    for (int l = k + 1; l < 15; l++)
    {
    if (MB[k] > MB[l])
    {
    aux = MB[k]; 
    MB[k] = MB[l]; 
    MB[l] = aux; 
    }
    }
    }
    
    printf("Fatoriais em ordem crescente:\n"); 

    for (int m = 0; m < 15; m++)
    {
    printf("%d\n", MB[m]); 
    }
    
    return 0;
}