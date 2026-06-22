#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[7][7]; 
    int par=0; 

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
    if (MA[i][j] % 2 == 0)
    {
    par++; 
    }
    }
    }

    printf("Total de valores pares na Matriz A: %d", par); 

    return 0;
}