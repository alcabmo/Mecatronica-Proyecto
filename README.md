# Proyecto de Mecatrónica 2022: Robot tractor

_Por Guillermo Bernal Ruíz , Alejandro Cabrera Moreno, José Manuel Tostado Felipe_

## Resumen Proyecto

Este es nuestro proyecto para la asignatura de mecatrónica de la URJC del año 2022.
El proyecto consiste en un tractor teleoperado via bluetooth que consta de 4 ruedas de las cuales únicamente las traseras son motrices.

## Diseño
![imagen](https://user-images.githubusercontent.com/73531592/208452707-42b26622-e73e-4a4f-aeae-dedfced8e34f.png)

El diseño del robot se basa en un tractor tradicional lo que significa que las ruedas de atras tienen mas diametro que las delanteras con una alta suspensión. El diseño está completamente diseñado en FreeCad de cero y impreso utilizando impresion 3D.

### Chasis.
![imagen](https://user-images.githubusercontent.com/73531592/208453772-cdc978f5-1f81-4b70-9623-f3bffe6b77e1.png)
![imagen](https://user-images.githubusercontent.com/73531592/208454047-8d43f8cc-3f0b-4e08-a38f-64a3f7037b7c.png)
![imagen](https://user-images.githubusercontent.com/73531592/208450606-d28f24f8-1644-49a0-8df3-996d30b71694.png)

### Carroceria.
![imagen](https://user-images.githubusercontent.com/73531592/208450947-a4a93bb3-27c6-4689-aeba-2b7de24e49ad.png)
![imagen](https://user-images.githubusercontent.com/73531592/208451044-f2b6e5b6-26dc-4919-a29e-9faa88c7f64c.png)
![imagen](https://user-images.githubusercontent.com/73531592/208451148-1122d24e-8b2a-45bf-93e0-ba6afa25c5bb.png)
![imagen](https://user-images.githubusercontent.com/73531592/208451908-7c822283-65f7-480c-bf80-b368d6385903.png)


### Ruedas.
![imagen](https://user-images.githubusercontent.com/73531592/208451683-e8bc1db5-6fba-4c72-8f81-447099dceadc.png)

### Soporte.
![imagen](https://user-images.githubusercontent.com/73531592/208452285-766e6b7f-644f-41a8-a42f-f2bfef17f4c7.png)


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
