#include <stdio.h>

int teskari(int son) {
    int natija = 0;

    while(son != 0) {
        int raqam = son % 10;
        natija = natija * 10 + raqam;
        son = son / 10;
    }

    return natija;
}

int main() {

    int a;

    printf("Son kiriting: ");
    scanf("%d", &a);

    int javob = teskari(a);

    printf("Teskari son: %d", javob);

    return 0;
}