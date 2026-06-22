#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    

    char MA[10][50];
    char MB[5][50];
    char MC[15][50];
    char aux[50];

    for (int i = 0; i < 10; i++)
    {
    printf("Escreva o %d nome de A:\n", i+1);
    fgets(MA[i], 50, stdin);
    }
    
    
    for (int i = 0; i < 5; i++)
    {
    printf("Escreva o %d nome de B:\n", i+1);
    fgets(MB[i], 50, stdin);
    }

    for (int i = 0; i < 10; i++)
    {
    strcpy(MC[i], MA[i]);
    }

    for (int i = 0; i < 5; i++)
    {
    strcpy(MC[i+10], MB[i]);
    }


    
    for (int i = 0; i < 15; i++)
    {
    for (int j = i+1; j < 15; j++)
    {
    if (strcmp(MC[i], MC[j]) < 0)
    {
    strcpy(aux, MC[i]);
    strcpy(MC[i], MC[j]);
    strcpy(MC[j], aux);
    }
    }
    }
    
    printf("\n\nMatriz C:\n\n");

    for (int i = 0; i < 15; i++)
    {
    printf("%s\n", MC[i]);
    }


    return 0;
}