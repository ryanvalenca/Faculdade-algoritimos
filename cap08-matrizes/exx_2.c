#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[7]; 
    int MB[7];
    int MC[7][2]; 

    for (int i = 0; i < 7; i++)
    {
    printf("Digite o %d valor de A:\n", i+1);
    scanf("%d", &MA[i]);

    printf("Digite o %d valor de B:\n", i+1);
    scanf("%d", &MB[i]);
    }
    

    for (int i = 0; i < 7; i++)
    {
    MC[i][0] = MA[i];
    MC[i][1] = MB[i];
    }
    

    for (int i = 0; i < 7; i++)
    {
    for (int j = 0; j < 2; j++)
    {
    printf("%d ", MC[i][j]); 
    }
    printf("\n"); 
    }

    return 0;
}