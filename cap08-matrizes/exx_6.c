#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[5][4]; 
    int MB[5][4];

    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 4; j++)
    {
    printf("Digite o valor para MA[%d][%d]:", i, j); 
    scanf("%d", &MA[i][j]); 
    }
    }
    

    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 4; j++)
    {
    int fatorial = 1; 
    for (int k = MA[i][j]; k > 1; k--)
    {
    fatorial *= k; 
    }
    MB[i][j] = fatorial; 
    }
    }

    printf("\nMatriz A:\n"); 
    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 4; j++)
    {
    printf("%d ", MA[i][j]);  
    }
    printf("\n"); 
    }

    printf("\nMatriz B:\n"); 
    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 4; j++)
    {
    printf("%d ", MB[i][j]);  
    }
    printf("\n"); 
    }

    return 0;
}