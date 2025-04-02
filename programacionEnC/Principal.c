// {} #
// \n*
#include <stdio.h> 
#include "funciones.h"

void saludo(void);

int main(void){

    saludo();

    int a =0;
    int b= 0;
    while (1) {
        scanf("%d",&a);
        scanf("%d",&b);
    
        int resultado=suma(a,b);
        int resultado2 = resta(a,b);
    
        printf("la suma es: %d\n",resultado);
        printf("la resta es: %d\n",resultado2);
    

    }


    return 0;
}
