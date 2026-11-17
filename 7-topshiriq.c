#include <stdio.h>

int kichikSon(int a, int b, int c) {

    if(a < b && a < c) {
        return a;
    }
    else if(b < a && b < c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {

    int a, b, c;

    printf("1-sonni kiriting: ");
    scanf("%d", &a);

    printf("2-sonni kiriting: ");
    scanf("%d", &b);

    printf("3-sonni kiriting: ");
    scanf("%d", &c);

    int natija = kichikSon(a, b, c);

    printf("Eng kichik son: %d", natija);

    return 0;
}