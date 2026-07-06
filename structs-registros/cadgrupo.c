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
        fgets(parray[i].nome, sizeof(parray[i].nome), stdin);
        size_t len = strlen(parray[i].nome);
        if (len > 0 && parray[i].nome[len - 1] == '\n') {
            parray[i].nome[len - 1] = '\0';
        }
        printf("Digite a idade: ");
        scanf("%d", &parray[i].idade);
        printf("Digite a altura: ");
        scanf("%f", &parray[i].altura);
        //scanf("%f", &p.altura);
         while (getchar() != '\n'); 
               
    }
    

    for (int i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s\n", parray[i].nome);
        printf("Idade: %d\n", parray[i].idade);
        printf("Altura: %.2f\n", parray[i].altura);
    }
    
   
    return 0;
}