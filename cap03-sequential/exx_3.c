#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float raio, altura, volume;

    printf("digite o valor do raio aqui:\n");
    scanf("%f", &raio); 

    printf("digite o valor da altura aqui:\n"); 
    scanf("%f", &altura); 

    volume = 3.14159 * pow(raio, 2 ) * altura; 

    printf("Volume final:\n"); 
    printf("%.1f", volume); 


    return 0;
}