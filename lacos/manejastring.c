#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    char nome[] = "João da Silva";
    printf("%c", nome[5]);
    return 0;
}
