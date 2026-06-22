#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int base, expoente; 
    long int resultado = 1; 
    printf("digite a base (somente inteiros e positivos):\n");
    scanf("%d", &base);

    printf("digite o expoente (somente inteiros e positivos):\n");
    scanf("%d", &expoente);

    for (int i = 1; i <= expoente; i++)
    {
    resultado = resultado * base; 
    }
    
    printf("Valor final: %ld\n", resultado); 


    return 0;
}