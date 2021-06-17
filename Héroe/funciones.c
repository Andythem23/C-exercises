#include "biblio.h"
int batalla (int h1,int a1,int c1,int h2,int a2) {
    int cont=0;
    while (h2>0) {
        cont++;
        if (!(a2>=h1) || a1>=h2) {
            h2-=a1;
            printf("ATACAR\n");
            
        }
        else {
            h1+=c1;
            printf ("CURAR\n");
        }
        h1-=a2;
    }
    return cont;
}