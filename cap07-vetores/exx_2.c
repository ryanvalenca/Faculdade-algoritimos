#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[8]; 
    int MB[8]; 
    int aux; // Para a ordenação
    
    // 1. Leitura e Multiplicação (com o '&' corrigido!)
    for (int i = 0; i < 8; i++)
    {
        printf("Digite o %d numero de A aqui:\n", i+1); 
        scanf("%d", &MA[i]); // Corrigido aqui!
        MB[i] = MA[i] * 5; 
    }

    // 2. OBRIGATÓRIO: Ordenar a Matriz B em ordem crescente para a Pesquisa Binária funcionar
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (MB[i] > MB[j]) {
                aux = MB[i];
                MB[i] = MB[j];
                MB[j] = aux;
            }
        }
    }

    printf("\nMatriz B ordenada (multiplicados por 5):\n"); 
    for (int i = 0; i < 8; i++) {
        printf("%d ", MB[i]); 
    }
    printf("\n\n");

    // 3. ROTINA DE PESQUISA BINÁRIA
    int pesquisa;
    printf("Qual numero voce deseja procurar na Matriz B?\n");
    scanf("%d", &pesquisa);

    int inicio = 0;     // Começo do vetor
    int fim = 7;        // Fim do vetor (índice 7)
    int meio;
    int achou = 0;      // Variável para controlar se encontramos o número

    while (inicio <= fim) {
        meio = (inicio + fim) / 2; // Encontra o meio do vetor

        if (MB[meio] == pesquisa) {
            achou = 1; // Encontrou o número!
            break;     // Para o while imediatamente
        }
        else if (MB[meio] < pesquisa) {
            // Se o número do meio for menor que o procurado,
            // significa que o que queremos está na metade direita.
            inicio = meio + 1; 
        }
        else {
            // Se o número do meio for maior que o procurado,
            // significa que o que queremos está na metade esquerda.
            fim = meio - 1;
        }
    }

    // 4. Apresentação do resultado da pesquisa
    if (achou == 1) {
        printf("O numero %d foi ENCONTRADO na posicao %d da Matriz B!\n", pesquisa, meio + 1);
    } else {
        printf("O numero %d NAO existe na Matriz B.\n", pesquisa);
    }

    return 0;
}