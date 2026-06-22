#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int atual = 1;
    int anterior = 0;
    int proximo; 
    
    for (int i = 3; i <= 15; i++)
    {  
    proximo = anterior + atual; 
    printf("%d\n", proximo);  
    anterior = atual;
    atual = proximo;
    
    }

    return 0;
}