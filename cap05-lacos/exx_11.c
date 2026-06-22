#include <stdio.h>
#include <stdlib.h>

int main() {
    // Usamos 'unsigned long long' para aguentar os 18 quintilhões
    unsigned long long int graos_na_casa = 1; 
    unsigned long long int soma_total = 0;

    // O 'for' vai contar da casa 1 até a casa 64
    for (int casa = 1; casa <= 64; casa++) {
        
        // 1. Joga os grãos da casa atual no liquidificador/cofre
        soma_total += graos_na_casa;
        
        // 2. Dobra a quantidade de grãos para a próxima casa
        graos_na_casa *= 2; 
    }

    // O %llu serve para printar variáveis do tipo 'unsigned long long'
    printf("O total de graos de trigo no tabuleiro eh: %llu\n", soma_total);

    return 0;
}