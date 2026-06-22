#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char nome[50]; 
    int L, C, area, confi;
    int soma = 0; 

    while (1)
    {
    printf("Nome do comodo:\n"); 
    scanf("%s", nome);

    printf("Largura do comodo(Metros):\n"); 
    scanf("%d", &L); 

    printf("Comprimento do comodo(Metros):\n"); 
    scanf("%d", &C); 

    area = C * L;
    printf("Total da area: %d\n", area); 
    soma += area; 

    printf("Para encerrar o programa digite 1, caso contrario digite 2:\n"); 
    scanf("%d", &confi); 

    if (confi == 1)
    {
    break; 
    
    }
    
    }
    
    printf("Resultados finais:\n"); 
    printf("Total da area residencial acumulada: %d metros quadrados,\n", soma); 


    return 0;
}