int horasr(int *v, int n, int k)
{
    int aux, min;
    min = k;
    for (int i = 0; i < n; i++)
    {
        if (k % *(v + i) == 0)
            aux = k / (*(v + i));
        if (aux < min)
        {
            min = aux;
        }
    }
    return min;
}
