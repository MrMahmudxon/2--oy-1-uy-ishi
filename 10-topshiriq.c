#include <stdio.h>

void jadval(int son) {

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", son, i, son * i);
    }

}

int main() {

    int a;

    printf("Son kiriting: ");
    scanf("%d", &a);

    jadval(a);

    return 0;
}