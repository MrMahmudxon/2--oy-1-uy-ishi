#include <stdio.h>

int musbatmi(int son) {
    if(son > 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {

    int a;

    printf("Son kiriting: ");
    scanf("%d", &a);

    int natija = musbatmi(a);

    printf("Natija: %d", natija);

    return 0;
}