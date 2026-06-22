#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[6]; 
    float MB[6]; 

    for (int i = 0; i < 6; i++)
    {
    printf("Digite o %d numero de A aqui:\n", i+1);
    scanf("%f", &MA[i]); 
    }
    
    for (int i = 0; i < 6; i++)
    {
    if (i % 2 != 0)
    {
    MB[i] = MA[i-1]; 
    }
    else
    {
    MB[i] = MA[i+1];
    }
    }
    
    printf("Matriz A:\n"); 
    for (int j = 0; j < 6; j++)
    {
    printf("%.1f\n", MA[j]);
    }
    

    printf("Matriz B:\n"); 
    for (int j = 0; j < 6; j++)
    {
    printf("%.1f\n", MB[j]);
    }
    
    return 0;
}