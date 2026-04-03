#include <stdio.h>

int soma(int x, int y);

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", soma(x, y));
    return 0;
}

int soma(int x, int y) {
    return x + y;
}
