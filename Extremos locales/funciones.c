int extloc(int *v,int n) {
    int cont=0;
    for (int i=1;i<n-1;i++) {
        if ((*(v+i)<*(v+i-1) && *(v+i)<*(v+i+1)) || (*(v+i)>*(v+i-1) && *(v+i)>*(v+i+1))) {
            cont++;
        }
    }
    return cont;
}