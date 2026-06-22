#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[10]; 
    int MB[10]; 
    int MC[20]; 

    for (int i = 0; i < 10; i++)
    {
    printf("Digite o %d numero divisivel por 2 e 3\n", i+1); 
    scanf("%d", &MA[i]); 
    while (MA[i] % 2 != 0 || MA[i] % 3 != 0)
    {
    printf("So pode divisivel por 2 e 3 porra.\n"); 
    scanf("%d", &MA[i]); 
    }
    
    printf("Digite o %d numero divisivel por 5\n", i+1); 
    scanf("%d", &MB[i]); 
    while (MB[i] % 5 != 0)
    {
    printf("So pode divisivel por 5 porra.\n"); 
    scanf("%d", &MB[i]);

    }
    }

    for (int j = 0; j < 10; j++)
    {
    MC[j] = MA[j]; 
    MC[j+10] = MB[j]; 
    }
    

    printf("Resultados Matriz C:\n"); 

    for (int k = 0; k < 20; k++)
    {
    printf("%d\n", MC[k]); 
    }


    return 0;
}