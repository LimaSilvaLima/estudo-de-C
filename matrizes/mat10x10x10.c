#include<stdio.h>
#include<windows.h>

int main () {
    int array[10][10][10];
    for(int x =0; x<10; x++){
        printf("\n");
        for(int j=0; j<10; j++){
            printf("\n");
            for(int i=0; i<10; i++){
                array[x][j][i] = x*100 + j*10 + i;
                printf("%d ", array[x][j][i]);
            }
        }
    }
}