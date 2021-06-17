Usted es el encargado de la pasarela para el concurso "Mister Politécnica". Para ello debe organizar el orden en el cual los chicos salen a desfilar. Los criterios son por nombre para el desfile con traje elegante y por edad para el desfile en traje de baño.

Diseñe un algoritmo que reciba una matriz n*2 e imprima en el orden según el tipo de desfile que se hará.

La función debe ser utilizada de la siguiente manera:
Para ordenar por nombre :

functionpointer_sort(personas, n, ordenar_por_nombre);


Para ordenar por edad :

functionpointer_sort(personas, n, ordenar_por_edad);


Ayuda misericordiosa: 

Una manera de implementar el prototipo de la función functionpointer_sort es:

void functionpointer_sort( char personas (*p)[][], int n, int comp( const char persona *p1, const char persona *p2);

Entrada

Cantidad de personas, nombre y edad de las personas, método de ordenamiento:(1-por nombre, 2-por edad).
Salida

El nombre de los chicos seguido por su edad y en el orden pedido

Entrada:
2 Ricardo 20 Lorenzo 19 2
Salida:
Lorenzo 19 Ricardo 20

Entrada:
3 Marcelo 20 Fabri 19 Hugo 22 1
Salida:
Fabri 19 Hugo 22 Marcelo 20