#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float fahrenheit, celsius; 

    printf("digite o valor de fahrenheit aqui:\n"); 
    scanf("%f", &fahrenheit); 

    celsius = ((fahrenheit - 32 ) * 5) / 9; 

    printf("resultado da conversão de fahrenheit para celsius:\n"); 
    printf("%.1f", celsius); 

    return 0;
}