#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include "tipopessoa.h"

int main() {
    Pessoa p;
    printf("Digite o nome: ");
    // gets(p.nome); retirado por ser inseguro, substituído por fgets
    fgets(p.nome, sizeof(p.nome), stdin);
    // remover o '\n' final, se existir
    size_t len = strlen(p.nome);
    if (len > 0 && p.nome[len - 1] == '\n') {
         p.nome[len - 1] = '\0';
    }
    printf("Digite a idade: ");
    scanf("%d", &p.idade);
    printf("Digite a altura: ");
    scanf("%f", &p.altura);
    printf("Dados da pessoa:\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);

    
    printf("\nNome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura); 
    printf("Pressione qualquer tecla para sair...");
    getch();
    return 0;
}