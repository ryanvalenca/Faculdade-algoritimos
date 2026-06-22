#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[5]; 
    float MB[5]; 
    float MC[5]; 
    float MD[15]; 

    for (int i = 0; i < 5; i++)
    {
    printf("Digite o %d numero de A:\n", i+1); 
    scanf("%f", &MA[i]); 
    MD[i] = MA[i]; 

    printf("Digite o %d numero de B:\n", i+1); 
    scanf("%f", &MB[i]); 
    MD[i + 5] = MB[i]; 

    printf("Digite o %d numero de C:\n", i+1); 
    scanf("%f", &MC[i]); 
    MD[i + 10] = MC[i]; 
    }
    
    printf("Matriz D:\n"); 
    for (int i = 0; i < 15; i++)
    {
    printf("%.2f\n", MD[i]); 
    }

    return 0;
}