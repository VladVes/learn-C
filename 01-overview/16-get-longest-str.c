#include <stdio.h>

#define MAXLINE 10

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
    if (maxLen > 0) 
        printf("%s", longestLine);
    return 0;
}

int getLine(char s[], int limit)
{
   int c, i;
   for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
       s[i] = c;
   if (c == '\n') {
       s[i] = c;
       ++i;
   }
   s[i] = '\0';
   return i;
}

void copyLine(char destArr[], char sourceArr[])
{
   int i;
   i = 0;
   while ((destArr[i] = sourceArr[i]) != '\0')
       ++i; 
}
