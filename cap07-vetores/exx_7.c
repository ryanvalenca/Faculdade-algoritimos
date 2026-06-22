#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[20]; 
    int MB[20]; 
    int aux; 

    for (int i = 0; i < 20; i++)
    {
    printf("Digite o %d valor de A:\n", i+1);
    scanf("%d", &MA[i]); 
    MB[i] = (MA[i] + 2); 
    }
    
    for (int i = 0; i < 20; i++)
    {
    for (int j = i+1; j < 20; j++)
    {
    if (MB[i] > MB[j])
    {
    aux = MB[i]; 
    MB[i] = MB[j]; 
    MB[j] = aux; 
    }
    }
    }
    

    int pesquisa, meio, inicio=0, fim=19, achou=0; 
    

    printf("Qual numero deseja pesquisar na Matriz B:\n"); 
    scanf("%d", &pesquisa); 

    while (inicio <= fim)
    {
    meio = (inicio + fim)/2; 

    if (MB[meio] == pesquisa)
    {
    achou = 1; 
    break; 
    }
    
    else if (MB[meio] < pesquisa)
    {
    inicio = meio + 1; 
    }
    else
    {
    inicio = meio - 1; 
    }
    
    }
    
    if (achou == 1)
    {
    printf("\nO numero %d foi encontrado na posicao %d da Matriz B\n", pesquisa, meio+1);
    }
    else
    {
    printf("\nO numero %d nao existe na Matriz B\n", pesquisa);
    }
    
    return 0;
}