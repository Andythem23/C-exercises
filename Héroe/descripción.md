Hugo está jugando un videojuego en su computadora, es un RPG. En el juego, el personaje de Hugo recibe la misión de cazar a un monstruo.

Luego de buscar información sobre el monstruo, descubrió que este posee una salud de h2 puntos y un ataque de a2 puntos. Sabiendo esto, Hugo se prepara y compra muchas pociones antes de ir a la caza.

El personaje de hugo tiene una salud de h1 puntos, un ataque de a1 puntos y una gran cantidad de pociones. Cada una de las pociones aumenta sus puntos de salud actuales en c1 puntos.

Cada turno contiene dos fases. En la primera fase Hugo puede atacar al monstruo y causar a1 puntos de daño o curarse para recuperar c1 puntos de salud (su salud puede exceder a h1). En la segunda fase el monstruo ataca al personaje causándole a2 de daño. La batalla termina cuando la salud de Hugo (o la del monstruo) llega a 0 (o menos).

Hugo quiere ganar la batalla y además quiere hacerlo en la menor cantidad posible de turnos (curandose solo cuando sea necesario). Ayudalo a planear su estrategia.

Se puede asumir que Hugo siempre puede ganar y que nunca se le acaban las pociones

Entrada

La primera línea contiene 3 enteros h1, a1, c1, la salud, el ataque y la curación de las pociones de Hugo respectivamente.

La segunda línea contiene 2 enteros h2 y a2, la salud y el ataque del monstruo.

Salida

Las acciones de Hugo como CURAR o ATACAR, al final imprimir la cantidad de turnos utilizados.

Ejemplos

Entrada 

10 6 100 

17 5 
Salida 

ATACAR

CURAR

ATACAR

ATACAR

4


Entrada

11 6 100

12 5
Salida 

ATACAR

ATACAR

2


