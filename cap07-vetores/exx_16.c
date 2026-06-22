#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char MA[10][50]; 
    char MB[10][50]; 
    char aux[50]; 

    for (int i = 0; i < 10; i++)
    {
    printf("\nEscreva o %d nome de A:\n", i+1);
    fgets(MA[i], 50, stdin);
    }
    
    for (int i = 0; i < 10; i++)
    {
    strcpy(MB[i], MA[9-i]); 
    }
    
    for (int i = 0; i < 10; i++)
    {
    for (int j = i+1; j < 10; j++)
    {
    if (strcmp(MB[i], MB[j]) > 0)
    {
    strcpy(aux, MB[i]);
    strcpy(MB[i], MB[j]);
    strcpy(MB[j], aux); 
    }
    }
    }
    
    printf("\nMatriz B ordenada de forma ascendente\n");
    for (int i = 0; i < 10; i++)
    {
    printf("%s", MB[i]);
    }

    return 0;
}