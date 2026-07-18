#include<stdio.h>

int *obterArray(){
    static int v[5];
    for (int i = 0; i < 5; i++){
        v[i] = i;
    }
    return v;
}

int main(){
    int *array = obterArray();
    for (int i = 0; i < 5; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}