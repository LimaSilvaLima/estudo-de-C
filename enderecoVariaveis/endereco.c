#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "");
    int a = 10;
    int b = 20;
    int c = a + b;

    printf("Endereço de 'a': %p\n", (void *)&a);
    printf("Endereço de 'b': %p\n", (void *)&b);
    printf("Endereço de 'c': %p\n", (void *)&c);

    // Retornar 0 indica que o programa executou com sucesso
    return 0;
}