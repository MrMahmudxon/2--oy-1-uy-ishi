#include <stdio.h>

int oxirgiRaqam(int son) {
    return son % 10;
}

int main() {

    int a;

    printf("Son kiriting: ");
    scanf("%d", &a);

    int natija = oxirgiRaqam(a);

    printf("Oxirgi raqam: %d", natija);

    return 0;
}