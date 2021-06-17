#include "biblio.h"
void functionpointer_sort(char personas[][20], int n, int comp)
{
    char persona[n][20];
    char *p;
    int aux[n];
    for (int i = 0; i < n; i++)
    {
        p = strstr(personas[i], " ");
        strncpy(persona[i], personas[i], p - personas[i]);
        persona[i][p - personas[i]] = 0;
        aux[i] = strtol(p, NULL, 10);
    }
    if (comp == 1)
    {
        
        strordenarVector(persona, aux, n);
        for (int i = 0; i < n; i++)
        {
            printf("%s %d%s", persona[i], aux[i], i == n - 1 ? "" : " ");
        }
    }
    else
    {
        ordenarVector(aux, persona, n);
        for (int i = 0; i < n; i++)
        {
            printf("%s %d%s", persona[i], aux[i], i == n - 1 ? "" : " ");
        }
    }
}

void ordenarVector(int v[], char str[][20], int n)
{
    int i = 0, j;
    char temp[20];
    while (i < n)
    {
        j = i;
        while (j > 0 && v[j - 1] > v[j])
        {
            swap(&v[j], &v[j - 1]);
            strcpy(temp, str[j]);
            strcpy(str[j], str[j - 1]);
            strcpy(str[j - 1], temp);

            j--;
        }
        i++;
    }
}
void strordenarVector(char str[][20], int aux[], int n)
{
    int i, j, mem;
    char temp[20];
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
                mem = aux[i];
                aux[i] = aux[j];
                aux[j] = mem;
            }
        }
}
void swap(int *x, int *y)
{
    int mem = *x;
    *x = *y;
    *y = mem;
}