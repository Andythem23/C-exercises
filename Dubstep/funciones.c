#include "biblio.h"
void desremix(char cad[])
{
    int resta;
    char original[200];
    memset(original, 0, 200);
    char wub[] = "WUB";
    char *p = cad;

    while (*p != 0)
    {
        char *aux = strstr(p, wub);
        if (aux == NULL)
        {
            strcat(original, p);
            break;
        }
        else
            resta = aux - p;
        if (resta > 0)
        {
            strncat(original, p, resta);
            strcat(original, " ");
            p += resta;
        }
        else
            p += 3;
    }
    printf("%s", original);
}