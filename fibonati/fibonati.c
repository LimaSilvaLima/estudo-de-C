#include <stdio.h>

int fibonati(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonati(n - 1) + fibonati(n - 2);
}

int main() {
    printf("Hello, World!\n");
    return 0;
}