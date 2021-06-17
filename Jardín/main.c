
#include "biblio.h"
int main(int argc, char const *argv[])
{
    int n, k;
    scanf("%d%d", &n, &k);
    int *v = (int *)malloc(sizeof *v * n);
    if (v == NULL)
    {
        fprintf(stderr, "malloc failed\n");
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", v + i);
    }
    printf("%d", horasr(v, n, k));
    free(v);
    return 0;
}
