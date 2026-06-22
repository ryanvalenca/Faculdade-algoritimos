#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[20]; 
    float MB[20]; 

    for (int i = 0; i < 20; i++)
    {
    printf("Digite o %d numero:\n", i + 1); 
    scanf("%f", &MA[i]); 
    }
    
    for (int j = 0; j < 20; j++)
    {
    MB[19 - j] = MA[j]; 
    }
    printf("\n MAtriz A \n:"); 

    for (int k = 0; k < 20; k++)
    {
    printf("%.2f\n", MA[k]); 
    }


    printf("\n MAtriz B \n:"); 

    for (int k = 0; k < 20; k++)
    {
    printf("%.2f\n", MB[k]); 
    }

    return 0;
}