#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int MA[10];
    int MB[10]; 
    int MC[10]; 

    for (int i = 0; i < 10; i++)
    {
    printf("Digite o %d valor de A aqui:\n", i+1);
    scanf("%d", &MA[i]); 

    printf("Digite o %d valor de B aqui:\n", i+1);
    scanf("%d", &MB[i]); 
    }
    
    for (int i = 0; i < 10; i++)
    {
    MC[i] = pow((MA[i] + MB[i]), 2); 
    }
    
    printf("Quadrados da soma de A e B:\n"); 

    for (int j = 0; j < 10; j++)
    {
    printf("%d\n", MC[j]); 
    }
    
    return 0;
}