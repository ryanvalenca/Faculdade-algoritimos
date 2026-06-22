#include <stdio.h>
#include <stdlib.h>

int main() {
    int soma = 0; 
    for (int i = 1; i <= 500; i++)
    {
    
    if(i % 2 == 0)
    {
    soma = soma + i;
    }
    }
    printf("somatorio de todos os numero pares entre 1 e 500: %d\n", soma);


    return 0;
}