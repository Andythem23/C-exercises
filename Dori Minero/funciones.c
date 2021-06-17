#include "biblio.h"
int KMP(const int* X,const int* Y, int m, int n)
{
 
    int next[n + 1];
 
    memset(next,0,sizeof next);
 
    for (int i = 1; i < n; i++)
    {
        int j = next[i + 1];
 
        while (j > 0 && Y[j] != Y[i]) {
            j = next[j];
        }
 
        if (j > 0 || Y[j] == Y[i]) {
            next[i + 1] = j + 1;
        }
    }
 
    for (int i = 0, j = 0; i < m; i++)
    {
        if (*(X + i) == *(Y + j))
        {
            if (++j == n) {
                return 1;
            }
        }
        else if (j > 0)
        {
            j = next[j];
            i--;   
        }
    }
    return 0;
}
