###### COMPONENTES: Igor Volodimir Vons Vons, Aitor Uranga Roldán

## EJECUCIÓN ##

Para dar como input un fichero de texto plano con el código para ser analizado, 
primero compilar los archivos del parser usando "make compilarOut"  con lo que 
se compilará el scanner, el parser y los dos módulos adicionales "tabla.h" (donde
se guardan las funciones de las tablas) y "commons.h" (donde se guardan el resto
de funciones usadas), y posteriormente ejecutar "./a.out [filename]".

El código intermedio resultante de la ejecución se almacenará en "output.txt".
Si el archivo no existe se creará uno y se le introducirá el código, si existe
se acoplará el nuevo código al final del contenido del archivo.

Adicionalmente se cuenta con "make clear" para eliminar los archivos resultados
de la compilación, así como el archivo "output.txt" obtenido durante la ejecución
del parser.

Se adjuntan 10 archivos de código ".alg" que pueden usarse para probar el compilador.
Se trata de código de poco sentido lógico, usado principalmente para comprobar si
los resultados de la compilación de código intermedio se corresponden con los 
esperados en cada ejemplo.

## APRECIACIONES ##

El camino elegido para solucionar los conflictos relacionados con diferenciar 
las variables booleanas del resto fue el de PASCAL

No se han llegado a trabajar:
- los literales
- las declaraciones de tipos y constantes
- las acciones y funciones

Si se han implementado: 
- las declaraciones de variables
- las expresiones aritméticas
- las asignaciones
- las expresiones booleanas
- las iteraciones de cota fija y cota expresión
- los saltos condicionales

## ALGORITMOS ##

- programa1 : Declaración de variables y operaciones aritméticas

- programa2 : Operaciones y asignaciones booleanas

- programa3 : Saltos condicionales

- programa4 : Bucle mientras (cota expresión) 

- programa5 : Bucles mientras anidados

- programa6 : Bucle para (cota fija)

- programa7 : Bucles para anidados

- programa8 : Bucle mientra y para

- programa9 : Bucles mientras y saltos condicionales anidados

- programa10: Bucles mientras, para y saltos condicionales anidados