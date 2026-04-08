#include <stdio.h>

int main() {
    char s[100];
    int i = 0;

    while (scanf("%c", &s[i]) == 1 && s[i] != '\n') {
        i++;
    }

    printf("%d\n", i);

    return 0;
}
