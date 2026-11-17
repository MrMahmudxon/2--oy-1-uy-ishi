#include <stdio.h>

int yosh(int yil) {
    return 2026 - yil;
}

int main() {

    int tugilgan_yil;

    printf("Tug'ilgan yilingizni kiriting: ");
    scanf("%d", &tugilgan_yil);

    int natija = yosh(tugilgan_yil);

    printf("Sizning yoshingiz: %d", natija);

    return 0;
}