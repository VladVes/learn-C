#include <stdio.h>

int main()
{
    int ch;
    while ((ch = getchar()) != EOF) {
       if (ch == '\t') {
           putchar('\\');
           putchar('t');
       }
       if (ch == '\b') {
           putchar('\\');
           putchar('b');
       }
       if (ch == '\\') {
         putchar('\\');
         putchar('\\');
       }
       if (ch != '\\' && ch != '\t' && ch != '\b') putchar(ch);
    }
    return 0;
}
