#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // Precisamos apenas das 4 variáveis que o usuário vai digitar
    int A, B, C, D; 

    printf("digite o valor de A:\n");
    scanf("%d", &A); 

    printf("digite o valor de B:\n");
    scanf("%d", &B); 

    printf("digite o valor de C:\n");
    scanf("%d", &C); 

    printf("digite o valor de D:\n");
    scanf("%d", &D); 

    // --- BLOCO DAS ADIÇÕES ---
    // O computador resolve a conta (ex: A + B) e joga direto no último %d
    printf("\n=== RESULTADOS DAS ADICOES ===\n");
    printf("%d + %d = %d\n", A, B, A + B);
    printf("%d + %d = %d\n", A, C, A + C);
    printf("%d + %d = %d\n", A, D, A + D);
    printf("%d + %d = %d\n", B, C, B + C);
    printf("%d + %d = %d\n", B, D, B + D);
    printf("%d + %d = %d\n", C, D, C + D);

    // --- BLOCO DAS MULTIPLICAÇÕES ---
    // Aqui é a mesma coisa, mas o computador resolve a multiplicação (A * B)
    printf("\n=== RESULTADOS DAS MULTIPLICACOES ===\n");
    printf("%d * %d = %d\n", A, B, A * B);
    printf("%d * %d = %d\n", A, C, A * C);
    printf("%d * %d = %d\n", A, D, A * D);
    printf("%d * %d = %d\n", B, C, B * C);
    printf("%d * %d = %d\n", B, D, B * D);
    printf("%d * %d = %d\n", C, D, C * D);

    return 0;
}