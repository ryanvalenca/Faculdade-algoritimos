#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[5][5];
    float somaD = 0; 

    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("Digite o valor para MA[%d][%d]:", i, j);
    scanf("%f", &MA[i][j]); 
    }
    }
    
    for (int i = 0; i < 5; i++)
    {
    somaD += MA[i][i]; 
    }
    

    printf("\nMatriz A:\n");
    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("%.2f ", MA[i][j]);
    }
    printf("\n");
    }

    printf("Somatorio da diagonal principal: %.2f", somaD); 

    return 0;
}