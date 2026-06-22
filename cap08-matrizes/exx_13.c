#include <stdio.h>
#include <stdlib.h>

int main() {
    

    float MA[5][5]; 
    float soma=0; 

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
    if (i % 2 != 0)
    {
    soma += MA[i][i]; 
    }
    }
    
    printf("Somatorio da diagonal principal dos numeros impares: %.2f", soma); 
    
    return 0;
}