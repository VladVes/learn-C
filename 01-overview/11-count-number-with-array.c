#include <stdio.h>

int main()
{
    int ch, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)       
        ndigit[i] = 0;
    while ((ch = getchar()) != EOF)
        if (ch >= '0' && ch <= '9')
            ++ndigit[ch - '0'];
        else if (ch == ' ' || ch == '\n' || ch == '\t')
            ++nwhite;
        else
            ++nother;
   printf("digit: ");
   for (i = 0; i < 10; ++i)
       printf(" %d", ndigit[i]);
   printf(", delimiters = %d, others = %d\n", nwhite, nother);
}
