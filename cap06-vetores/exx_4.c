#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int MA[15]; 
    int MB[15]; 

    for (int i = 0; i < 15; i++)
    {
    printf("Digite %d valor de A aqui: \n", i + 1); 
    scanf("%d", &MA[i]); 
    }
    
    for (int j = 0; j < 15; j++)
    {
    MB[j] = pow(MA[j], 2); 
    }
    
    printf("Valores de MA ao quadrado dentro de MB:\n"); 

    for (int k = 0; k < 15; k++)
    {
    printf("%d ao quadrado e: %d\n", MA[k], MB[k]); 
    }
    
    return 0;
}