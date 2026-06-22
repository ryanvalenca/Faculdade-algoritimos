#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[15]; 
    float MB[15]; 

    for (int i = 0; i < 15; i++)
    {
    printf("Digite o %d valor de A:\n", i+1);
    scanf("%f", &MA[i]); 
    }
    
    for (int i = 0; i < 15; i++)
    {
    if (i % 2 == 0)
    {
    MB[i] = MA[i] / 2; 
    }
    else
    {
    MB[i] = MA[i] * 1.5; 
    }
    
    }
    
    printf("Resultados da Matriz B:\n"); 

    for (int j = 0; j < 15; j++)
    {
    printf("%.1f\n", MB[j]);
    }

    return 0;
}