# TP 1
## **Ejercicio 2** 
El archivo _**.gitignore**_ es conveniente incluirlo ya que se utiliza para especificar qué archivos o directorios deben ser ignorados por Git, que no se agregarán al repositorio ni se rastrearán. Es para evitar que archivos innecesarios o confidenciales sean incluidos. 

El archivo se debe crear desde el inicio del proyecto, antes de hacer el primer commit, asegurando que archivos que no se quieran rastrear nunca sean parte del repositorio.

### **Cómo ignorar un archivo**
1. Crear el archivo .gitignore si aún no existe
2. Abrirlo y agregar la línea con el nombre del archivo que se desea ignorar, por ejemplo: _ignorado.txt_
3. Guardar los cambios y agregar el archivo .gitignore al staging con _git add .gittignore_
4. Hacer commit y push de los cambios al repositorio. 

*Nota:* Si un archivo ya fue agregado previamente al repositorio, no será ignorado automáticamente. En ese caso, es necesario eliminarlo del seguimiento de Git manualmente.

## **Ejercicio 2** 
**f.**  
_Codigo misterio:_ 
    ### f_alpha:  
        -temp = 452
        -rev = 0, inicializa la variable
        -mientras temp es mayor a 0
            it 1: 
                rev = 0*10 + 2 = 2 (multiplica por 10 rev y le suma el último dígito de temp)
                temp = 45 (quita el último dígito de temp)
            it 2:
                rev = 2*10 + 5 = 25
                temp = 4
            it 3:
                rev = 25*10 + 4 = 254
                temp = 0
         se corta el bucle
        -asigna 254 a la variable a la que apunta el puntero.
        **conclusión:** f_alpha invierte el número recibido. temp es la variable auxiliar para recorrer el numero original. rev va construyendo el numero invertido dígito a dígito.

    ### f_beta:
    

_Codigo sin funcionar:_ 
    Errores encontrados: 
    - No se incluyeron los archivos de cabecera necesarios.
    - En la línea 12, la implementación del scanf es incorrecta ya que falta el operador '&', que permite pasar la dirección de memoria de la variable para que la función pueda modificar su valor. 
    - La función **duplicar_numero** no produce ningún cambio en la variable original, ya que trabaja con una corpia del valor. Para modificarla correctamente, es necesario trabajar con punteros. Para ello, pasamos como parámetro un puntero a entero y modificamos su contenido con el operador de indirección '*'.
    - En la invocación de la función (línea 20), debemos pasar como argumento la dirección de memoria de la variable ya que estamos trabajando con punteros. 