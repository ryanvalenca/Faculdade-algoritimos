#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITOS 200  // Tamanho do nosso super cofre (aguenta até 200 dígitos!)

// Função que limpa um vetor deixando ele zerado
void zerar_vetor(int v[]) {
    for (int i = 0; i < MAX_DIGITOS; i++) v[i] = 0;
}

int main() {
    int v[15];
    int soma_total[MAX_DIGITOS] = {0}; // Nosso cofre infinito para o resultado final

    // 1º LOOP: Lendo os seus 15 números normais
    for (int i = 0; i < 15; i++) {
        printf("Digite o %dº valor inteiro: ", i + 1);
        scanf("%d", &v[i]); 
    }

    // 2º LOOP: Passando por cada número
    for (int i = 0; i < 15; i++) {
        int numero_atual = v[i];
        
        // Se o número for 0 ou 1, o fatorial é 1
        if (numero_atual == 0 || numero_atual == 1) {
            soma_total[0] += 1;
            continue;
        }

        // Vetor temporário para calcular o fatorial do número atual
        int fatorial[MAX_DIGITOS] = {0};
        fatorial[0] = 1; // Fatorial começa em 1
        int tamanho_fatorial = 1;

        // Multiplicação estilo "papel e caneta" para achar o fatorial
        for (int multiplicador = 2; multiplicador <= numero_atual; multiplicador++) {
            int vai_um = 0;
            for (int j = 0; j < tamanho_fatorial; j++) {
                int produto = fatorial[j] * multiplicador + vai_um;
                fatorial[j] = produto % 10;  // Guarda o último dígito na gaveta
                vai_um = produto / 10;       // Passa o resto para o "vai um"
            }
            while (vai_um > 0) {
                fatorial[tamanho_fatorial] = vai_um % 10;
                vai_um /= 10;
                tamanho_fatorial++;
            }
        }

        // Agora somamos esse fatorial encontrado no nosso grande cofre "soma_total"
        int vai_um_soma = 0;
        for (int j = 0; j < MAX_DIGITOS; j++) {
            int soma = soma_total[j] + fatorial[j] + vai_um_soma;
            soma_total[j] = soma % 10;
            vai_um_soma = soma / 10;
        }
    }

    // 3º LOOP: Printe o resultado final (de trás para frente, igual lemos números)
    printf("\nO somatorio real e exato dos fatoriais eh: ");
    int comecou_printar = 0;
    for (int i = MAX_DIGITOS - 1; i >= 0; i--) {
        if (soma_total[i] != 0) comecou_printar = 1;
        if (comecou_printar) {
            printf("%d", soma_total[i]);
        }
    }
    if (!comecou_printar) printf("0");
    printf("\n");

    return 0;
}