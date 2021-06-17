Recibes un arreglo a. Algunos elementos de este arreglo ai es un mínimo local si es estrictamente menor que ambos de sus vecinos (eso sería ai  < ai - 1 y ai < ai + 1 ). Además, el elemento puede ser llamado máximo local si es estrictamente mayor a sus vecinos (eso sería ai  > ai - 1 y ai > ai + 1 ). Ya que a1 y an solamente tienen un vecino cada uno, no son considerados mínimo local ni máximo local.

Un elemento es llamado extremo local si es máximo local o mínimo local. Su tarea es calcular el número de extremos locales en el arreglo dado.

Obs: Se debe utilizar punteros para la resolución
Entrada: 

La primera línea contiene un entero n (el número de elementos en el arreglo a).

La segunda línea contiene n enteros a1 , a2 , ...., an  (los elementos del arreglo a).
Salida:

Imprima el número de extremos locales en el arreglo dado.


EJEMPLOS:

Entrada:
3
1 2 3
Salida:
0

Entrada:
4
1 5 2 5
Salida:
2


