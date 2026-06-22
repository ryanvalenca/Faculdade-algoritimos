#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[12]; 
    int aux; 

    for (int i = 0; i < 12; i++)
    {
    printf("Digite o %d numero de A:\n", i+1); 
    scanf("%d", &MA[i]); 
    }
    
    for (int i = 0; i < 12; i++)
    {
    for (int j = i + 1; j < 12; j++)
    {
    if (MA[i] < MA[j])
    {
    aux = MA[i];
    MA[i] = MA[j];
    MA[j] = aux;
    }
    
    }
    }
    
    printf("Numeros em ordem descrecente:\n");

    for (int k = 0; k < 12; k++)
    {
    printf("%d\n", MA[k]); 
    }
    

    return 0;
}