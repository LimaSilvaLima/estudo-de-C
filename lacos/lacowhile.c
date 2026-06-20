#include<stdio.h>
#include<windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int quantidade = 0;
    int entrada = 1;

    while (entrada != 0) {
        printf("Digite a quantidade de impressões: ");
        if (scanf("%d", &quantidade) != 1) {
            // Limpa o buffer de entrada caso o usuário digite texto (como "sair")
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Entrada inválida! Digite um número inteiro.\n\n");
            continue;
        }

        // Loop controlado usando 'j' para evitar sombreamento e sem incremento duplo
        for (int j = 0; j < quantidade; j++) {
            printf("O valor de i nesta linha é: %d\n", j);
        }

        printf("\nVocê gostaria de sair do programa?\n"
               "0 - Sair\n"
               "1 - Continuar: ");
        if (scanf("%d", &entrada) != 1) {
            // Limpa o buffer de entrada caso o usuário digite texto
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            entrada = 1; // Define para continuar caso ocorra erro
        }
        printf("\n");
    }
    return 0;
}

