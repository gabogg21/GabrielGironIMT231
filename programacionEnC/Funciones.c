// {} #
// \n*
#include <stdio.h> 
#include "funciones.h"
void saludo(void) {

    printf("hola desde la funcion\n");
} 
int suma(int numero1, int numero2){ //este es el prototipo, sin la llave
    int respuesta = numero1 + numero2;

    return respuesta;
}

int resta(int numero3, int numero4){ 
    int resp = numero3 - numero4;

    return resp;
}