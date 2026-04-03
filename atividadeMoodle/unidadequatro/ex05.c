#include <stdio.h>

int main() {
    int x = 100;
    int y = 1;
    if (y > 0) {
        int x = 10;
        printf("%d\n", x++);
    }
    printf("%d", x);
    return 0;
}
