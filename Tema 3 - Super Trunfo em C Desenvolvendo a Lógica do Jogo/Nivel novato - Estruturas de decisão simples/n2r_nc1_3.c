#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 1;

    if (a > 0 && b < 0 || c == 0) {
        printf("A condicao e verdadeira. \n");
    } else {
        printf("A condicao e falsa. \n");
    }
}