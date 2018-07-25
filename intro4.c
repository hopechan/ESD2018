/**
 * Construir un programa que indique si un numero introducido por teclado es positivo,
 * igual a cero o negativo, utilizar para hacer la seleccion el operador ?: (ternario)
**/

#include <stdio.h>

float numero;

int main(int argc, char const *argv[]){
    printf("Uso del operador ?: \n");
    printf("Ingrese el numero: \n");
    scanf("%f", &numero);
    
    if ( numero == 0) {
        printf("El numero es igual a cero");
    }
    else {
        printf( (0 < numero) ? "El numero es positivo" : "El numero es negativo");
    }
}
