#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[15];
    int MB[15];
    int MC[30];

    for (int i = 0; i < 15; i++)
    {
    printf("Digite o %d valor de A:\n", i + 1);
    scanf("%d", &MA[i]);

    printf("Digite o %d valor de B:\n", i + 1);
    scanf("%d", &MB[i]);
    }
    
    for (int j = 0; j < 15; j++)
    {
    MC[j] = MA[j]; 
    }
    
    for (int k = 0; k < 15; k++)
    {
    MC[k + 15] = MB[k]; 
    }

    printf("Todos os resultados:\n"); 

    for (int l = 0; l < 30; l++)
    {
    printf("%d ", MC[l]); 
    }
    

    return 0;
}