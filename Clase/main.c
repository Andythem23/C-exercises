#include "biblio.h"
int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    char cad1[m][100], cad2[m][100], cadn[n][100];
    for (size_t i = 0; i < m; i++)
    {
        scanf("%s %s", cad1[i], cad2[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        scanf("%s", cadn[i]);
    }
    traducir(cad1, cad2, cadn, n, m);
    return 0;
}