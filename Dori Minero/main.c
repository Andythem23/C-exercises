#include "biblio.h"
int main(void)
{
    int m,n;
    scanf ("%d%d",&m,&n);
    int b[m],a[n];
    for (int i=0;i<m;i++) {
        scanf("%d",&b[i]);
    }
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("%s",KMP(b, a, m, n)?"SI":"NO");
    return 0;
}