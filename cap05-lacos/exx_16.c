#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int soma = 0; 


    for (int i = 50; i <= 70; i++)
    {
    soma += i; 
    }
    
    printf("Soma de todos os numeros: %d\n", soma); 
    printf("Media dos numeros: %.2f\n", (float)soma/21); 


    return 0;
}