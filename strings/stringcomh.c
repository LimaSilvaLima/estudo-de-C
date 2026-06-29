#include <stdio.h>
#include <windows.h>
#include <string.h>

// \033[H move o cursor para o topo-esquerdo
// \033[2J limpa a tela inteira
//strlen() - returns the length of a string
//strcpy() - copies one string to another
//strcat() - concatenates two strings
//strcmp() - compares two strings
//strstr() - finds the first occurrence of a substring in a string
//strrchr() - finds the last occurrence of a character in a string

int main() {
    SetConsoleOutputCP(CP_UTF8);

    printf("\033[H\033[2J");
    printf("\n\n");

    char str1[50] = "primeira string para manipilação";
    char str2[50] = "segunda string para manipilação";  
    char str3[50] = "vazia";

    printf("A string 1 é: %s\n", str1);
    printf("A string 2 é: %s\n", str2);
    printf("A string 3 é: %s\n", str3);

    printf("\n\n");

    strcpy(str3, str1);
    printf("Após copiar str1 para str3 (strcpy), str3 agora é: %s\n", str3);

    printf("Nossa string 1 tem %d caracteres (strlen)\n", (int)strlen(str1));

     printf("\n\n");
     printf("Conctenando conteúdos\n\n");
     strcat(str3, "   ");
     strcat(str3, "CONCATENEI");
     printf("Após concatenar 'CONCATENEI' a str3 (strcat), str3 agora é: %s\n", str3);

     printf("\n\n");
     printf("Comparando str1 e str2 (strcmp)\n");
        if (strcmp(str1, str2) == 0) {
            printf("As strings são iguais\n");
        } else {
            printf("As strings são diferentes\n");
        }
    
    return 0;
}