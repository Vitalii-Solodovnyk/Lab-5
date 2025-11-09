#include <stdio.h>

int main(void) {
    int k;
    int ch;

    printf("Podaj klucz (0–25): ");
    if (scanf("%d", &k) != 1 || k < 0 || k > 25) {
        printf("Blad: klucz musi byc w zakresie 0–25.\n");
        return 1;
    }

    // pozbycie się reszty znaku po scanf
    while ((ch = getchar()) != '\n' && ch != EOF);
2

    printf("SZYFR: ");
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch >= 'A' && ch <= 'Z')
            putchar('A' + (ch - 'A' + k) % 26);
        else if (ch >= 'a' && ch <= 'z')
            putchar('a' + (ch - 'a' + k) % 26);
        else
            putchar(ch);
    }

    printf("\nKLUCZ: %d\n", k);
    return 0;4
}
