#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[25]; 
    float MB[25]; 

    for (int i = 0; i < 25; i++)
    {
    printf("Digite o %d valor de A(Celsius):\n", i+1); 
    scanf("%f", &MA[i]);  
    }
    
    for (int i = 0; i < 25; i++)
    {
    MB[i] = (MA[i] * 1.8) + 32; 
    }
    
    printf("Resultados:\n"); 

    for (int j = 0; j < 25; j++)
    {
    printf("Celsius: %.2f\n", MA[j]); 
    }
    
    for (int j = 0; j < 25; j++)
    {
    printf("Fahrenheit: %.2f\n", MB[j]); 
    }

    return 0;
}