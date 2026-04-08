#include <stdio.h>

int main() {
    int v[10];
    int x;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        while (v[i] == 0) {
            printf("NÂO PODE ZERO! DIGITE OUTRO VALOR \n");
            scanf("%d", &v[i]);
        }
    }

    scanf("%d", &x);

    for (int i = 0; i < 10; i++) {
        if (v[i] == x) {
            v[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
    return 0;
}
