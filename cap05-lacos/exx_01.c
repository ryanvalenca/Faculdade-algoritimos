#include <stdio.h>
#include <stdlib.h>

int main() {
    
    for (int i = 15; i <= 200; i++)
    {
    int quadrado; 
    quadrado = i * i; 
    printf("%d ao quadrado: %d\n", i, quadrado);
    }
    
    return 0;
}
