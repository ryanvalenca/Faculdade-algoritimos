#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[15][15]; 
    int soma=0; 

    for (int i = 0; i < 15; i++)
    {
    for (int j = 0; j < 15; j++)
    {
    printf("Digite o valor para MA[%d][%d]:", i, j);
    scanf("%d", &MA[i][j]); 
    }
    }
    

    for (int i = 0; i < 15; i++)
    {
    if (MA[i][i] % 2 == 0)
    {
    soma += MA[i][i];
    }
    }

    printf("Somatorio dos elementos pares da diagonal principal: %d", soma); 

    return 0;
}