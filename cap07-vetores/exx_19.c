#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[10];

    for (int i = 0; i < 10; i++)
    {
    printf("Digite o %d valor de A:\n", i+1);
    scanf("%f", &MA[i]);
    }
    
    int achou = 0; 
    float pesquisa; 

    printf("Digite o numero que deseja pesquisar:\n");
    scanf("%f", &pesquisa);
    
    for (int i = 0; i < 10; i++)
    {
    if (MA[i] == pesquisa)
    {
    printf("O numero %.2f foi encontrado na posicao %d da Matriz A!\n", pesquisa, i+1);
    achou = 1; 
    break; 
    }
    }
    
    if (achou == 0)
    {
    printf("O numero %.2f nao existe na Matriz A!\n", pesquisa);
    }


    return 0;
}