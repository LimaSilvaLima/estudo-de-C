#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void floatInt() {
    float b = 3.9f;
    int i = (int)b;
    printf("valor de i: %d\n", i);
    printf("valor de b: %.2f\n", b);
    printf("converter durante a impressão: %i\n", (int)b);
}  

void intFloat() {
    int i = 3;
        printf("converter durante a impressão de int para float: %.3f\n", (float)i);
}

int main() {
    setlocale(LC_ALL, ""); 
    floatInt();
    intFloat();
    
    return 0; // Boa prática: retornar 0 para indicar sucesso.
}