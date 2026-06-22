#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char MA[10][50]; 
    char aux[50]; 

    for (int i = 0; i < 10; i++)
    {
    printf("\n Escreva o %d nome de A:\n", i+1);
    fgets(MA[i], 50, stdin);
    }
    
    for (int i = 0; i < 10; i++)
    {
    for (int j = i+1; j < 10; j++)
    {
    if (strcmp(MA[i], MA[j]) > 0)
    {
    strcpy(aux, MA[i]);
    strcpy(MA[i], MA[j]);
    strcpy(MA[j], aux); 
    }
    }
    }
    
    char pesquisa[50];
    int achou=0;
    int meio;
    int fim=9;
    int inicio=0;

    printf("\nEscreva o nome que deseja pesquisar:\n");
    fgets(pesquisa, 50, stdin);

    while (inicio <= fim)
    {
    meio = (inicio + fim)/2; 

    if (strcmp(MA[meio], pesquisa) == 0)
    {
    achou = 1;
    break; 
    }
    else if (strcmp(MA[meio], pesquisa) < 0)
    {
    inicio = meio + 1;
    }
    else
    {
    fim = meio - 1; 
    }
    }
    
    if (achou == 1)
    {
    printf("\nO nome %s foi encontrado na posicao %d da Matriz A!\n", pesquisa, meio+1);
    }
    else
    {
    printf("\nO nome %s nao existe na Matriz A!\n", pesquisa); 
    }


    return 0;
}