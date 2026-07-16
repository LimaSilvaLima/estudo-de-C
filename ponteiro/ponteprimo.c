#include<stdio.h>
#include<windows.h>


int main(){
    SetConsoleOutputCP(65001);
    //SetConsoleOutputCP(CP_UTF8)
    int a = 5;
    printf("Valor de a: %d\n", a);
    printf("O endereço de a: %p\n", &a);
    int *p = &a;
    printf("O valor de p: %d\n", *p);   
    return 0;
}