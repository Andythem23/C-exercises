#include "biblio.h"
void transformar(char cad []) {
    int aux=strlen(cad)-2;
    char pri,ult;
    char straux[3];
    pri=cad[0];
    ult=cad[strlen(cad)-1];  
    if (aux>9) {
        snprintf (straux,3,"%d",aux);
        char final [5] = {pri,straux[0],straux[1],ult,0};
        memset (cad,0,100);
        strncpy(cad,final,4);
    }
    else {
        char final [4] = {pri,aux+'0',ult,0};
        memset (cad,0,100);
        strncpy(cad,final,4);
    }
    
}