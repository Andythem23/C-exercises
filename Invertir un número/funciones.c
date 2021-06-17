#include "biblio.h"
int numinv (int n) {
    static int k=0;
    if (n==0) {
        return k;
    }
    k=k+(n%10)*pot(10,contcifras(n));
    return numinv(n/10);
}

int contcifras (int n) {
    int cont=0;
    while (n/10>0)
    {
        n=n/10;
        cont++;
    }
    return cont;
}

int pot (int b, int x) {
    int i,sum=1;
    for (i=1;i<=x;i++) {
        sum=sum*b;
    }
    return sum;
}