//Escribir un programa en c que sume todos los elementos de un array
#include <stdio.h>
void main(){
    int datos[50],i,n,suma=0;
    printf("Suma de los elementos de un array\n");
    printf("---------------------------------\n");
    printf("Ingrese la cantidad de elementos que desea sumar: ");
    scanf("%d", &n);
    //Se llena el array
    printf("Ingresa %d numeros: \n", n);
    for(i = 0; i < n; i++){
        printf("Numero - %d: ", i);
        scanf("%d", &datos[i]);
    }
    
    //se suman todos los elementos del array
    for(i = 0; i < n; i++){
        suma += datos[i];
    }

    printf("La suma de todos los elementos dentro del array es %d\n", suma);
}
