#include <stdio.h>
#include <stdlib.h>

int main() {
    
    long int resultado = 1; 
    for (int i = 0; i <= 15; i++)
    {
    printf("3 elevado a %d e igual a: %ld\n", i, resultado);
    resultado = resultado * 3; 
    }
    
    return 0;
}