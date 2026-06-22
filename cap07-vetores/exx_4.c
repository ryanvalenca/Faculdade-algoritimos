#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float MA[12]; 
    float MB[12];
    float MC[12];  
    float aux; 

    for (int i = 0; i < 12; i++)
    {
    printf("Digite o %d valor de A aqui:\n", i+1); 
    scanf("%f", &MA[i]); 
    
    printf("Digite o %d valor de B aqui:\n", i+1); 
    scanf("%f", &MB[i]); 
    }
    
    for (int i = 0; i < 12; i++)
    {
    for (int j = i + 1; j < 12; j++)
    {
    if (MA[i] > MA[j])
    {
    aux = MA[i];
    MA[i] = MA[j];
    MA[j] = aux; 
    }
    if (MB[i] > MB[j])
    {
    aux = MB[i]; 
    MB[i] = MB[j];
    MB[j] = aux; 
    }
    }
    }
    
    for (int k = 0; k < 12; k++)
    {
    MC[k] = (MB[k] + MA[k]); 
    }
    
    for (int l = 0; l < 12; l++)
    {
    for (int m = l+1; m < 12; m++)
    {
    if (MC[l] < MC[m])
    {
    aux = MC[m]; 
    MC[m] = MC[l]; 
    MC[l] = aux; 
    }
    
    }
    
    }
    
    printf("Ordem descrecente da Matriz C:\n");

    for (int n = 0; n < 12; n++)
    {
    printf("%.1f\n", MC[n]); 
    }
    

    return 0;
}