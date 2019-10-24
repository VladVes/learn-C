#include <stdio.h>

int main()
{
    int ch;
    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\t') putchar('\n');
        else putchar(ch);
    }
    return 0;
}
