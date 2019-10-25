#include <stdio.h>
#define ARR_LENGTH 1000

int main() {
    int i, j, ch, chars_countArr[ARR_LENGTH];
    for (i = 0; i < ARR_LENGTH; ++i)
        chars_countArr[i] = 0;
    while ((ch = getchar()) != EOF) {
        if (ch != ' ' && ch != '\n' && ch != '\t')
            ++chars_countArr[ch];
    }
    for (i = 0; i < ARR_LENGTH; ++i) {
        if (chars_countArr[i] > 0) {
            for (j = 0; j < chars_countArr[i]; ++j)
                printf("|");
            printf("\n");
        }
    }
}
