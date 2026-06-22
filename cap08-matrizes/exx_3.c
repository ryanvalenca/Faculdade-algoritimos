#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[4][5];

    for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("Digite o valor para MA[%d][%d]:", i, j);
    scanf("%d", &MA[i][j]); 
    }
    }
    
    
    for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("%d ", MA[i][j]); 
    }
    printf("\n"); 
    }
    
    
    
    return 0;
}