#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int quadrado;

    for (int i = 15; i <= 200; i += 3)
    {
    quadrado = pow(i,2); 
    printf("%d ao quadrado: %d\n", i, quadrado); 
    }
    

    return 0;
}