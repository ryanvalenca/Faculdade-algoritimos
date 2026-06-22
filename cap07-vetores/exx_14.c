#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[15]; 
    int MB[15];
    int MC[15]; 
    int MD[15];
    int aux;

    for (int i = 0; i < 15; i++)
    {
    printf("\nDigite o %d valor de A:\n", i+1);
    scanf("%d", &MA[i]); 

    printf("\nDigite o %d valor de B:\n", i+1);
    scanf("%d", &MB[i]); 

    printf("\nDigite o %d valor de C:\n", i+1);
    scanf("%d", &MC[i]); 
    }
    
    for (int i = 0; i < 15; i++)
    {
    MD[i] = MA[i] + MB[i] + MC[i]; 
    }
    
    for (int i = 0; i < 15; i++)
    {
    for (int j = i+1; j < 15; j++)
    {
    if (MD[i] > MD[j])
    {
    aux = MD[i]; 
    MD[i] = MD[j]; 
    MD[j] = aux;  
    }
    }
    }
    

    int pesquisa; 
    int meio; 
    int fim=14; 
    int inicio=0; 
    int achou=0; 

    printf("\nQual numero deseja pesquisar:\n"); 
    scanf("%d", &pesquisa); 

    while (inicio <= fim)
    {
    meio = (inicio + fim)/2; 

    if (MD[meio] == pesquisa)
    {
    achou=1;
    break;
    }
    else if (MD[meio] < pesquisa)
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
    printf("\nO numero %d foi encontrado na posicao %d:\n", pesquisa, meio+1);
    }
    else
    {
    printf("\nO numero pesquisado nao existe\n"); 
    }
    
    return 0;
}