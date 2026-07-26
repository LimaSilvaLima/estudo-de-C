#include <stdio.h>
#include <stdlib.h>

int main(){
    int *y, *x = (int *)malloc(sizeof(int));
    *x = 5;
    y = x; // y points to the same memory location as x
    printf("valor de x: %d\n", *x);
    free(x); // Free the allocated memory
    *y = 10; // This is undefined behavior since the memory has been freed
    printf("valor de y: %d\n", *y); // This may cause a segmentation fault or print garbage value
}