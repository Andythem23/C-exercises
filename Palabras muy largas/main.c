#include "biblio.h"
int main(int argc, char const *argv[])
{
    int n;
    scanf ("%d",&n);
    char s[n][100];
    for (size_t i = 0; i < n; i++)
    {
        scanf ("%s",s[i]);
        if (strlen(s[i])>10) {
            transformar(s[i]);
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        printf ("%s\n",s[i]);
    }
    return 0;
}