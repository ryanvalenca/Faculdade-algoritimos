#include <stdio.h>
#include <stdlib.h>

int main() {

    int num; 

    printf("Escolha um numero pra imprimir a tabuada correspondente:\n");
    scanf("%d", &num); 


    for (int i = 0; i <= 10; i++)
    {
    int multi; 
    multi = num * i; 
    printf("%d x %d: %d\n", num, i, multi); 
    }
    
    return 0;
}