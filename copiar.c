//Escribir un programa en C que copie un array dentro de otro
#include <stdio.h>

void main(){
    int i, n;
    //Se llena el primer array
    printf("Ingrese el tamaño del array: ");
    scanf("%d", &n);

    //se declara el array origen y destino con el tamaño deseado
    int origen[n], destino[n];

    //se llena el array
    printf("Ingresa %d elementos: \n", n);
    for(i = 0; i < n; i++){
        printf("Numero - %d: ", i);
        scanf("%d", &origen[i]);
    }

    //Se copia todos los elementos del array de origen a destino
    for(i = 0; i < n; i++){
        destino[i] = origen[i];
    }

    //Impresion de los dos array
    printf("\nEl array de origen es: \n");
    for(i = 0; i < n; i++){
        printf("%d\t", origen[i]);
    }

    printf("\nY su copia es: \n");
    for(i = 0; i < n; i++){
        printf("%d\t", destino[i]);
    }
    printf("\n\n");
}