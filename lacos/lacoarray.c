#include <stdio.h>
#include <windows.h> // Necessário para SetConsoleOutputCP

#define QT 5

int main() {
    // Configura o console do Windows para exibir UTF-8 corretamente
    SetConsoleOutputCP(CP_UTF8);
    
    float array[QT];
    float media = 0;
    float soma = 0;

    for (int i = 0; i < QT; i++) {
        // Solicita o valor ao usuário primeiro
        printf("Digite o valor para a posição %d: ", i + 1);
        scanf("%f", &array[i]);
        
        // Agora que foi lido, você pode somar com segurança
        soma += array[i];
    }

    media = soma / QT;
    printf("\nA média dos valores digitados é: %.2f\n", media);

    return 0;
}