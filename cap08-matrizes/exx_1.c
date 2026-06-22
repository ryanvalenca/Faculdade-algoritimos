#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[5][3];
    int MB[5][3]; 
    int MC[5][3]; 
    

    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 3; j++)
    {
    printf("Digite o valor para A[%d][%d]: ", i, j);
    scanf("%d", &MA[i][j]);

    printf("Digite o valor para B[%d][%d]: ", i, j);
    scanf("%d", &MB[i][j]);

    MC[i][j] = MA[i][j] + MB[i][j];
    }
    }

    printf("\nMatriz resultante C:\n"); 

    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 3; j++)
    {
    printf("%d ", MC[i][j]);
    }
    printf("\n");
    }
    
    return 0;
}