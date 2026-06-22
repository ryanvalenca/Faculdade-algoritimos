#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int fah, cel;

    for (cel = 10; cel <= 100; cel += 10)
    {
    printf("Graus celsius: %d\n", cel);
    fah = (cel * 9/5) + 32; 
    printf("Graus fahrenheit: %d\n", fah);
    }
    
    return 0;
}