#include <stdio.h>
#include <windows.h>

int main() {
    char nome[] = "john country";
    printf("%s", &nome[4]);
    return 0;
}