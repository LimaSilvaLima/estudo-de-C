#include <stdio.h>

void adicao() {
    int a, b, soma;
    printf("Digite dois numeros inteiros: ");
    // Usa %d para ler inteiros para 'a' e 'b'
    scanf("%d %d", &a, &b);

    // Calcula a soma
    soma = a + b;

    // Imprime o resultado
    printf("A soma de %d e %d e: %d\n", a, b, soma);
}

int main() {
    adicao();
    return 0;
}
