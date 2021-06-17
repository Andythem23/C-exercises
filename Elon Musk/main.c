#include "biblio.h"
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    int px,py;
    char s[100000];
    for (size_t i = 0; i < t; i++)
    {
        scanf("%d %d", &px, &py);
        scanf("%s", s);
        printf("%s", comprobar(px, py, s) == 1 ? "YES\n" : "NO\n");
    }
    for (size_t i = 0; i < t; i++)
    {
        
    }
    return 0;
}