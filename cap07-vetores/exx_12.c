#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[15]; 
    float MB[15]; 
    float MC[15]; 
    float MD[15];
    float aux; 

    for (int i = 0; i < 15; i++)
    {
    printf("\nDigite o %d valor de A:\n", i+1); 
    scanf("%f", &MA[i]); 


    printf("\nDigite o %d valor de B:\n", i+1); 
    scanf("%f", &MB[i]); 


    printf("\nDigite o %d valor de C:\n", i+1); 
    scanf("%f", &MC[i]); 

    }
    
    for (int i = 0; i < 15; i++)
    {
    MD[i] = (MA[i] + MB[i] + MC[i]); 
    MD[i] = MD[i] * MD[i] * MD[i]; 
    }
    
    for (int i = 0; i < 15; i++)
    {
    for (int j = i+1; j < 15; j++)
    {
    if (MD[i] > MD[j])
    {
    aux = MD[i]; 
    MD[i] = MD[j]; 
    MD[j] = aux; 
    }
    }
    }

    printf("\nMatriz D:\n"); 

    for (int i = 0; i < 15; i++)
    {
    printf("%.1f\n", MD[i]); 
    }
    return 0;
}