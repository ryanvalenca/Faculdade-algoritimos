#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float fahrenheit, celsius; 

    printf("digite o valor de C:\n"); 
    scanf("%f", &celsius); 

    fahrenheit = celsius * 9 / 5 + 32; 

    printf("Resultados:\n"); 
    printf("%.1f", fahrenheit); 


    return 0;
}
