#include<stdio.h>
#include<string.h>
#include<windows.h>

//atoi() - converts a string to an integer
//atol() - converts a string to a long integer
//atof() - converts a string to a floating-point number

int main() {
    SetConsoleOutputCP(CP_UTF8);

    char a[4] ="100";
    char b[4] ="200";
    int value = atoi(a);
    int value2 = atoi(b);
    printf("O valor da soma é %d\n", value + value2);

    printf("\n\n");
    char c[5]    = "10.75";
    CHAR d[5]    = "20.25";

    double value3 = atof(c);
    double value4 = atof(d);
    printf("O valor da soma é %lf\n", value3 + value4);

    printf("\n\n");
    char str1[50];
    char str2[50];
    char sum[10];
    itoa(value, str1, 50);
    itoa(value2, str2, 50);

// Concatene de forma segura
    strcat(str1, str2);

// Exiba o resultado
    printf("conversao de int para string %s:\n", str1);
    //printf("conversao de int para string %s:\n", strcat(itoa(value,10), itoa(value2,10)));
    return 0;
}