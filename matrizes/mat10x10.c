#include<stdio.h>
#include<windows.h>

int main (){
    SetConsoleOutputCP(CP_UTF8);
    int array[10][10];
    for(int j=0; j<10; j++){
        printf("\n");
        for(int i=0; i<10; i++){
            array[j][i] = j*10 + i;
            printf("%d ", array[j][i]);
        }
    }

}