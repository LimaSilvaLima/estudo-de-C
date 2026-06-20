#include<stdio.h>
#include<windows.h>

enum DiasDaSemana {
    Domingo = 0,
    Segunda = 1,
    Terca = 2,
    Quarta = 3,
    Quinta = 4,
    Sexta = 5,
    Sabado = 6
};

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    enum DiasDaSemana d = -1; // Inicializa com valor inválido
    int entrada;

    do  {
        printf("Digite um número de 0 a 6 para escolher um dia da semana: ");
        if (scanf("%d", &entrada) != 1) {
            printf("\nErro: Por favor, digite um número inteiro.\n");
            limparBuffer();
            d = -1; // Garante que o loop continue
            continue;
        }
        d = (enum DiasDaSemana)entrada;

        switch(d) {
            case Domingo:
                printf("Domingo\n");
                break;
            case Segunda:
                printf("Segunda-feira\n");
                break;
            case Terca:
                printf("Terça-feira\n");
                break;
            case Quarta:
                printf("Quarta-feira\n");
                break;
            case Quinta:
                printf("Quinta-feira\n");
                break;
            case Sexta:
                printf("Sexta-feira\n");
                break;
            case Sabado:
                printf("Sábado\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }

    }while (d < 0 || d > 6);
    
    return 0;
}
