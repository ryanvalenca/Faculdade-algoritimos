#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[7][7];
    int MB[7][7];

    for (int i = 0; i < 7; i++)
    {
    for (int j = 0; j < 7; j++)
    {
    printf("Digite o valor para MA[%d][%d]:", i, j);
    scanf("%d", &MA[i][j]); 
    }
    }
    

    for (int i = 0; i < 7; i++)
    {
    for (int j = 0; j < 7; j++)
    {
    int soma = 0;
    int fatorial = 1;  
    for (int k = MA[i][j]; k >= 1; k--)
    {
    if (i == j && i % 2 != 0)
    {
    fatorial *= k; 
    }
    else
    {
    soma += k; 
    }
    }
    if (i == j && i % 2 != 0)
    {
    MB[i][j] = fatorial; 
    }
    else
    {
    MB[i][j] = soma; 
    }
    }
    }


    printf("\nMatriz B:\n");
    for (int i = 0; i < 7; i++)
    {
    for (int j = 0; j < 7; j++)
    {
    printf("%d ", MB[i][j]);
    }
    printf("\n"); 
    }


    return 0;
}