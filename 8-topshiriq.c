#include <stdio.h>

int boluvchilar(int son) {
    int count = 0;

    for(int i = 1; i <= son; i++) {
        if(son % i == 0) {
            count++;
        }
    }

    return count;
}

int main() {

    int a;

    printf("Son kiriting: ");
    scanf("%d", &a);

    int natija = boluvchilar(a);

    printf("Bo'luvchilar soni: %d", natija);

    return 0;
}