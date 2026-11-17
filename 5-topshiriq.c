#include <stdio.h>

int yigindi(int n) {
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {

    int n;

    printf("N sonini kiriting: ");
    scanf("%d", &n);

    int natija = yigindi(n);

    printf("Yig'indi: %d", natija);

    return 0;
}