#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num = 0; 
    int maior; 
    int menor;
    int primeiro = 1; 

    while (1)
    {
    printf("Digite um numero positivo inteiro(ou negativo para sair ):\n");
    scanf("%d", &num); 
    if (num < 0)
    {
    break; 
    }
    if (primeiro == 1)
    {
    maior = num; 
    menor = num;
    primeiro = 0; 
    }
    else
    {
    if (num > maior )
    {
    maior = num;
    }
    if (num < menor)
    {
    menor = num; 
    }
    }
    }
    if (primeiro == 0)
    {
    printf("Resultados finais:\n"); 
    printf("Maior numero: %d\n", maior); 
    printf("Menor numero: %d\n", menor); 
    }
    else
    {
    printf("Nenhum valor positivo foi digitado.\n"); 
    }
    return 0;
}