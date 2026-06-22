#include <stdio.h>
#include <stdlib.h>

int main() {
    int soma = 0; 
    for (int i = 1; i <= 100; i++)
    { 
    soma = soma + i; 
    }
    printf("resultado da soma dos cem primeiros numeros: %d\n", soma);
    return 0;
}