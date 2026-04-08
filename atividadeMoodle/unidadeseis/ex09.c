#include <stdio.h>

int main() {
    char s[100];
    int i = 0, j, pal = 1;

    scanf("%s", s);

    while (s[i] != '\0') {
        i++;
    }
    j = i - 1;
    i = 0;

    while (i < j) {
        if (s[i] != s[j]) {
            pal = 0;
            break;
        }
        i++;
        j--;
    }

    if (pal) {
        printf("Palindromo\n");
    } else {
        printf("Nao e palindromo\n");
    }

    return 0;
}
