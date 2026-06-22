#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int A, B, aux; 

    printf("digite o valor de A:\n"); 
    scanf("%d", &A); 

    printf("digite o valor de B:\n"); 
    scanf("%d", &B); 

    aux = A; 
    A = B;
    B = aux; 

    printf("valores trocados:\n");
    printf("valor de A: %d\n", A);
    printf("valor de B: %d\n", B);



    return 0;
}