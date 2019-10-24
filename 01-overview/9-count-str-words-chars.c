#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0

int main()
{
    int ch, lines, words, chars, state;
    state = OUT_WORD;
    lines = words = chars = 0;
    while ((ch = getchar()) != EOF) {
        ++chars;
        if (ch == '\n') ++lines;
        if (ch == ' ' || ch == '\n' || ch == '\t') state = OUT_WORD;
        else if (state == OUT_WORD) {
            state = IN_WORD;
            ++words;
        }
    }
    printf("%d %d %d\n", lines, words, chars);
    return 0;
}
