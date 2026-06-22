#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char MA[20][50]; 
    char MB[30][50]; 
    char MC[50][50]; 

    for (int i = 0; i < 20; i++)
    {
    printf("Digite o %d nome A:\n", i + 1); 
    scanf("%s", MA[i]);
    strcpy(MC[i], MA[i]); 
    }
    
    for (int j = 0; j < 30; j++)
    {
    printf("Digite o %d nome de B:\n", j + 1);  
    scanf("%s", MB[j]); 
    strcpy(MC[j + 20], MB[j]); 
    }
    

    printf("Todos os nomes:\n");

    for (int k = 0; k < 50; k++)
    {
    printf("%s\n", MC[k]); 
    }

    return 0;
}