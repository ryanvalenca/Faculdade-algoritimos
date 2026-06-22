#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[15];
    int aux;

    for (int i = 0; i < 15; i++)
    {
    printf("\nDigite o %d valor de A:\n", i+1); 
    scanf("%d", &MA[i]); 
    }
    
    for (int i = 0; i < 15; i++)
    {
    for (int j = i+1; j < 15; j++)
    {
    if (MA[i] > MA[j])
    {
    aux = MA[i]; 
    MA[i] = MA[j]; 
    MA[j] = aux; 
    }
    }
    }
    
    int pesquisa; 
    int meio; 
    int inicio=0; 
    int fim=14; 
    int achou=0; 

    printf("\nEscolha um numero para pesquisar:\n"); 
    scanf("%d", &pesquisa);

    while (inicio <= fim)
    {
    meio = (inicio + fim)/2; 

    if (MA[meio] == pesquisa)
    {
    achou = 1; 
    break; 
    }
    else if (MA[meio] < pesquisa)
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
    printf("\nO numero %d foi encontrado na posicao %d da Matriz A:\n", pesquisa, meio+1); 
    }
    else
    {
    printf("\nO numero pesquisado nao existe\n"); 
    }


    return 0;
}