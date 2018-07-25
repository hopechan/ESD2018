/**
    *Una temperatura Celcius puede ser convertida a una temperatura 
    *equivalente F de acuerdo a la siguiente formula:
    *F = (9/5)*C + 32 
    *Escribir un programa que lea la temperatura en grados Celsius y 
    *la escriba en F con 2 cifras decimales
 * */

#include <stdio.h>

float F, c;

int main(int argc, char const *argv[]){
    printf("Conversor Celsius --> Farenheit\n");
    printf("Ingrese la temperatura en Celsius que quiera convertir:  \n");
    scanf("%f", &c);

    //Se realiza la operacion
    F = (c*9/5) + 32;
    printf("La temperatura es: \n");
    printf("%.2f\n", F);
}
