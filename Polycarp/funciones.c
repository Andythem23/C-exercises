int bolsillos(int *v,int n) {
    int cont=1,aux=1;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (*(v+i)==*(v+j)) 
                cont++;
            if (cont>aux)
                aux=cont;
        }
        cont=1;
    }
    return aux;
}