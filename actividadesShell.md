# Prácticas de Comandos en Shell - Ubuntu

## **1. Explorando el sistema de archivos**  
📌 **Objetivo:** Practicar la navegación entre directorios.  

🔹 **Instrucciones:**  
1. Crea un archivo de script llamado `practica1.sh`.  
2. Dentro del script, escribe los comandos para realizar las siguientes acciones:  
   - Mostrar el directorio actual (`pwd`).  
   - Acceder a la carpeta `/tmp` y listar su contenido (`ls`).  
   - Volver al directorio personal (`cd ~`).  
   - Crear una carpeta llamada `practica_shell` en el directorio personal (`mkdir`).  
   - Acceder a `practica_shell` (`cd practica_shell`).  
   - Mostrar el directorio actual (`pwd`).  
3. Guarda los cambios, asigna permisos de ejecución con:  
   ```bash
   chmod +x practica1.sh

## **2. Creación y manipulación de archivos**  
📺 **Objetivo:** Aprender a crear, copiar, mover y eliminar archivos.  

🔹 **Instrucciones:**  
1. Crea un archivo de script llamado `practica2.sh`.  
2. Dentro del script, escribe los comandos para realizar las siguientes acciones:  
   - Crear un archivo vacío `archivo1.txt` (`touch`).  
   - Escribir `"Hola, este es un archivo de prueba"` en `archivo1.txt` (`echo`).  
   - Copiar `archivo1.txt` a `archivo_copia.txt` (`cp`).  
   - Crear una carpeta `backup` dentro de `practica_shell` (`mkdir`).  
   - Mover `archivo_copia.txt` a `backup` (`mv`).  
   - Eliminar `archivo1.txt` (`rm`).  
   - Listar los archivos de `backup` (`ls backup`).  
3. Guarda los cambios, asigna permisos de ejecución y ejecútalo:  
   ```bash
   chmod +x practica2.sh
   ./practica2.sh

## **3. Creación de múltiples archivos y directorios**  
📺 **Objetivo:** Automatizar la creación de archivos y directorios con un solo comando.  

🔹 **Instrucciones:**  
1. Crea un archivo de script llamado `practica3.sh`.  
2. Dentro del script, escribe los comandos para realizar las siguientes acciones:  
   - Crear tres directorios: `documentos`, `imagenes`, `scripts` (`mkdir`).  
   - Crear cinco archivos dentro de `documentos`: `nota1.txt`, `nota2.txt`, `nota3.txt`, `nota4.txt`, `nota5.txt` (`touch`).  
   - Mover `nota3.txt` y `nota4.txt` a la carpeta `backup` (`mv`).  
   - Eliminar la carpeta `imagenes` (`rm -r`).  
3. Guarda los cambios, asigna permisos de ejecución y ejecútalo:  
   ```bash
   chmod +x practica3.sh
   ./practica3.sh

## **4. Cambiando permisos de archivos con chmod**  
📺 **Objetivo:** Modificar permisos de archivos para restringir o habilitar accesos.  

🔹 **Instrucciones:**  
1. Crea un archivo de script llamado `practica4.sh`.  
2. Dentro del script, escribe los comandos para realizar las siguientes acciones:  
   - Crear un archivo `script.sh` (`touch`).  
   - Escribir dentro de `script.sh`:  
     ```bash
     #!/bin/bash
     echo "Este es un script de prueba"
     ```  
   - Mostrar los permisos actuales de `script.sh` (`ls -l`).  
   - Cambiar los permisos para que el usuario tenga **solo lectura y ejecución** (`chmod 500`).  
   - Intentar modificar el archivo (`nano script.sh` o `vim script.sh`).  
   - Volver a darle permisos de escritura (`chmod 700`).  
3. Guarda los cambios, asigna permisos de ejecución y ejecútalo:  
   ```bash
   chmod +x practica4.sh
   ./practica4.sh


## **5. Simulación de acceso restringido**  
📺 **Objetivo:** Configurar permisos para restringir y liberar acceso a archivos.  

🔹 **Instrucciones:**  
1. Crea un archivo de script llamado `practica5.sh`.  
2. Dentro del script, escribe los comandos para realizar las siguientes acciones:  
   - Crear un archivo llamado `secreto.txt` con un mensaje dentro:  
     ```bash
     echo "Mensaje confidencial" > secreto.txt
     ```  
   - Cambiar sus permisos para que **solo el propietario pueda leer y escribir** (`chmod 600`).  
   - Intentar abrir el archivo con otro usuario o cambiando a root.  
   - Cambiar los permisos para que **todos los usuarios puedan leerlo, pero solo el propietario pueda escribir** (`chmod 644`).  
   - Mostrar los permisos finales con `ls -l`.  
3. Guarda los cambios, asigna permisos de ejecución y ejecútalo:  
   ```bash
   chmod +x practica5.sh
   ./practica5.sh

