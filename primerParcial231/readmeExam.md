# Instrucciones del EXAMEN PRIMER ELEMENTO DE COMPETENCIA

1. Descomprime el archivo que recibiste del docente:
   ```bash
   tar -xzvf primerParcial231.tar.gz
   ```
2. Observa que al inicio no tienes permisos para acceder o editar.
3. Se brindara un archivo de respuestas en la raíz de primerParcial231, `respuestas.txt`, donde detallarás todos los comandos utilizados ,justificaciones y otros datos adicionales.
4. Registra la hora en cada tarea usando date (puede ir en un archivo dentro de cada carpeta o en respuestas.txt).

---
## Tarea 1: Navegación y Creación de Carpetas

1. Restaura los **permisos mínimos** necesarios para poder **leer y modificar** todo en `primerParcial231`.  
2. **Crea la carpeta** `Tarea1`, **crea** otra subcarpeta llamada `extraFolder` y, dentro de ella, un archivo `notesExtra.txt`.
3. Muestra o guarda la salida del comando `date` para registrar la hora en que realizaste esta tarea (puedes redirigir la salida a un archivo, por ejemplo `fechaTarea1.txt`).
4. Explica en `respuestas.txt` los **comandos de navegación** que usaste (`pwd`, `cd`, `ls`, `mkdir`, etc.) y por qué.
---
## Tarea 2: Permisos en Formato Octal

1. Ve a la carpeta `Tarea2`, donde se encuentra `mainConfig.cfg`.
2. **Requisitos de archivos**:
   - Solo el propietario (tú) puede leer y escribir.
   - El grupo y otros usuarios no deben leer ni escribir.

3. Muestra o guarda la salida del comando `date` para registrar la hora en que realizaste esta tarea (puedes redirigir la salida a un archivo, por ejemplo `fechaTarea2.txt`).
4. **Agrega contenido** a `mainConfig.cfg` con `nano`, `vim` o `echo` (al menos 2 líneas).

6. Explica en `respuestas.txt` por qué elegiste ese **número octal**.
---
### Tarea 3: Scripting Básico 

1. En la carpeta `Tarea3`, se encuentra `basicScript.sh`.

2. **Requisitos**:
   - El script debe ejecutarse **solo** por el propietario y el grupo.
   - Otros usuarios pueden leerlo, pero **no** ejecutarlo .
   - Dentro del script, se debe:
     1. Pedir al usuario que ingrese su nombre (usando `read`).
     2. Mostrar un saludo personalizado.
     3. guardar la **ubicación actual** en un archivo.
        - Crear una carpeta llamada `ubicaciones` dentro de `Tarea3`.
        - Guardar la salida de `pwd` (la ubicación actual) en un archivo, por ejemplo `ubicacion.txt` dentro de `ubicaciones`.
     4. guardar la fecha de ejecucion:
        - guardar la fecha y hora (`date`) en un archivo `fechaTarea3.txt`.
     5. Listar y mostrar en terminal el contenido de la carpeta `tarea3` para demostrar la navegación.(puedes usar un `ls -l` o `tree` para listar)
     6. por ultimo Mostrar un mensaje de que se ha finalizado el script

3. **Ejemplo de contenido usando `tree`** 
   ```bash
   ¡Bienvenido al Script del Examen!
    Por favor, ingresa tu nombre: Pedro
    Saludos, Pedro, soy un script básico.
    Contenido de la carpeta (tarea3):
    .
    ├── basicScript.sh
    ├── fechaTarea3.txt
    └── ubicaciones
        └── ubicacion.txt

    1 directory, 3 files
    Script finalizado.

   ```

4. Recueda que la hora de registro ahora se hara ejecutando el script `basicScript.sh` asi que ***no te olvides de ejecutarlo al terminar la tarea***.
5. **Describe** en `respuestas.txt` cómo cambiaste los permisos y por qué.
---

## Tarea 4: Edición con nano o vim 

1. **Ubicación**: Carpeta `Tarea4`, archivo `infoDocument.txt`.
2. **Requisitos de edición**:
   - Abre el archivo con `nano` o `vim` (o tu editor de preferencia).
   - Agrega **al menos 5 líneas** de contenido:
     1. **Fecha y hora actual** (puedes usar `date` y copiarlo manualmente o redirigir la salida).
     2. **Nombre de usuario** obtenido con `whoami`.
     3. **Versión del kernel** usando `uname -r`.
     4. **Distribución de Linux** (extrae al menos el `NAME` o `PRETTY_NAME` de `cat /etc/os-release`).
     5. **Comentario personal** o información adicional (por ejemplo, "Este es mi documento de la Tarea 4").
3. **Comprobar** el contenido:
   - Tras guardar, verifica con:
     ```bash
     cat infoDocument.txt
     ```
    - **PARA QUE USAMOS EL COMANDO `cat`? JUSTIFICA TU RESPUESTA EN `respuestas.txt`**
   
   **Ejemplo de contenido final en `infoDocument.txt`**:
    ```
    Fecha y hora: Fri Mar 31 09:15:37 UTC 2025
    Nombre de usuario: estudiante01
    Versión del kernel: 5.15.0-69-generic
    Distribución de Linux: Ubuntu 22.04 LTS
    Comentario: Este documento corresponde a la Tarea 4 del examen.
    ```

    **Nota**: Así podrás confirmar que se ingresaron 5 líneas útiles y que realmente se utilizó un editor para manipular el archivo.
4. **Registro de hora**:
   - Muestra o guarda la salida del comando `date` para registrar la hora en que realizaste esta tarea (puedes redirigir la salida a un archivo, por ejemplo `fechaTarea4.txt`).
5. **Documentar** en `respuestas.txt`:
   - **Editor utilizado** (`nano`, `vim`, etc.).
   - **Comandos** (si copiaste la salida de `whoami`, `uname -r`, etc.).
   - **Pasos** para guardar y verificar los cambios (p. ej. `Ctrl+O`, `Ctrl+X` en nano, o `:wq` en vim).

   
---
## Tarea 5: Final
1. crear una carpeta llamada `tarea5` 
2. dentro de `tarea5` crear un archivo `entregaFinal.txt`donde alojaran la salida de `tree -p` para ver los directorios de una manera mas visual.
    - **PARA QUE USAMOS EL COMANDO `tree -p` Y PARA QUE ES EL ARGUMENTO `-p` DEL MISMO COMANDO? JUSTIFICA TU RESPUESTA EN `respuestas.txt`**
3. al finalizar la escritura este archivo solo debe tener permisos de lectura y/o ejecucion


---
# CONSIDERACIONES FINALES
1. PROHIBIDO USAR `sudo`, (solo se podra usar para comprimir o descomprimir la carpeta).
2. PROHIBIDO USAR **INTERNET** DURANTE EL EXAMEN.
3. AL FINALIZAR EL EXAMEN EL ARCHIVO `respuestas.txt` SOLO DEBE TENER PERMISOS DE LECTURA Y EJECUCION.
---
# ENTREGABLE
- Comprime la carpeta usando sudo para empaquetar todo con permisos adecuados. Desde un nivel por encima de primerParcial231 el comprimido debe tener el siguiente formato de nombre `<nombreApellido.tar.gz>`, ejecuta:
```bash
sudo tar -czvf nombreApellido.tar.gz primerParcial231/

```
- subir el archivo comprimido a la plataforma **LMS** y a su repositorio **GitHub**
