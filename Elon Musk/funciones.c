#include "biblio.h"
int comprobar(int px, int py, char s[100000])
{
    int contA[4] = {0};

    for (size_t i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'U')
        {
            contA[0]++;
        }
        else if (s[i] == 'D')
        {
            contA[1]++;
        }
        else if (s[i] == 'R')
        {
            contA[2]++;
        }
        else if (s[i] == 'L')
        {
            contA[3]++;
        }
    }
    if (((contA[0] >= py && py > 0) || (contA[1] >= py * -1 && py < 0)) && ((contA[2] >= px && px > 0) || (contA[3] >= px * -1 && px < 0)))
        return 1;
    else
        return 0;
}