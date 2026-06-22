#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int tab; 
    int MA[10]; 

    printf("Digite um Numero para gerar a tabuada:\n"); 
    scanf("%d", &tab); 

    for (int i = 0; i < 10; i++)
    {
    MA[i] = tab * (i + 1); 
    }
    

    printf("Tabuada gerada:\n"); 

    for (int i = 0; i < 10; i++)
    {
    printf("%d x %d: %d\n", tab, i+1, MA[i]); 
    }


    return 0;
}