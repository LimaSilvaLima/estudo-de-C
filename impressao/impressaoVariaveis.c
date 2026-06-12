#include <stdio.h>
#include <locale.h> // Para usar acentuação

// É uma boa prática a função main retornar um int
int main (){
    // Configura o programa para usar a codificação de caracteres do sistema (permite acentos)
    setlocale(LC_ALL, "");

    char nome_da_variavel1 = 'A';
    int nome_da_variavel3 = 10;
    long int nome_da_variavel4 = 20;
    unsigned short int nome_da_variavel6 = 30;
    unsigned int nome_da_variavel2 = 40;
    float nome_da_variavel5 = 50.5;
    // A variável nome_da_variavel7 não estava sendo usada no printf.
    // double nome_da_variavel7 = 60.6;
    long double nome_da_variavel8 = 3.9e-23L;
    // A variável maximo não estava sendo usada.
    // const int maximo = 100;
    
    printf("Imprimindo o valor das variáveis:\n");
    printf("char: %c\n", nome_da_variavel1);
    printf("int: %d\n", nome_da_variavel3);
    printf("long int: %ld\n", nome_da_variavel4);      // CORREÇÃO: %d -> %ld
    printf("unsigned int: %u\n", nome_da_variavel2);   // CORREÇÃO: %d -> %u
    printf("unsigned short int: %hu\n", nome_da_variavel6); // CORREÇÃO: %f -> %hu
    printf("float: %.1f\n", nome_da_variavel5);        // %.1f para mostrar uma casa decimal
    printf("long double: %Le\n", nome_da_variavel8);   // CORREÇÃO: %e -> %Le

    return 0; // Retorna 0 para indicar que o programa executou com sucesso
}