#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int MA[10]; 
    float MB[10]; 

    for (int i = 0; i < 10; i++)
    {
    printf("Digite o %d valor inteiro de A:\n", i+1);
    scanf("%d", &MA[i]);  
    MB[i] = MA[i] / 2.0; 
    }
    
    printf("Matriz A:\n"); 
   for (int i = 0; i < 10; i++)
   {
   printf("%d\n", MA[i]); 
   }
   

 printf("Matriz B:\n"); 
   for (int j = 0; j < 10; j++)
   {
   printf("%.1f\n", MB[j]); 
   }
   
    return 0;
}