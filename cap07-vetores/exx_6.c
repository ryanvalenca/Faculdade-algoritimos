#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[30]; 
    float MB[30]; 

    for (int i = 0; i < 30; i++)
    {
    printf("Digite o %d valor de A:\n", i+1); 
    scanf("%f", &MA[i]); 
    }
    
    for (int i = 0; i < 30; i++)
    {
    MB[i] = (MA[i] * MA[i] *MA[i]); 
    }
    
    float pesquisa; 
    int achou=0; 

    printf("\nDigite um valor para pesquisar na Matriz B:\n");
    scanf("%f", &pesquisa);

    for (int i = 0; i < 30; i++)
    {
    if (MB[i]==pesquisa)
    {
    printf("O valor %.2f foi encontrado na posicao %d da Matriz B!\n", pesquisa, i+1); 
    achou = 1; 
    break; 
    }
    }
    
    if (achou == 0)
    {
    printf("O valor %.2f nao foi encontrado na Matriz B.\n", pesquisa);
    }

    return 0;
}