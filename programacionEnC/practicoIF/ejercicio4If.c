#include <stdio.h>
int main(void){

    int edad = 0;
    printf("Ingrese su edad: \n");
    scanf("%d",&edad);

    if(edad <13){
        printf("Usted se encuentra en la infancia \n");
    }
    if (edad >= 13 && edad <= 17){
        printf("Usted se encuentra en la adolescencia \n");
    }
    if (edad >= 18){
        printf("Usted se encuentra en la adultez \n");
     
    }
            
            
            
        
     
              
} 