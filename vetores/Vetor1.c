#include <stdio.h>
#include <windows.h>

int main(){
    // Configura o console do Windows para usar UTF-8 (corrige acentuação)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float numeros[3];
    float soma = 0;
    int i;
    
    printf("Digite 3 números: \n");
    for (i = 0; i < 3; i++) {
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    for (i = 0; i < 3; i++) {
        printf("Número %d: %.2f\n", i + 1, numeros[i]);
    }
    
    float media = soma / 3.0;
    printf("A média é: %.2f\n", media);
    
    return 0;
}

