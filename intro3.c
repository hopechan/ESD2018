/**
 * Escribir un programa que lea dos numeros 
 * y visulize el mayor
 **/

#include <stdio.h>

float numero1, numero2, numeroMayor;

int main(int argc, char const *argv[]){
    printf("Comparador de numeros: \n");

    printf("Ingrese el primer numero: \n");
    scanf("%f", &numero1);

    printf("Ingrese el segundo numero: \n");
    scanf("%f", &numero2);

    
    if (numero1 > numero2) {
        numeroMayor = numero1;
    }
    else {
        numeroMayor = numero2;
    }

    printf("El numero mayor es: \n");
    printf("%.2f", numeroMayor);
}
