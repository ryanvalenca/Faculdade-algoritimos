#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[4];
    int MB[4];
    int MC[4];
    int MD[4];
    int ME[4][4];

    for (int i = 0; i < 4; i++)
    {
    printf("Digite o %d valor de A:", i+1);
    scanf("%d", &MA[i]);

    printf("Digite o %d valor de B:", i+1);
    scanf("%d", &MB[i]);

    printf("Digite o %d valor de C:", i+1);
    scanf("%d", &MC[i]);

    printf("Digite o %d valor de D:", i+1);
    scanf("%d", &MD[i]);
    }
    

    for (int j = 0; j < 4; j++)
    {
    ME[0][j] = MA[j] * 2; 
    ME[1][j] = MB[j] * 3; 
    ME[2][j] = MC[j] * 4;
    }

    
    int fatorial;

    for (int i = 0; i < 4; i++)
    {
    fatorial = 1; 
    for (int j = MD[i]; j > 1; j--)
    {
    fatorial *= j; 
    }
    ME[3][i] = fatorial; 
    }
    
    for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 4; j++)
    {
    printf("%d ", ME[i][j]);
    }
    printf("\n");
    }
    
    return 0;
}