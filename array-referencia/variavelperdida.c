#include <stdio.h>
#include <stdlib.h>

void fun(){
    int *x = (int *)malloc(sizeof(int));
    *x = 5;
    printf("valor de x: %d\n", *x);
    free(x); // Free the allocated memory
}

int main(){
    fun();
    return 0;
}