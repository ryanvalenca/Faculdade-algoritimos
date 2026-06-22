#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[5][5];
    int MB[5][5];


    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("Digite o valor para MA[%d][%d]:", i, j);
    scanf("%d", &MA[i][j]);
    MB[i][j] = MA[i][j] * 2; 
    }
    }
    
    for (int i = 0; i < 5; i++)
    {
    int j = 4 - i; 
    MB[i][j] = MA[i][j] * 3; 
    }
    
    for (int i = 0; i < 5; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("%d ", MB[i][j]);
    }
    printf("\n"); 
    }

    return 0;
}