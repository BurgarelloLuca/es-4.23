#include <stdio.h>
#include <math.h>

int main() {
    float y;
    int x=1;
    printf("Inserire un numero (y): ");
    scanf("%f", &y);
    while (pow(x, x) < y) {
        x++;
    }
    x--;
    printf("Il numero massimo e' %d",x);
    return 0;
}
