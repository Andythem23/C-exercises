Algunas veces algunas palabras como "localización" o "internacionalización" son tan largas que escribirlas muchas veces en un solo texto es bastante tedioso.

Consideremos una palabra demasiado larga, si su longitud es estrictamente más de 10 caracteres. Todas las palabras demasiado largas deben ser reemplazadas por una abreviación especial.

Esta abreviatura se hace así: escribimos la primera y la última letra de una palabra y entre ellas escribimos el número de letras entre la primera y la última letra. Ese número está en sistema decimal y no contiene ceros a la izquierda.

Por lo tanto, la "localización" se escribirá como "l10n", y la "internacionalización" se escribirá como "i18n".

Se le sugiere que automatice el proceso de cambiar las palabras con abreviaturas. En eso, las palabras demasiado largas deberían reemplazarse por la abreviatura y las palabras que no son demasiado largas no deberían sufrir ningún cambio.


Entrada

La primera línea contiene un número entero n
tal que (1≤n≤100) . Cada una de las siguientes n

líneas contiene una palabra. Todas las palabras consisten en letras latinas minúsculas y poseen longitudes de 1 a 100 caracteres.
Salida

Imprimir n
líneas. La línea i-ésima debe contener el resultado de reemplazar la palabra i

-ésima de los datos de entrada.
Ejemplo

Entrada:

4
hola
electrocución
teletransportación
electroencefalograma 

Salida:

hola
e11n
t16n
e18a