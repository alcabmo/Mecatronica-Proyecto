# Proyecto de Mecatrónica 2022: Robot tractor

_Por Guillermo Bernal Ruíz , Alejandro Cabrera Moreno, José Manuel Tostado Felipe_

**Foto del bicho

## Diseño

Pura chemeada


## Electrónica

|*Cosa* | *Cosa2* |
| -- | -- |


## Comunicación

La parte de comunicación la hemos conseguido usando App Inventor https://appinventor.mit.edu/ para conectar el bluethoot con el movil.
Esta aplicación nos proporciona código para cualquier interfaz personalizada que queramos utilizar. Basicamente sirve para crearnos una interfaz y poder convertir nuestro móvil en un "mando". Esto lo logra por que nos da el código donde 

## Comportamiento

El  robot conta de 2 ruedas motrices y no tiene eje direccional por lo que tiene "controles de tanque" y lo conseguimos girar cambiando velocidades en cada lado de las ruedas. Hemos configurado los controles para que nos podamos abstraer de esto y girarlo con solo 4 acciones basicas: _forward, left, right y back_ . Estas instrucciones son las que vamos a tener en la interfaz gráfica de la aplicación del movil al conectarnos al bluethoot.

**foto de la interfaz q vemos en el movil

## Modelo

EL modelo del robot tiene forma de tractor lo hemos hecho con piezas imprimidas diseñadas con freecad, hemos usado tuercas X Y Z para asamblar las piezas, poner los motores..., en el modelo creado un hueco para poner el arduino y todo el cableado. 
Pesa X kilos, mide Y cm x Z cm.

**explicar lo del eje de las ruedas
**distribución de pesos explicarlo

**zooms a los huecos q tenemos para las tuercas

## Controlador de motores

El controlador de motores es una placa extra que nos permite usar mejor los motores y distribuir los voltios necesarios para que funcionen todos bien.

**mapa de conexiones del driver
