# Presentación de nuestro proyecto de Mecatrónica 2022

_Por Guillermo Bernal , Alejandro Cabrera , José Manuel Tostado_

**Foto del bicho

Nuestro proyecto para la asignatura es un tractor de 2 ruedas ruedas motrices teleoperado por app desde el telefono movil.

## Ingredientes

Para hacer nuestro proyecto hemos usado los siguientes elementos:

**-Arduino Uno:**


![image](https://user-images.githubusercontent.com/78978241/206703556-9beb82ca-396a-45dd-9fb6-56bf9c305731.png)

**-4 motores de 3-9V:**


![image](https://user-images.githubusercontent.com/78978241/206705390-c4e8e6f5-bd84-41fc-ac36-bc11a7f63d9b.png)


**-Módulo Bluethoot HC-05:**


![image](https://user-images.githubusercontent.com/78978241/206704546-e121a6b2-a9e2-4671-84cf-f7c412763b5b.png)


**-Módulo controlador de motores L293d:**



![image](https://user-images.githubusercontent.com/78978241/206707873-11c1d9f7-31c2-4e62-b3a0-874cdcf36a75.png)

**-El chasis impreso**

**foto del chasis en el freecad

**- Ruedas**

**foto de las ruedas en el freecad

## Herramientas usadas:

**-Freecad:** Para la parte de modelado del chasis


![image](https://user-images.githubusercontent.com/78978241/206735960-db3ce73c-ee41-41e9-9f8d-a237ad81be0d.png)

**-Adruino IDE:** Para programar el comportamiento


![image](https://user-images.githubusercontent.com/78978241/206736251-36cb75ad-4bba-4944-8b28-d04b4dac48ac.png)


## Comunicación

La parte de comunicación la hemos conseguido usando App Inventor https://appinventor.mit.edu/ para conectar el bluethoot con el movil.
Esta aplicación nos proporciona código para cualquier interfaz personalizada que queramos utilizar. Basicamente sirve para crearnos una interfaz y poder convertir nuestro móvil en un "mando". Esto lo logra por que nos da el código donde 

## Comportamiento

El  robot conta de 2 ruedas motrices y no tiene eje direccional por lo que tiene "controles de tanque" y lo conseguimos girar cambiando velocidades en cada lado de las ruedas. Hemos configurado los controles para que nos podamos abstraer de esto y girarlo con solo 4 acciones basicas: _forward, left, right y back_ . Estas instrucciones son las que vamos a tener en la interfaz gráfica de la aplicación del movil al conectarnos al bluethoot.

**foto de la interfaz q vemos en el movil

## Modelo

EL modelo del robot tiene forma de tractor lo hemos hecho con piezas imprimidas diseñadas con freecad, hemos usado tuercas X Y Z para asamblar las piezas, poner los motores..., en el modelo creado un hueco para poner el arduino y todo el cableado. 
Pesa X kilos, mide Y cm x Z cm.

**zooms a los huecos q tenemos para las tuercas

## Controlador de motores

El controlador de motores es una placa extra que nos permite usar mejor los motores y distribuir los voltios necesarios para que funcionen todos bien.

**mapa de conexiones del driver
