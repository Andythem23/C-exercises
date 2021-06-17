#include "biblio.h"
int main(int argc, char const *argv[])
{
    char s[100], t[100];
    scanf("%s %s", s, t);
    printf("%d", contar(s, t));
    return 0;
}