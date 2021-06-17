#include "biblio.h"
unsigned int contar(char s[], char t[])
{
    unsigned int cont = 0;
    if (strlen(s) > strlen(t))
    {
        while (strcmp(s, t) != 0)
        {
            memmove(s, s + 1, strlen(s));
            cont++;
        }
    }
    else if (strlen(t) > strlen(s))
    {
        while (strcmp(s, t) != 0)
        {
            memmove(t, t + 1, strlen(t));
            cont++;
        }
    }
    else
    {
        while (strcmp(s, t) != 0)
        {
            memmove(s, s + 1, strlen(s));
            memmove(t, t + 1, strlen(t));
            cont += 2;
        }
    }
    return cont;
}