#include <stdio.h>
#include<Windows.h>

typedef struct {
    float x, y;
} Ponto;

int main(void) {
    Ponto ponto = { 10.5, 20.80 };
    Ponto *p = &ponto;
    printf("\n (%.1f, %.1f)\n", ponto.x, ponto.y);
    printf("\n (%.1f, %.1f)\n", p->x, p->y);
    return 0;
}
