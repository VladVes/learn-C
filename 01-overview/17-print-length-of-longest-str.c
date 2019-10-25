#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);
void copyLine(char to[], char from[]);

int main()
{
    int len, maxLen;
    char currentLine[MAXLINE];
    char longestLine[MAXLINE];
    maxLen = 0;
    while ((len = getLine(currentLine, MAXLINE)) > 0)
        if (len > maxLen) {
            maxLen = len;
            copyLine(longestLine, currentLine);
        }
    if (maxLen > 0) {
        if (maxLen > MAXLINE)    
            printf("%d chars in string: %s...overfull\n", maxLen, longestLine);
        else
            printf("%d chars in string: %s\n", maxLen, longestLine);
    }
    return 0;
}

int getLine(char s[], int limit)
{
   int c, i, j;
   j = 0;
   for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
       if (i < limit - 1) {
            s[i] = c;
            j = i + 1;
       }
   }
   if (c == '\n') {
       if (i >= limit) --j;
       s[j] = c;
       ++j;
   }
   s[j] = '\0';
   return i;
}

void copyLine(char destArr[], char sourceArr[])
{
   int i;
   i = 0;
   while ((destArr[i] = sourceArr[i]) != '\0')
       ++i; 
}
