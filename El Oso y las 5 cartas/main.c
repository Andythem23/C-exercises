#include "biblio.h"
int main () {
    unsigned int t[5];
    for (int i=0;i<5;i++) {
        scanf ("%u",&t[i]);
    }
    printf ("%u",minimasuma(t));
}