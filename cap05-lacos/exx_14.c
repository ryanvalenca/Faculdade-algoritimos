#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float valor; 
    float soma = 0; 
    int contador = 0; // Esse é o nosso placar! Ele conta quantos números foram lidos
    
    printf("Digite um numero (ou um negativo para sair):\n"); 
    scanf("%f", &valor); 
    
    // O while garante que só entra no bloco se o número for positivo
    while (valor >= 0) {
        soma += valor;     // Soma o valor válido
        contador++;        // Soma +1 no placar de números lidos (mesmo que contador = contador + 1)
        
        printf("Digite um numero (ou um negativo para sair):\n"); 
        scanf("%f", &valor); // Pede o próximo número
    }
    
    // Apresenta o total de valores lidos
    printf("\nTotal de valores positivos lidos: %d\n", contador);
    printf("Somatorio: %.2f\n", soma); 
    
    // Proteção: só calcula a média se o usuário tiver digitado pelo menos um número positivo
    if (contador > 0) {
        printf("Media final: %.2f\n", soma / contador);
    } else {
        printf("Media final: 0.00 (Nenhum valor positivo foi digitado)\n");
    }

    return 0;
}