/*
    Borrar elementos de array
*/
#include <stdio.h>
void main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int i, n = sizeof(arr)/4, pos;
    printf("Los valores actuales del array son: \n");
    for(i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }

    //se ingresa la posicion que se quiere borrar
    printf("\nIngresa la posicion que se quiere borrar: ");
    scanf("%d", &pos);


    //verifica que el dato ingresado sea valido
    if(pos < 0 || pos > n){
        printf("Dato invalido!!", n);
    }
    else{
        //Mueve los elementos del array una posicion a la izquierda
        for(i=pos-1; i<n-1; i++){
            arr[i] = arr[i + 1];
        }

        //Disminuye n en un valor
        n--;
    }

    //Se imprime el array 
    printf("\nLista de datos actualizada : ");
    for(i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
}