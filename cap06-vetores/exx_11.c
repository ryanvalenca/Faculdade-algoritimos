#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[10]; 
    int MB[10]; 

    for (int i = 0; i < 10; i++)
    {
    printf("Digite o %d numero de A:\n", i+1); 
    scanf("%d", &MA[i]); 
    MB[i] = -MA[i]; 
    }
    
    printf("Matriz B:\n"); 

    for (int i = 0; i < 10; i++)
    {
    printf("%d\n", MB[i]); 
    }

    return 0;
}