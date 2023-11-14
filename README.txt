COMPONENTES: Igor Volodimir Vons Vons, Aitor Uranga Roldán

## EJECUCION ##

Para ejecutar directamente usar el comando "make". Los archivos seran compilados y el programa ejecutado.

Para dar como input un archivo plano con el codigo para ser analizado por el scanner, primero compilar los archivos con "make compilarC" y posteriormente ejecutar "./scanner [filename]".

Se adjuntan 3 archivos de codigo ".alg" que pueden usarse para probar el scanner.

## APRECIACIONES ##

Por el momento para diferenciar si las apariciones de '+' y '-' pegados a un entero o decimal son como operador o como parte de dicho entero o decimal, se fuerza al usuario a dejar un espacio entre ambos si se trata de un operador y quitarlo si se trata del signo.