#include<stdio.h>
#include<windows.h>
//limpeza de buffer para evitar problemas com fgets
// fflush(stdin) não é recomendado para limpar o buffer de entrada, pois seu comportamento é indefinido em sistemas que seguem o padrão C. Em vez disso, é melhor usar um loop para consumir os caracteres restantes no buffer. Aqui está um exemplo de como fazer isso:
//fpurge(stdin) é uma função específica do Microsoft Visual C++ e não é parte do padrão C. Ela é usada para limpar o buffer de entrada, mas seu uso não é recomendado devido à falta de portabilidade e ao comportamento indefinido em outros ambientes de desenvolvimento. 
//setbuf(stdin, NULL); // Desativa o buffer de entrada para evitar problemas com fgets
int main(){
    SetConsoleOutputCP(CP_UTF8);
    char str[50];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    printf("A string digitada foi: %s\n", str);
}