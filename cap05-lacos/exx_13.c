#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float v[10]; 
    float s = 0.0; 
    for (int i = 0; i < 10; i++)
    {
    printf("Digite um numero real\n"); 
    scanf("%f", &v[i]); 
    s += v[i]; 
    }
    
    printf("Resultado final: %f\n", s); 
    printf("Media final: %f\n", s/10);
    return 0;
}