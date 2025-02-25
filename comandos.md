# Unidad: **Comandos y Scripts Básicos en Shell en Ubuntu**  

## **1. Introducción**  
El shell es la interfaz entre el usuario y el sistema operativo en Linux. Aprender comandos básicos y scripting en Bash permite automatizar tareas y optimizar el uso del sistema.

## **2. Comandos Básicos**
### **Navegación**
- `pwd` → Muestra el directorio actual.
- `ls` → Lista archivos y directorios.
- `cd` → Cambia de directorio.

### **Manipulación de archivos**
- `touch` → Crea un archivo vacío.
- `mkdir` → Crea un directorio.
- `rm` → Elimina archivos o directorios.
- `cp` → Copia archivos o directorios.
- `mv` → Mueve o renombra archivos.

### **Permisos**
- `chmod` → Cambia permisos de archivos.
- `chown` → Cambia el propietario de un archivo.

### **Procesos**
- `ps` → Muestra procesos en ejecución.
- `kill` → Termina un proceso.
- `top`, `htop` → Monitorea procesos.

### **Redirección y Pipes**
- `>` → Redirige salida a un archivo.
- `>>` → Agrega salida a un archivo.
- `|` → Conecta comandos.
- `<` → Redirige entrada.

### **Búsqueda**
- `grep` → Busca texto en archivos.
- `find` → Encuentra archivos.
- `locate` → Busca archivos rápidamente.

### **Información del sistema**
- `df` → Espacio en disco.
- `du` → Uso de espacio de archivos.
- `free` → Memoria RAM disponible.
- `uptime` → Tiempo encendido del sistema.
- `uname` → Información del sistema.

### **Redes**
- `ping` → Prueba conectividad.
- `wget`, `curl` → Descarga archivos.
- `netstat` → Muestra conexiones.
- `ifconfig/ip` → Muestra configuración de red.

## **3. Creación de Scripts en Bash**
### **Estructura**  
- Iniciar con `#!/bin/bash`
- Definir variables: `var="Hola"`
- Recibir entrada: `read variable`
- Imprimir salida: `echo "Texto"`
- Condiciones: `if [ "$var" == "valor" ]; then ... fi`
- Bucles: `for`, `while`
- Funciones: `function nombre() { ... }`

## **4. Ejemplo Rápido**
```bash
#!/bin/bash
echo "Ingrese su nombre:"
read nombre
echo "Hola, $nombre"
```
## * COMO LO EJECUTO?