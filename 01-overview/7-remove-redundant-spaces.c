#include <stdio.h>

int main()
{
    int current_ch, prev_ch;
    prev_ch = 0;
    while ((current_ch = getchar()) != EOF) {
       if (prev_ch != ' ' || (prev_ch == ' ' &&  current_ch != ' ')) putchar(current_ch);
       prev_ch = current_ch; 
    }
    return 0;
}

