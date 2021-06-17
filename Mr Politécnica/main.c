#include "biblio.h"
int main(int argc, char const *argv[])
{
    int n, comp;
    scanf("%d", &n);
    char personas[n][20];
    char temp[20];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", personas[i]);
        scanf("%s", temp);
        strcat(personas[i], " ");
        strcat(personas[i], temp);
    }
    scanf("%d", &comp);
    functionpointer_sort(personas, n, comp);
    return 0;
}