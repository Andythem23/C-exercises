#include "biblio.h"
int main()
{
    int n;
    scanf ("%d",&n);
    int x[n];
    for (int i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    for (int i=0;i<n;i++) {
        printf("%s%s",secome(x[i])==true?"SI":"NO",i==n-1?"":"\n");
    }
}