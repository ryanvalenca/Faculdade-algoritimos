#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[6][5]; 
    int MB[6][5]; 

    for (int i = 0; i < 6; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("Digite o valor para MA[%d][%d]:", i, j);
    scanf("%d", &MA[i][j]);
    }
    }
    

    for (int i = 0; i < 6; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    if (MA[i][j] % 2 == 0)
    {
    MB[i][j] = MA[i][j] + 5; 
    }
    else
    {
    MB[i][j] = MA[i][j] - 4; 
    }
    }
    }

    printf("\nMatriz A:\n");
    for (int i = 0; i < 6; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("%d ", MA[i][j]);
    }
    printf("\n"); 
    }


    printf("\nMatriz B:\n");
    for (int i = 0; i < 6; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("%d ", MB[i][j]);
    }
    printf("\n"); 
    }

    return 0;
}