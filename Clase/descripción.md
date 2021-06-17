Tienes un nuevo profesor de teoría de grafos que habla muy rápido. Se te ocurre un plan para poder anotar todo lo que dice el profesor en su clase.

Conoces dos lenguajes, y el profesor está dando la clase en el primero. Las palabras en ambos lenguajes están compuestas por caracteres de letras inglesas minúsculas, cada lenguaje consiste de varias palabras. Para cada lenguaje, todas las palabras son distintas, son deletreadas diferentemente. Además, cada palabra tiene un correspondiente en el otro lenguaje, por cada palabra en cada lenguaje, existe exactamente una palabra en el otro lenguaje que tiene el mismo significado.

Puedes escribir todas las palabras que dice el profesor en el primer o segundo lenguaje. Por supuesto, durante la clase anotas todas las palabras en el lenguaje donde la palabra es mas corta. En caso de longitudes iguales prefieres utilizar el primer lenguaje.
Recibes el texto que el profesor va a leer en la clase. Averigua como anotarías la clase en tus apuntes.

Entrada

La primera línea contiene dos enteros n,m(1≤n≤3000,1≤m≤3000)

, el número de palabras de la clase del profesor y el número de palabras en ambos lenguajes.

Las siguientes m
líneas contienen las palabras. La i-ésima línea contiene dos cadenas ai,bi significando que la palabra ai pertenece al primer lenguaje, la palabra bi

al segundo lenguaje y estas dos palabras tienen el mismo significado. Está garantizado que ninguna palabra aparece en ambos lenguajes, y que cada palabra aparece solamente una vez en su lenguaje.

La siguiente línea contiene n
cadenas separadas por espacio c1,c2,...,cn, el texto de la clase. Está garantizado que cada cadena ci pertenece al conjunto de cadenas {a1,a2,...,an}

.

Todas las cadenas en la entrada son no vacías, cada una compuesta por no más de 10 letras inglesas minúsculas.
Salida

Imprimir exactamente n

palabras: como anotarás la clase en tu cuaderno. Imprimir cada palabra de la clase en el mismo orden que en la entrada.
EJEMPLOS

Entrada:
5 3
joll wuqrd
euzf un
hbnyiyc rsoqqveh
hbnyiyc joll joll euzf joll
Salida:
hbnyiyc joll joll un joll

Entrada:
4 3
codeforces codesecrof
contest round
letter message
codeforces contest letter contest
Salida:
codeforces round letter round