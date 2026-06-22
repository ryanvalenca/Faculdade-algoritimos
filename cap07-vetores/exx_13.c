#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[12]; 
    float MB[12]; 
    float MC[12]; 

    for (int i = 0; i < 12; i++)
    {
    printf("\nDigite o %d valor de A:\n", i+1); 
    scanf("%f", &MA[i]); 

    printf("\nDigite o %d valor de B:\n", i+1); 
    scanf("%f", &MB[i]); 
    }
    
    for (int i = 0; i < 12; i++)
    {
    MC[i] = MA[i] * MB[i]; 
    }
    

    float pesquisa; 
    int achou = 0; 

    printf("\nDigite um numero que deseja pesquisar:\n");
    scanf("%f", &pesquisa); 

    for (int i = 0; i < 12; i++)
    {
    if (MC[i] == pesquisa)
    {
    printf("\nO numero %.2f foi encontrado na posicao %d da Matriz C:\n", pesquisa, i+1);
    achou = 1; 
    break;
    }
    }


    if (achou == 0)
    {
    printf("\nO numero %.2f nao existe na Matriz C:\n", pesquisa); 
    }
    
    return 0;
}