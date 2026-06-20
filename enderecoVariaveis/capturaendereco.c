#include<stdio.h>
#include<locale.h>
#include <string.h> // Biblioteca necessária para manipulação de strings

// É uma boa prática a função main retornar um int
int main() {
    setlocale(LC_ALL, "");
    int idade;
    float altura;
    char letra;  //[10]; // Array de char para armazenar a letra e o caractere nulo

    printf("Qual a sua idade? \n");
    scanf("%d", &idade);

    printf("Qual a sua altura? \n");
    scanf("%f", &altura);

    printf("Qual a sua letra favorita? ");
    // O espaço antes de "%c" instrui o scanf a ignorar quaisquer
    // caracteres de espaço em branco (como o 'Enter' da leitura anterior)
    // O '&' é crucial para passar o endereço da variável para o scanf.
    scanf(" %c", &letra);

    printf("\n--- Dados capturados ---\n");
    printf("Idade: %d\nAltura: %.2f\nLetra: %c\n", idade, altura, letra);

    return 0;
}