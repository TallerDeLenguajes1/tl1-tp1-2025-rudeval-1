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