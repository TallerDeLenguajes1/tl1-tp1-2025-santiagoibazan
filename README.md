# tp1
### .gitignore
- ¿Por qué es conveniente incluirlo?
Es conveniente porque le podemos decir a Git que archivos y carpetas ignorar, es decir, Git dejara de rasetrearlos cambios en ellos
- ¿Cuándo se debe hacer?
Cuando tenemos en la carpeta del repositorio archivos sensibles, temporales o innecesarios
- ¿Cómo configuraría el archivo .gitignore?
En la raiz del repositorio, utilizando git bash escribo en comando "touch .gitignore" para crear el archivo gitignore
Luego en cada linea agrego los archivos o carpetas que Git debe ignorar
. * se usa para encontrar coincidencias
. ? se usa para encontrar una sola coincidencia
. / se usa para ignorar nombres de ruta relacionados con el archivo .gitignore
. # se usa para añadir comentarios al archivo .gitignore

### Ejercicio 3
## codigo_misterio.c
 - dato_secreto
Al iniciar en programa: 452
Al terminar la funcion f_alpha: 254 (invierte el orden del numero, cambio el nombre de la funcion a invertir_numero)
Al terminar la funcion f_beta: 127 (divide el numero por 2, cambio el nombre de la funcion a mitad_numero)
Al terminar la funcion f_gamma: 137 (suma el numero con cada uno de sus digitos, cambio el nombre a sumarle_sus_digitos)

El parametro p de las funciones la renombro por num

La variable local temp de f_alpha y f_gamma la renombro por aux pues realiza una copia de num para realizar las operaciones
La variable local rev de f_alpha la renombro numeroInvertido pues es la que almacena el numero invertodo para despues asignarla a num

La funcion procesar_enigma al llamar a las 3 funciones realiza una transformacion al numero, lo renombro a invertirDividirSumarDigitos

## codigo_sin_funcionar.c
- -Wimplicit-function-declaration: No esta declarada las funciones printf y scanf, se soluciona agregando la libreria stdio.h
- Segmentation fault: se está pasando como argumento una variable por valor, se soluciona agregando & para pasar la direccion de memoria de la variable
- Error de sintaxis en la linea 17 y 23: falta un punto y coma
- La funcion duplicar_numero no cambia el valor de la variable: se soluciona cambiando al parametro de la funcion por un puntero y pasando como argumento la direccion de memoria de la varible valor1

### Ejercicio 4 G
Esto se debe a que gitignore solo afecta a los archivos que no estaban rastreados, esto significa que si los archivos ya estaban agregados (git add) y confirmados (git commit) Git sigue rastreandolos, por lo tanto apareceran aunque este la regla en gitignore


