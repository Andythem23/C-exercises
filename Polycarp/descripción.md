Polycarp tiene n monedas, el valor de la i-ésima moneda es ai.

Polycarp quiere distribuir todas sus monedas entre sus bolsillos, pero no puede colocar dos monedas de un mismo valor en un mismo bolsillo.

Por ejemplo, Polycarp tiene seis monedas representadas por un arreglo a=[1,2,4,3,3,2]
, él puede distribuir sus monedas en dos bolsillos de la forma siguiente: [1,2,3],[2,3,4]

.

Polycarp quiere distribuir todas sus monedas en el mínimo número posible de bolsillos. Ayúdalo a hacer esto.
Entrada

La primera línea contiene un entero n(1≤n≤100)

, el número de monedas.

La segunda línea contiene n
enteros a1,a2,...,an(1≤ai≤100)

, el valor de las monedas.
Salida

Imprimir un solo entero, el mínimo número de bolsillos que Polycarp necesita para distribuir todas las monedas sin que dos monedas del mismo valor estén en el mismo bolsillo.
EJEMPLOS

Entrada:
6
1 2 4 3 3 2
Salida:
2

Entrada:
1
100
Salida:
1

Obs: Se debe utilizar punteros para la resolución