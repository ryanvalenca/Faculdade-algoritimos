#include <stdio.h>
#include <stdlib.h>

int main() {

    int MA[6];
    int MB[6];
    int MC[12]; 

    for (int i = 0; i < 6; i++)
    {
    printf("Digite o %d numero par de A:\n", i+1);
    scanf("%d", &MA[i]);
    while (MA[i] % 2 != 0)
    {
    printf("Nao vale impar caba safado:\n");
    scanf("%d", &MA[i]);  
    }

    printf("Digite o %d numero impar de B:\n", i+1);
    scanf("%d", &MB[i]);
    while (MB[i] % 2 == 0)
    {
    printf("Nao vale par caba safado:\n");
    scanf("%d", &MB[i]); 
    }
    }

    
    for (int j = 0; j < 6; j++)
    {
    MC[j] = MA[j];
    MC[j+6] = MB[j]; 
    }
    

    printf("Resultados Matriz C:\n"); 

    for (int k = 0; k < 12; k++)
    {
    printf("%d\n", MC[k]); 
    }

    return 0;
}