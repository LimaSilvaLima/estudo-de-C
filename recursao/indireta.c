#include <stdio.h>
    

// 1. DECLARAÇÃO (PROTÓTIPO): Avisa ao compilador que a functionB existe
void functionB(int n); 

void functionA(int n) {
    if (n > 0 ) {
        printf("Function A: %d\n", n);
        functionB(n - 1);
    }
}

void functionB(int n) {
    if (n > 0 ) {
        printf("Function B: %d\n", n);
        functionA(n - 1);

    }
}

int main() {
    
    functionA(20);
    return 0;
}
