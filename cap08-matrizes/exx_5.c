#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[12]; 
    float MB[12]; 
    float MC[12][2]; 

    for (int i = 0; i < 12; i++)
    {
    printf("Digite o %d valor de A:\n", i+1);
    scanf("%f", &MA[i]); 

    printf("Digite o %d valor de B:\n", i+1);
    scanf("%f", &MB[i]); 
    }
    
    for (int i = 0; i < 12; i++)
    {
    MC[i][0] = MA[i] * 2.0; 
    MC[i][1] = MB[i] - 5.0; 
    }
    
    printf("\nMatriz A!\n"); 
    for (int i = 0; i < 12; i++)
    {
    printf("%.2f ", MA[i]); 
    }
    
    printf("\nMatriz B!\n"); 
    for (int i = 0; i < 12; i++)
    {
    printf("%.2f ", MB[i]); 
    }
    
    printf("\nMatriz C!\n");
    for (int i = 0; i < 12; i++)
    {
    for (int j = 0; j < 2; j++)
    {
    printf("%.2f ", MC[i][j]); 
    }
    printf("\n");
    }
    
    return 0;
}