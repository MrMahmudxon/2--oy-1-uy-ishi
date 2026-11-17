#include <stdio.h>

int yuza(int uzunlik, int kenglik) {
    return uzunlik * kenglik;
}

int main() {

    int a, b;

    printf("Uzunlikni kiriting: ");
    scanf("%d", &a);

    printf("Kenglikni kiriting: ");
    scanf("%d", &b);

    int natija = yuza(a, b);

    printf("Tortburchak yuzasi: %d", natija);

    return 0;
}