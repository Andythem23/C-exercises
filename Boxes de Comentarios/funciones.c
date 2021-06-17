#include "biblio.h"
unsigned long dinero (unsigned long n, unsigned long m, unsigned int a, unsigned int b) {
    unsigned long suma1=0,suma2=0,mem,aux;
    
    if (n%m==0) {
        return 0;
    }
    else if (n>m) {
        suma1=(n-m)*b;
        suma2=(m*2-n)*a;
        
    }
    else if (m>n) {
        suma1=(m-n)*a;
        suma2=n*b;
    }
    if (suma2>suma1)
        return suma1;
    return suma2;
}