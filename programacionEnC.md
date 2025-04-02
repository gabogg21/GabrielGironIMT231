# Guía de Programación en C desde la Terminal (Ubuntu 22-24)


## 1. Introducción

El lenguaje C es uno de los lenguajes de programación más usados y antiguos que existen. Se utiliza para desarrollar sistemas operativos, drivers, aplicaciones de escritorio y mucho más. Con esta guía aprenderás a:

1. Instalar y configurar un compilador C (en Ubuntu).
2. Crear, compilar y ejecutar programas C desde la terminal.
3. Conocer los tipos de datos, sentencias básicas y control de flujo.
4. Escribir funciones y organizar tu código.

---

## 2. Instalación del compilador `gcc`

### 2.1. ¿Por qué `gcc`?
`gcc` (GNU Compiler Collection) es el compilador estándar para C en la mayoría de distribuciones Linux. Es rápido, confiable y gratuito. Además, al instalar `build-essential`, también obtendremos otros paquetes útiles para la compilación de programas en C/C++.

### 2.2. Pasos de instalación

1. **Abrir la terminal**  
   - Presiona <kbd>Ctrl</kbd> + <kbd>Alt</kbd> + <kbd>T</kbd> para abrirla.

2. **Actualizar el sistema**  
   ```bash
   sudo apt update && sudo apt upgrade
   ```
   ¿Por qué?
   Para asegurarnos de que tu lista de paquetes y librerías esté al día y así evitar conflictos al instalar gcc.
3. **Instalar gcc y otras herramientas**
   ```bash
   sudo apt install build-essential
   ```
   ¿Por qué build-essential?
   Este paquete contiene gcc, g++, make y otras utilidades esenciales para compilar y construir proyectos en C y C++.
4. **Verificar la instalación de gcc**
   ```bash
   gcc --version
   ```
## 3. Creación y ejecución de un primer programa en C

### 3.1. Crear un archivo fuente

Usa el editor de texto de tu preferencia (en la terminal suele usarse `nano`, `vim` o `gedit`). Aquí usaremos `nano`:
```bash
nano hola.c
```
### 3.2. Escribir el código
```c
#include <stdio.h>

int main() {
    printf("Hola, mundo\n");
    return 0;
}

```
¿Por qué #include <stdio.h>?
Incluye las declaraciones de funciones para entrada y salida estándar, como printf y scanf.

¿Por qué int main()?
Es la función principal de todos los programas en C. El sistema operativo inicia la ejecución del programa llamando a main.
### 3.3. Compilar el programa
```bash
gcc hola.c -o hola
```
### 3.4. Ejecutar el programa
```bash
./hola
```
## 4. Estructura básica de un programa en C

Un programa en C casi siempre seguirá este patrón:

```c
#include <stdio.h>     // Librería de entrada/salida

int main() {
    // Código aquí
    return 0;          // Indica que el programa terminó exitosamente
}
```
¿Por qué #include <stdio.h>?
Para habilitar funciones como printf, scanf, etc.

¿Por qué return 0;?
En C, un valor de retorno de 0 en main significa que el programa finalizó correctamente (sin errores).

## 5. Variables y tipos de datos

Las variables se utilizan para almacenar valores que el programa necesitará. Los tipos de datos más comunes son:

- `int` – números enteros (ej. 5, -3, 0)
- `float` – números decimales (precisión simple)
- `double` – números decimales (precisión doble)
- `char` – un solo carácter (ej. 'A')
- `char[]` – cadenas de caracteres (ej. "Hola")

```c
#include <stdio.h>

int main() {
    int edad = 25;
    float pi = 3.14;
    double gravedad = 9.81;
    char letra = 'C';
    char nombre[] = "Carlos";

    printf("Edad: %d\n", edad);
    printf("Pi: %f\n", pi);
    printf("Gravedad: %lf\n", gravedad);
    printf("Letra: %c\n", letra);
    printf("Nombre: %s\n", nombre);

    return 0;
}
```
¿Por qué printf usa %d, %f, %c, %s, etc.?
Para formatear la salida según el tipo de dato:

%d para enteros,

%f para flotantes,

%c para caracteres,

%s para cadenas de texto.
## 6. Entrada y salida

Para leer datos del usuario, se suele usar `scanf`:

```c
#include <stdio.h>

int main() {
    int edad;
    printf("Ingresa tu edad: ");
    scanf("%d", &edad); // 'edad' debe ir con '&' para pasar su dirección de memoria
    printf("Tienes %d años.\n", edad);
    return 0;
}
```
¿Por qué &edad en scanf?
scanf necesita saber dónde (en qué dirección de memoria) colocar el valor que el usuario introduzca. Por eso se requiere el operador &.

## 7. Condicionales

Los condicionales permiten ejecutar diferentes bloques de código en función de si se cumple o no una condición.

```c
#include <stdio.h>

int main() {
    int edad;
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    } else {
        printf("Eres menor de edad.\n");
    }

    return 0;
}
```
¿Por qué usar if (edad >= 18)?
La expresión booleana edad >= 18 devuelve true si la edad es 18 o más, y ejecuta el bloque de código correspondiente.

## 8. Bucles

Los bucles se usan para repetir un bloque de código varias veces. Existen tres estructuras de bucle principales en C.

### 8.1. `while`

```c
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        printf("i vale %d\n", i);
        i++;
    }
    return 0;
}
```
Explicación:
Mientras la condición i < 5 sea verdadera, el bloque de código se ejecutará. Tras cada ejecución, se incrementa i.

### 8.2. for

```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("i vale %d\n", i);
    }
    return 0;
}
```
Explicación:
Se inicializa i a 0, el bucle se repite mientras i < 5, y tras cada iteración se hace i++.

### 8.3. do...while

```c
#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("i vale %d\n", i);
        i++;
    } while (i < 5);
    return 0;
}
```
Explicación:
Este bucle se ejecuta al menos una vez antes de verificar la condición al final. Es útil cuando deseas que el bloque de instrucciones se ejecute al menos una vez, independientemente de la condición.
## 9. Funciones

Las funciones permiten estructurar y reutilizar el código. Una función se define indicando su tipo de retorno, su nombre y sus parámetros (si los tiene). Esto facilita la lectura y el mantenimiento de tus programas.

### 9.1. Función simple sin parámetros ni retorno

```c
#include <stdio.h>

// Función sin retorno y sin parámetros
void saludar() {
    printf("Hola desde una función!\n");
}

int main() {
    saludar();
    return 0;
}
```
¿Por qué usar funciones?

Para modularizar y organizar mejor el código.

Para reutilizar lógica en diferentes partes del programa.

Para facilitar la lectura y la depuración (al aislar secciones de código).

### 9.2. Función con parámetros y con valor de retorno

```c
#include <stdio.h>

// Función que recibe un entero y retorna un entero
int cuadrado(int x) {
    return x * x;
}

int main() {
    int numero = 5;
    // Imprimir el cuadrado del número 5
    printf("El cuadrado de %d es %d\n", numero, cuadrado(numero));
    return 0;
}
```
¿Por qué return x * x;?
Devuelve el resultado de la operación x * x al lugar donde se llamó la función.

¿Por qué especificar int antes de cuadrado?
Para indicar que la función devolverá un valor de tipo entero.

Estas definiciones de funciones te permiten dividir programas grandes en partes más pequeñas y manejables, haciéndolos más fáciles de comprender y mantener.