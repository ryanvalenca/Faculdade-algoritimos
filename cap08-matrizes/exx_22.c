#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[5][5];
    int MB[5][5];   
    int MC[5][5];

    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("Digite um numero para MA[%d][%d](apenas numeros que nao sejam divisiveis de 3):", i, j);
    scanf("%d", &MA[i][j]);
    while (MA[i][j] % 3 == 0)
    {
    printf("Apenas numeros que nao sejam divisiveis por 3!:");
    scanf("%d", &MA[i][j]);
    }
    }
    }
    
    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("Digite um numero para MB[%d][%d](apenas numeros que nao sejam divisiveis de 6):", i, j);
    scanf("%d", &MB[i][j]);
    while (MB[i][j] % 6 == 0)
    {
    printf("Apenas numeros que nao sejam divisiveis por 6!:");
    scanf("%d", &MB[i][j]);
    }
    }
    }

    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    MC[i][j] = MA[i][j] + MB[i][j];
    }
    }
    
    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("%d ", MC[i][j]);
    }
    printf("\n");
    }

    return 0;
}