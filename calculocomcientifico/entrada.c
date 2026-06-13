#include<stdio.h>
#include<windows.h> // Necessário para SetConsoleOutputCP

int main(){
    int idade;
    float altura;
    char letra_favorita;
    char nome[20];
    
    SetConsoleOutputCP(CP_UTF8); // Define a codificação de saída do console para UTF-8

    printf("Olá Mundo!\n");
    printf("Digite seu nome: ");
    scanf("%19s", nome);
    printf("Qual a sua idade?");
    scanf("%i", &idade);
    printf("Qual a sua altura?  ");
    scanf("%f", &altura);
    printf("Qual a sua letra favorita?");
    scanf(" %c", &letra_favorita);

    printf("A sua idade é: %i\n"
           "A sua altura é: %.2f\n"
           "A sua letra favorita é: %c\n", idade, altura, letra_favorita);

    return 0;
}