#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int x, y, maior;
    printf("Digite dois numeros inteiros: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Erro: Por favor, insira numeros inteiros validos.\n");
        return 1;
    }
    maior = (x > y) ? x : y;
    printf("O maior numero é: %d\n", maior);
    return 0;
}
