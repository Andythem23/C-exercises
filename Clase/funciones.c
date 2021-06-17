#include "biblio.h"
void traducir(char cad1[][100], char cad2[][100], char cadn[][100], int n, int m)
{
    int i, j;
    char final[n * 100];
    memset(final, 0, n * 100);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (strcmp(cadn[i], cad1[j]) == 0)
            {
                break;
            }
        }
        if (strlen(cad1[j]) > strlen(cad2[j]))
        {
            strcat(final, cad2[j]);
            strcat(final, " ");
        }
        else
        {
            strcat(final, cad1[j]);
            strcat(final, " ");
        }
    }
    printf("%s", final);
}