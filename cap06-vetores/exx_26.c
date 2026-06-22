#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[10]; 
    int impar=0, percentual;  

    for (int i = 0; i < 10; i++)
    {
    printf("Digite o %d valor de A aqui:\n", i+1); 
    scanf("%d", &MA[i]); 
    }
    
    for (int i = 0; i < 10; i++)
    {
    if (MA[i] % 2 != 0)
    {
    impar++; 
    }
    }
    
    percentual = (impar*100) / 10; 

    printf("Total de numeros impares: %d\n", impar);

    printf("Percentual total dos numeros impares: %d%%\n", percentual); 


    return 0;
}