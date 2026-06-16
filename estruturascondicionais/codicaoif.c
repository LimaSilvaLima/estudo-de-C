#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }

    return 0;
}