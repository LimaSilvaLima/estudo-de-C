#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "tipopessoa.h"

int main() {
    Pessoa p;
    Pessoa parray[5]; // Array of 5 Pessoa structs
    
    for (int i = 0; i < 5; i++){
        printf("Dados da pessoa:\n\n");
        printf("Digite o nome: ");
        fgets(p.nome, sizeof(p.nome), stdin);
        size_t len = strlen(p.nome);
        if (len > 0 && p.nome[len - 1] == '\n') {
            p.nome[len - 1] = '\0';
        }
        printf("Digite a idade: ");
        scanf("%d", &p.idade);
        printf("Digite a altura: ");
        scanf("%f", &p.altura);
               
    }
    

    for (int i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s\n", parray[i].nome);
        printf("Idade: %d\n", parray[i].idade);
        printf("Altura: %.2f\n", parray[i].altura);
    }
    
   
    return 0;
}