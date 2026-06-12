#include<stdio.h>

int main(){
    int idade;
    float altura;
    char letra_favorita;
    char nome[20];

    printf("Olá Mundo!\n");
    printf("Digite seu nome: ");
    scanf("%19s", nome);
    printf("Qual a sua idade?");
    scanf("%i", &idade);
    printf("Qual a sua altura?  ");
    scanf("%f", &altura);
    printf("Qual a sua letra favorita?");
    scanf("%c", &letra_favorita);

    return 0;
}