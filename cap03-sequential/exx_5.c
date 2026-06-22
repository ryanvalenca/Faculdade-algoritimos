#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float prestacao, valor, taxa, tempo;

    printf("digite o valor:\n");
    scanf("%f", &valor);

    printf("digite o valor da taxa:\n");
    scanf("%f", &taxa); 

    printf("digite o tempo:\n");
    scanf("%f", &tempo); 

    prestacao = valor + (valor *(taxa / 100)* tempo); 

    printf("valor da prestacao:\n"); 
    printf("%.1f", prestacao); 


    return 0;
}