#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char A[10][50]; 


    for (int i = 0; i < 10; i++)
    {
    printf("Digite aqui um nome:\n");
    scanf("%s", A[i]);
    }

    printf("Todos os nomes lidos:\n");

    for (int j = 0; j < 10; j++)
    {
    printf("%s\n", A[j]); 
    }
    
    return 0;
}