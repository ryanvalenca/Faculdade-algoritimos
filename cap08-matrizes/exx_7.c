#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[4][5]; 
    float MB[4][5]; 

    for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("Digite o valor para MA[%d][%d](Celsius):", i, j); 
    scanf("%f", &MA[i][j]); 
    }
    }
    
    for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    MB[i][j] = (MA[i][j] * 9/5.0) + 32; 
    }
    }

    printf("\nMatriz A(Celsius):\n"); 
    for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("%.2f ", MA[i][j]); 
    }
    printf("\n"); 
    }

    printf("\nMatriz B(Fahrenheit):\n"); 
    for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 5; j++)
    {
    printf("%.2f ", MB[i][j]); 
    }
    printf("\n"); 
    }

    return 0;
}