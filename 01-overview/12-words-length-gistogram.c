#include <stdio.h>
#define ARR_LENGTH 100

int main()
{
    int gis_arr[ARR_LENGTH];
    int i, j, ch;
    for (i = 0; i < ARR_LENGTH; ++i)
        gis_arr[i] = 0;
    i = 0; 
    while ((ch = getchar()) != EOF) {
        if (ch != ' ' && ch != '\n' && ch != '\t')
            ++gis_arr[i];
        else
            ++i;
    }
    for (i = 0; i < ARR_LENGTH; ++i) {
        if (gis_arr[i] > 0) {
            for (j = 0; j < gis_arr[i]; ++j) {
                printf("|"); 
            }
            printf("\n");
        }
    }    
}
