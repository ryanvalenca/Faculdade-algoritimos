#include <stdio.h>
#include <stdlib.h>

int main() {

    unsigned long long int fatorial; 

    // O LAÇO PRINCIPAL COMEÇA AQUI
    for (int numero = 1; numero <= 10; numero++)
    {
        // -----------------------------------------------------------------
        // SE FOR O NÚMERO 5: (5 % 2 != 0) é VERDADEIRO. Ele ENTRA no IF.
        // SE FOR O NÚMERO 6: (6 % 2 != 0) é FALSO. Ele PULA para a linha 32.
        // -----------------------------------------------------------------
        if (numero % 2 != 0)
        {
            // CAMINHO DO ÍMPAR (Ex: número 5 entra aqui)
            
            fatorial = 1; // <--- AQUI APAGA O RESULTADO DO 3 E RESETADO PRA 1

            // Esse bloco roda 5 vezes seguidas para calcular (5 * 4 * 3 * 2 * 1)
            for (int i = numero; i >= 1; i--)
            {
                fatorial = fatorial * i; 
            }
            
            // Mostra o resultado do 5 na tela
            printf("O fatorial do numero impar %d eh: %llu\n", numero, fatorial);
            
        } // <--- FIM DO BLOCO DO IF
        
        // CAMINHO DO PAR: O número 6 salta direto para cá!
        // Ele não leu o "fatorial = 1", não leu o "for" de dentro e não leu o "printf".
        // O computador apenas bate no fim do laço e volta para o topo para virar 7.
        
    } // <--- FIM DO LAÇO PRINCIPAL

    return 0;
}