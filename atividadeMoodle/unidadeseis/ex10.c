#include <stdio.h>

int main() {
    char s[100];
    int i = 0, cont = 0;

    scanf("%s", s);

    while (s[i] != '\0') {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            cont++;
        }
        i++;
    }

    printf("%d\n", cont);

    return 0;
}
