#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[12]; 
    float MB[12]; 

    for (int i = 0; i < 12; i++)
    {
    printf("Digite o %d valor de A:\n", i+1);
    scanf("%d", &MA[i]); 
    }
    
    for (int i = 0; i < 12; i++)
    {
    if (MA[i] % 2 != 0)
    {
    MB[i] = MA[i] * 2; 
    }
    else
    {
    MB[i] = MA[i]; 
    }
    
    }
    
    printf("Matriz B:\n"); 
    for (int j = 0; j < 12; j++)
    {
    printf("%.1f\n", MB[j]); 
    }
    


    return 0;
}