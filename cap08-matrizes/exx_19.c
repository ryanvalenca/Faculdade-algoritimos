#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[5][6];
    int MB[5][6];
    int MC[5][6];

    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 6; j++)
    {
    printf("Digite o valor para MA(apenas numero par)[%d][%d]:", i, j);
    scanf("%d", &MA[i][j]);

    while (MA[i][j] % 2 != 0)
    {
    printf("Apenas numero PAR porra!:");
    scanf("%d", &MA[i][j]);
    }
    }
    }
    

    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 6; j++)
    {
    printf("Digite o valor para MB(apenas numero impar)[%d][%d]:", i, j);
    scanf("%d", &MB[i][j]);

    while (MB[i][j] % 2 == 0)
    {
    printf("Apenas numero IMPAR porra!:");
    scanf("%d", &MB[i][j]);
    }
    }
    }


    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 6; j++)
    {
    MC[i][j] = MA[i][j] + MB[i][j]; 
    }
    }
    
    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 6; j++)
    {
    printf("%d ", MC[i][j]);
    }
    printf("\n");
    }
    
    return 0;
}