#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[20];
    float MB[20];
    float MC[20]; 

    for (int i = 0; i < 20; i++)
    {
    printf("DIgite o %d valor de A:\n", i + 1);
    scanf("%f", &MA[i]); 

    printf("DIgite o %d valor de B:\n", i + 1);
    scanf("%f", &MB[i]); 
    }
    
    for (int j = 0; j < 20; j++)
    {
     MC[j] = (MA[j] - MB[j]); 
    }
    
    printf("Subtracao de todos os termos de A e B:\n"); 

    for (int k = 0; k < 20; k++)
    {
    printf("%.2f - %.2f: %.2f\n", MA[k], MB[k], MC[k]); 
    }
    
    return 0;
}