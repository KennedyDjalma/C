#include <stdio.h>

int main() {
    int x = 5;
    int y = 5.0;
    char c = 'a';

    printf("x == y: %d \n", x == y);
    printf("x != y: %d \n", x != y);
    printf("x >= y: %d \n", x >= y);

    printf("x >= c: %d \n", x >= c);
    printf("O valor ASCII de %c e %d \n", c, c);
}