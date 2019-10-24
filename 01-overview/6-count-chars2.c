#include <stdio.h>

int main()
{
    int current_char, spaces, tabs, new_lines;
    new_lines = 0;
    spaces = 0;
    tabs = 0;
    while ((current_char = getchar()) != EOF) {
        if (current_char == '\n') ++new_lines; 
        if (current_char == ' ') ++spaces; 
        if (current_char == '\t') ++tabs; 
    }
    printf("spaces\ttabs\tnew_lines\n");
    printf("%d\t%d\t%d\n", spaces, tabs, new lines);
    return 0;
}
