#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int MA[6]; 
    int MB[6]; 
    int MC[6]; 
    int MD[6]; 
    
    int c = 0; // Controlador da posição atual da Matriz C
    int d = 0; // Controlador da posição atual da Matriz D

    // 1. Leitura das matrizes A e B
    for (int i = 0; i < 6; i++)
    {
        printf("Digite o %d valor de A:\n", i+1);
        scanf("%d", &MA[i]); 

        printf("Digite o %d valor de B:\n", i+1);
        scanf("%d", &MB[i]); 
    }
    
    // 2. Separando os elementos de MA e MB para MC e MD
    for (int i = 0; i < 6; i++)
    {
        // Se o índice i for par, vai para a Matriz D
        if (i % 2 == 0)
        {
            MD[d] = MA[i]; // Guarda o elemento par de A na posição 'd'
            d++;           // Passa para a próxima gaveta de D
            
            MD[d] = MB[i]; // Guarda o elemento par de B na posição 'd'
            d++;           // Passa para a próxima gaveta de D
        }
        // Se o índice i for ímpar, vai para a Matriz C
        else
        {
            MC[c] = MA[i]; // Guarda o elemento ímpar de A na posição 'c'
            c++;           // Passa para a próxima gaveta de C
            
            MC[c] = MB[i]; // Guarda o elemento ímpar de B na posição 'c'
            c++;           // Passa para a próxima gaveta de C
        }
    }
    
    // 3. Exibição dos resultados
    printf("\nMatriz C (Indices Impares de A e B):\n"); 
    for (int j = 0; j < 6; j++)
    {
        printf("%d\n", MC[j]);
    }

    printf("\nMatriz D (Indices Pares de A e B):\n"); 
    for (int j = 0; j < 6; j++)
    {
        printf("%d\n", MD[j]);
    }

    return 0;
}