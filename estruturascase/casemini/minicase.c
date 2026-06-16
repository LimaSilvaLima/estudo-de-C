#include <stdio.h>
#include <windows.h>

int main(){
   SetConsoleOutputCP(CP_UTF8);
   int opcao;

   do {
       printf("Digite 1 ou 2: ");
       if (scanf("%d", &opcao) != 1) {
           printf("\nErro: Por favor, digite um numero inteiro.\n");
           while (getchar() != '\n'); // Limpa o buffer para evitar loop infinito
           opcao = 0; // Define um valor que mantém o loop ativo
           continue;
       }

       switch (opcao) {
           case 1:
               printf("Voce escolheu a opção 1\n");
               break;
           case 2:
               printf("Voce escolheu a opção 2\n");
               break;
           default:
               printf("\nOpção inválida! Tente novamente.\n");
       }
   } while (opcao != 1 && opcao != 2);

   return 0;
}