#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[10]; 
    int MC[10][3]; 
    int fatorial; 

    for (int i = 0; i < 10; i++)
    {
    printf("Digite o %d valor de A:\n", i+1);
    scanf("%d", &MA[i]);  
    }
    
    for (int i = 0; i < 10; i++)
    {
    MC[i][0] = MA[i] + 5; 
    }
    
    for (int i = 0; i < 10; i++)
    {
    fatorial = 1; 
    for (int j = MA[i]; j > 1; j--)
    {
    fatorial *= j; 
    }
    MC[i][1] = fatorial; 
    }
    
    for (int i = 0; i < 10; i++)
    {
    MC[i][2] = MA[i] * MA[i]; 
    }
    
    for (int i = 0; i < 10; i++)
    {
    for (int j = 0; j < 3; j++)
    {
    printf("%d ", MC[i][j]); 
    }
    printf("\n"); 
    }
    return 0;
}