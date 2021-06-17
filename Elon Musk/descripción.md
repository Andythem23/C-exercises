Elon Reeve Musk es un físico, emprendedor, inventor y magnate sudafricano, nacionalizado canadiense y estadounidense. Su sueño es viajar al planeta Marte para colonizarlo. Desafortunadamente el sistema de piloto automático de la nave esta corrupto y la nave ya esta en el espacio. Tu misión es arreglar el sistema para llegar a Marte.

El espacio puede ser representado por un plano XY. La nave empieza ubicada en el punto (0,0), y el planeta Marte esta ubicado en el punto (px,py).

El sistema de piloto automático de la nave espacial sigue una lista de ordenes que pueden ser representados como una cadena s. El sistema lee la cadena s de izquierda a derecha. Suponga que la nave esta actualmente en el punto (x,y) y la orden es si.

- Si si=U, te mueves a (x,y+1);
- Si si=D, te mueves a (x,y−1);
- Si si=R, te mueves a (x+1,y);
- Si si=L, te mueves a (x−1,y);

Como la cadena s podría estar corrupta, hay una posibilidad de que no se pueda llegar hasta Marte al final. Por suerte, tu puedes eliminar caracteres de s pero no puedes cambiar sus posiciones.

Necesitamos saber si es posible eliminar varias ordenes (posiblemente cero) de s de tal manera que sea posible llegar hasta Marte cuando se procesan las ordenes.


Entrada:

La primera línea contiene un entero t (1≤t≤1000)

-  el número de casos de prueba.

Cada caso de prueba consiste de dos líneas. La primera línea en cada caso contiene dos enteros px
 y py (−105≤px,py≤105; (px,py)≠(0,0)) - las coordenadas del planeta Marte (px,py)

.

La segunda línea consiste de una cadena s
 (1≤|s|≤105:|s| es la longitud de la cadena s)

- la lista de ordenes.

Esta garantizado que la suma de |s|
sobre todos los casos no supera a 105

.

Salida:

Por cada caso de prueba, imprime "YES" si puedes eliminar varios caracteres (incluso, no eliminar) de s

de tal manera que se pueda llegar a Marte. Caso contrario, imprimir "NO".


EJEMPLOS:

 Entrada

6
10 5
RRRRRRRRRRUUUUU
1 1
UDDDRLLL
-3 -5
LDLDLDDDR
1 2
LLLLUU
3 -2
RDULRLLDR
-1 6
RUDURUUUUR

 Salida

YES
YES
YES
NO
YES
NO


Nota

En el primer caso, no es necesario modificar s, ya que s te lleva a Marte sin problemas.

En el segundo caso, es posible eliminar s1,s2,s3,s5,s6 y s7, tal que s se vuelve igual a "UR".

En el tercer caso, puedes eliminar s8, de otra manera es imposible llegar a Marte.

OBS: El índice de la cadena empieza en 0