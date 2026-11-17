#include <stdio.h>

int raqamlarSoni(int son) {
    int count = 0;

    if(son == 0) {
        return 1;
    }

    while(son != 0) {
        son = son / 10;
        count++;
    }

    return count;
}

int main() {

    int a;

    printf("Son kiriting: ");
    scanf("%d", &a);

    int natija = raqamlarSoni(a);

    printf("Raqamlar soni: %d", natija);

    return 0;
}