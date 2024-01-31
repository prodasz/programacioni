
#include <stdio.h>
 
int main(){
    int edad;
    printf("Escribe tu edad: \n");
    scanf("%d", &edad);
    if (edad >= 18){
        printf("Mayor de edad");
    }else{
        printf("Menor de edad");
    }
} 
