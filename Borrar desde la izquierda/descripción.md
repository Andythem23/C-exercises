Se tienen dos cadenas s y t. Un movimiento consiste en elegir cualquiera de las dos cadenas y borrar el primer caracter (el que se encuentra más a la izquierda).
Luego de un movimiento, la longitud de dicha cadena decrece en 1. No se puede realizar un movimiento sobre una cadena vacía.

Por ejemplo:
- Aplicando un movimiento a la cadena "hola", queda la cadena "ola".
- Aplicando un movimiento a la cadena  "a", queda la cadena vacía  "".

Se pide que las dos cadenas queden iguales utilizando el menor número de movimientos posibles. Es posible que, para que ambas cadenas sean iguales, ambas tengan que ser vacías.

Escriba un programa que encuentre el mínimo de movimientos necesarios para hacer que las cadenas s y t sean iguales.

Entrada:
En la primera línea se encuentra la cadena s, en la segunda línea, la cadena t.
Ambas consisten únicamente de letras minúsculas del alfabeto latino. La longitud de cada cadena varía entre [1,100].

Salida:
Un número entero positivo, el cual sea el menor número de movimientos requeridos para que ambas cadenas sean iguales.

Ejemplos:

Entrada:

abecedario
vecindario

Salida:

10


Entrada:

hola
adios

Salida:

9



En el ejemplo 1 se elimina abece con 5 movimientos y vecin con otros 5. Queda entonces la cadena dario.

En el ejemplo 2 se eliminan todos los carecteres en ambas cadenas con 9 movimientos. Queda entonces la cadena vacia.