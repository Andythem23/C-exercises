El pequeño oso Limak quiere jugar un juego. Tiene cinco cartas. En cada una está escrito un número. Cada número es un entero positivo.

Limak puede descartar algunas cartas. Su objetivo es minimizar la suma de los números escritos en las cartas restantes.

Tiene permitido una sola vez tirar dos o tres cartas del mismo número. Por supuesto, no descartara cartas si es imposible elegir dos o tres cartas del mismo número.

Dados cinco números escritos en las cartas, ¿puedes hallar la suma mínima de los números en las cartas restantes?
Entrada

La única línea contiene cinco enteros t1,t2,t3,t4,t5(1≤ti≤100)

, los números escritos en las cartas.
Salida

Imprima la mínima suma posible con los números en las cartas restantes.

EJEMPLOS

Entrada:
7 3 7 3 20
Salida:
26

Entrada: 
7 9 3 1 8
Salida:
28

Entrada:
10 10 10 10 10 
Salida:
20

En el primer ejemplo, Limak tiene cartas con valores 7, 3, 7, 3 y 20. Limak debe decidir entre:

        No hacer nada y la suma sería 7+3+7+3+20=40

.
Descartar dos cartas con valor 7. La suma restante sería 3+3+20=26
.
Descartar dos cartas con valor 3. La suma restante sería 7+7+20=34

        .

Como se pide minimizar la suma, la respuesta es 26.

En el segundo ejemplo, es imposible encontrar dos o tres cartas con el mismo número. Por lo tanto Limak no hace nada y la suma  es7+9+1+3+8=28

.

En el tercer ejemplo, todas las cartas tiene el mismo número. Es óptimo descartar tres cartas, la suma de las dos cartas restantes es 10+10=20
.