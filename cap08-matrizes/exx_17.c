#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[4][5];
    int MB[4];
    int MC[5];
    int somalinha, somacoluna, total=0; 

    for (int i = 0; i < 4; i++)
    {
    somalinha=0;
    for (int j = 0; j < 5; j++)
    {
    printf("Digite o valor para MA[%d][%d]:", i, j);
    scanf("%d", &MA[i][j]);
    somalinha += MA[i][j]; 
    }
    MB[i] = somalinha; 
    }
    
    for (int j = 0; j < 5; j++)
    {
    somacoluna = 0;
    for (int i = 0; i < 4; i++)
    {
    somacoluna += MA[i][j];
    }
    MC[j] = somacoluna; 
    }
    
    for (int i = 0; i < 4; i++)
    {
    total += MB[i];
    }
    

    for (int i = 0; i < 5; i++)
    {
    total += MC[i]; 
    }


    printf("Somatorio da Matriz B e C: %d", total);


    return 0;
}