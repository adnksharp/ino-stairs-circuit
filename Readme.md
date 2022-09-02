# Stairs circuit
[![Stair.png](https://i.postimg.cc/Px0T8MjR/Stair.png)](https://postimg.cc/vg7pJfDr)

Circuito de escalera para controlar un relé:

## Hardware y software necesarios
- Placa de desarrollo Arduino 
- 1 relevador SPDT 5V
- 1 diodo 1N4001
- Fuente 12V
- 1 LED
- 1 Resistencia $\displaystyle 470\Omega$ a 1 $\displaystyle K\Omega$
- 2 pulsadores push button
- 2 Resistencias $\displaystyle 10 K\Omega$
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/)

## Funcionamiento
### Variables
- ```Button```: pines donde se conectan las entradas.
- ```Realy```: pin donde se conecta la salida.
- ```c```: variable usada para bucles.
- ```state```: estado de las entradas.
- ```out```: vector que define el estado de la salida.

### Funcionamiento
Usando la matriz ```state``` se leen los dos botones, cuando son presionados se cambia el valor del vector ```out```, si los valores de ```out``` son iguales el **Relay** se pone en alto.
