#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float VA[20]; 
    float MA[20];
    float menor, maior, soma=0; 
    for (int i = 0; i < 20; i++)
    {
    printf("Digite a %d temperatura(Celsius):\n", i+1); 
    scanf("%f", &VA[i]);
    MA[i] = VA[i];  
    }
    maior = VA[0]; 
    menor = VA[0]; 

    for (int i = 0; i < 20; i++)
    {
    if (VA[i] < menor)
    {
    menor = VA[i]; 
    }
    if (VA[i] > maior)
    {
    maior = VA[i]; 
    }
    
    }
    printf("Resultados:\n"); 

    printf("Maior: %.2f\n", maior); 
    printf("Menor: %.2f\n", menor); 
    
    for (int j = 0; j < 20; j++)
    {
    soma += VA[j]; 
    }
    printf("Media: %.2f\n", soma /20); 
    

    return 0;
}