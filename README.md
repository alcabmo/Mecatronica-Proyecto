# Proyecto de Mecatrónica 2022: Robot tractor

_Por Guillermo Bernal Ruíz , Alejandro Cabrera Moreno, José Manuel Tostado Felipe_

## Resumen Proyecto

Este es nuestro proyecto para la asignatura de mecatrónica.
El proyecto consiste en un tractor teleoperado via bluetooth que consta de 4 ruedas de las cuales únicamente las traseras son motrices.

<p align="center">
  <img src="https://i.gyazo.com/3658b0d9328061116e11e5675215771e.jpg">
</p>

<p align="center">
  <img src="https://i.gyazo.com/3b3d2802e6a005d74da43f8e7d361fbc.jpg">
</p>



https://user-images.githubusercontent.com/78974537/208654224-3580d16f-b76a-4f96-a24b-c22d29c323b9.mp4



## Por qué un tractor

<p align="center">
  <img src="https://s3-eu-west-1.amazonaws.com/topmaquinaria-static/aimages/189/361/4fa/77a/48b/ae3/346094/standard/49083332_large_26084.jpg?1633377784">
</p>


## Diseño

<p align="center">
  <img src="https://user-images.githubusercontent.com/73531592/208531344-dac4fac3-b44c-446f-a8aa-40f29f62884f.gif" alt="animated" />
</p>

El diseño del robot se basa en un tractor tradicional. El diseño está completamente diseñado en FreeCad de cero e impreso utilizando impresion 3D.


### Chasis.
<p align="center">
  <img src="https://user-images.githubusercontent.com/73531592/208457571-cf3ba951-1695-4452-bf56-e7565302b5b4.gif" alt="animated" />
</p>
<p align="center">
  <img src="https://user-images.githubusercontent.com/73531592/208457317-7647a46b-a52a-4500-9fc7-923a26a336d9.gif" alt="animated" />
</p>
<p align="center">
  <img src="https://user-images.githubusercontent.com/73531592/208454266-962cde31-06b8-4026-8622-24d7568c898b.png">
</p>

### Carroceria.
<p align="center">
  <img src="https://user-images.githubusercontent.com/73531592/208450947-a4a93bb3-27c6-4689-aeba-2b7de24e49ad.png">
  <img src="https://user-images.githubusercontent.com/73531592/208451044-f2b6e5b6-26dc-4919-a29e-9faa88c7f64c.png">
  <img src="https://user-images.githubusercontent.com/73531592/208451148-1122d24e-8b2a-45bf-93e0-ba6afa25c5bb.png">
  <img src="(https://user-images.githubusercontent.com/73531592/208451908-7c822283-65f7-480c-bf80-b368d6385903.png">
</p>

### Ruedas.
<p align="center">
  <img src="https://user-images.githubusercontent.com/73531592/208451683-e8bc1db5-6fba-4c72-8f81-447099dceadc.png">
</p>

### Soporte.
<p align="center">
  <img src="https://user-images.githubusercontent.com/73531592/208452285-766e6b7f-644f-41a8-a42f-f2bfef17f4c7.png">
</p>


## Electrónica

| **Componente** | **Descripción** |
| -- | -- |
| [Arduino](https://docs.arduino.cc/static/9d6ed041fec691039663ae42f50fabcc/A000066-datasheet.pdf) | Arduino Uno |
| [Shield](http://www.handsontec.com/dataspecs/L298N%20Motor%20Driver.pdf) | L298N Dual H-Bridge Motor Driver |
| [Motor](https://www.arduino.cc/documents/datasheets/DCmotor6_9V.pdf) | 2 x DC motor 6/9V |
| [Bluetooth](https://4.imimg.com/data4/CT/HK/MY-5859485/bluetooth-module.pdf) | Módulo Bluetooth HC-05 |
| [Bateria](https://es.rs-online.com/web/p/pilas-de-9v/5145928) | Pila Petaca 9V |

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

<p align="center">
  <img src="https://i.gyazo.com/9d71dff40cf3c9cc9527aad23cc65a3f.png">
</p>

https://user-images.githubusercontent.com/78974537/208652609-15b404b8-8327-4dac-9a47-38ac13c147a0.mp4


https://user-images.githubusercontent.com/78974537/208652644-55a14042-e2e0-49c0-bb29-6b3958290178.mp4





