#include <stdio.h>

int main(void) {
    int ch;
    int duze = 0, male = 0, cyfry = 0, inne = 0;

    printf("Wpisz linie tekstu (Enter konczy):\n");

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch >= 'A' && ch <= 'Z')
            duze++;
        else if (ch >= 'a' && ch <= 'z')
            male++;
        else if (ch >= '0' && ch <= '9')
            cyfry++;
        else
            inne++;
    }

    printf("DUZE=%d MALE=%d CYFRY=%d INNE=%d\n", duze, male, cyfry, inne);
    return 0;
}
