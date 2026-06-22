#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[4][5];
    int MB[4][5];
    int MC[4][5];

    for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("Digite o valor para MA[%d][%d](apenas numeros divisiveis por 3 e 4):", i, j);
    scanf("%d", &MA[i][j]);

    while (MA[i][j] % 3 != 0 || MA[i][j] % 4 != 0)
    {
    printf("Apenas numeros divisiveis por 3 e 4 bro!:");
    scanf("%d", &MA[i][j]);
    }
    }
    }


    for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("Digite o valor para MB[%d][%d](apenas numeros divisiveis por 5 ou 6):", i, j);
    scanf("%d", &MB[i][j]);

    while (MB[i][j] % 5 != 0 && MB[i][j] % 6 != 0)
    {
    printf("Apenas numeros divisiveis por 5 ou 6 bro!:");
    scanf("%d", &MB[i][j]);
    }
    }
    }

    for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    MC[i][j] = MA[i][j] - MB[i][j]; 
    }
    }
    
    for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("%d ", MC[i][j]);
    }
    printf("\n");
    }

    return 0;
}