# Proyecto de Mecatrónica 2022: Robot tractor

_Por Guillermo Bernal Ruíz , Alejandro Cabrera Moreno, José Manuel Tostado Felipe_

jajajajaajajjajajajaajajajajajajajaajaj

## Diseño

Pura chemeada


## Electrónica

| **Componente** | **Descripción** |
| -- | -- |
| [Arduino](https://docs.arduino.cc/static/9d6ed041fec691039663ae42f50fabcc/A000066-datasheet.pdf) | Arduino |
| [Shield](http://www.handsontec.com/dataspecs/L298N%20Motor%20Driver.pdf) | L298N Dual H-Bridge Motor Driver |
| [Motor](https://www.arduino.cc/documents/datasheets/DCmotor6_9V.pdf) | DC motor 6/9V |
| [Bluetooth](https://4.imimg.com/data4/CT/HK/MY-5859485/bluetooth-module.pdf) | Módulo Bluetooth HC-05 |

El esquema del circuito es el siguiente:

![](https://github.com/alcabmo/Mecatronica-Proyecto/blob/main/resources/circuito.jpg?raw=true)


## Comunicación y aplicación

La parte de comunicación la hemos conseguido usando App Inventor https://appinventor.mit.edu/ para conectar el bluethoot con el movil.
Esto es usado con el fin de transmitir las acciones de movimiento desde la aplicación del móvil usando Bluetooth.

<p align="center">
  <img width="200" height="433" src="https://github.com/alcabmo/Mecatronica-Proyecto/blob/main/resources/app_resize.jpg">
</p>

## Comportamiento

El  robot conta de 2 ruedas motrices y no tiene eje direccional por lo que tiene "controles de tanque" y lo conseguimos girar cambiando velocidades en cada lado de las ruedas. Hemos configurado los controles para que nos podamos abstraer de esto y girarlo con solo 4 acciones basicas: _forward, left, right y back_ . Estas instrucciones son las que vamos a tener en la interfaz gráfica de la aplicación del movil al conectarnos al bluetooth.

Aunque existe la opción de comandar tú mismo la potencia de cada rueda a través de los dos sliders de la aplicación, uno para cada rueda.

No se si poner foto del codigo aqui la verdad

y a solo queda poner un video final y ya
