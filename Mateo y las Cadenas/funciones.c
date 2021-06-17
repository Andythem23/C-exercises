#include "biblio.h"
void transformar(char s[])
{
    minusculasear(s);
    for (size_t i = 0; i < strlen(s); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            printf(".%c", s[i]);
        }
    }
}
void minusculasear(char s[])
{

    for (size_t i = 0; s[i] != '\0'; i++)
    {
        s[i] = minuscula(s[i]);
    }
}
char minuscula (char car) {
    if (car<'a')
        car+=32;
    return car;
}