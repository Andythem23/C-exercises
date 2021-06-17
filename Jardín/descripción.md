Hugo piensa en regar su jardín. El jardín puede ser representado como un segmento de longitud k. Hugo tiene n baldes, el i-ésimo balde le permite regar un segmento continuo de su jardín de longitud exactamente ai

cada hora. Hugo no puede regar ninguna parte de su jardín que ya haya sido regada, y tampoco puede regar el suelo que se encuentra fuera del jardín.

Hugo debe elegir un balde con el objetivo de regar su jardín lo más rápido posible (como fue mencionado anteriormente, cada hora regara un segmento de longitud ai

si elige la i-ésima cubeta). Ayúdalo a determinar el mínimo número de horas que deberá utilizar para regar todo su jardín.

Se garantiza que Hugo siempre puede elegir una cubeta que le permita regar todo el jardín.
Entrada

La primera línea contiene dos enteros n,k(1≤n,k≤100)

, el número de baldes y la longitud de jardín, respectivamente.

La segunda línea contiene n
enteros ai(1≤ai≤100)

, la longitud del segmento que se puede regar con el i-ésimo balde en una hora.

Salida

Imprima un número entero – el mínimo numero de horas requeridas para regar el jardín.

EJEMPLOS

Entrada:
3 6
2 3 5
Salida:
2

Entrada:
6 7
1 2 3 4 5 6
Salida:
7

En el primer ejemplo, la mejor opción es elegir la cubeta que permite regar el segmento de longitud 3. No podemos elegir el cubo que permite regar el segmento de longitud 5 porque entonces no podemos regar todo el jardín.

En la segunda prueba, podemos elegir solo el cubo que nos permite regar el segmento de longitud  1.

Obs: Se debe utilizar punteros para la resolución