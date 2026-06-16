#include <stdio.h>
#include <windows.h>

int main(){
   SetConsoleOutputCP(CP_UTF8);
    int opcao;
    printf("Digite 1 ou 2:");
    scanf("%d", &opcao);    
    switch (opcao){
        case 1 :
        printf("Voce escolheu a opção 1");
        break;
        case 2 :
        printf("Voce escolheu a opção 2");
            break;
        default:
        printf("\n Voce não digitou uma Opção inválida");
    }
}