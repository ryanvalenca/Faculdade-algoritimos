#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[10][7];
    float par=0, impar=0; 

    for (int i = 0; i < 10; i++)
    {
    for (int j = 0; j < 7; j++)
    {
    printf("Digite o valor para MA[%d][%d]:", i, j);
    scanf("%f", &MA[i][j]);
    }
    }
    
    
    for (int i = 0; i < 10; i++)
    {
    for (int j = 0; j < 7; j++)
    {
    if ((int)MA[i][j] % 2 == 0)
    {
    par++;
    }
    else
    {
    impar++; 
    }
    }
    }
    
    printf("Total de numeros pares: %.1f\n", par);
    printf("Total de numeros impares: %.1f\n", impar);

    printf("Porcentagem de par: %.2f\n", (par/70.0) * 100);
    printf("Porcentagem de impar: %.2f\n", (impar/70.0) * 100);

    return 0;
}