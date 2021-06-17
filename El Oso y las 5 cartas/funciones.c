#include "biblio.h"
unsigned minimasuma (unsigned t[]) {
    unsigned count [101];
    memset (count,0,sizeof count);
    unsigned suma=0,sumaf,cont=3;
    for(int i = 0; i < 5; i++)
    {  
        count[t[i]]++;
        suma+=t[i];
    }    
    sumaf=suma;
    suma=0;
    for(int i = 0; i <=100; i++)
    {  
        if (count[i]>1) {
           for(int j=0; j < 5; j++) {
               if (i==t[j] && cont>0)
                   cont--;
               else
                   suma+=t[j];
           } 
           if (sumaf>suma)
                sumaf=suma;
           suma=0;
           cont=3;
        }
    }  
    return sumaf;
}