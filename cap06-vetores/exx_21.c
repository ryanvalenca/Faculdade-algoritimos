#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[12]; 
    int MB[12]; 
    int MC[24]; 

    for (int i = 0; i < 12; i++)
    {
    printf("Digite o %d valor de A divisivel por 2 ou 3:\n", i+1); 
    scanf("%d", &MA[i]); 
    while (MA[i] % 2 != 0 && MA[i] % 3 != 0)
    {
    printf("Digite um numero divisivel APENAS por 2 ou 3:\n"); 
    scanf("%d", &MA[i]); 
    }


    printf("Digite o %d valor de B que nao seja multiplo de 5:\n", i+1); 
    scanf("%d", &MB[i]); 
    while (MB[i] % 5 == 0)
    {
    printf("Digite um numero que nao seja multiplo de 5:\n"); 
    scanf("%d", &MB[i]); 
    }

    }
    

    for (int j = 0; j < 12; j++)
    {
    MC[j] = MA[j];
    MC[j+12] = MB[j]; 
    }
    

    printf("Resultados Matriz C:\n"); 

    for (int k = 0; k < 24; k++)
    {
    printf("%d\n", MC[k]); 
    }
    
    return 0;
}