/*
    Programa hecho en C que inserta elementos en una posicion especifica 
    Esto sobreescribe los datos que ya existian en el array
*/
#include <stdio.h>
void main(){
    //Array con 10 elementos ya definidos
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int i, insertar, posicion, n = sizeof(array)/4;
    printf("Los valores actuales del array son: \n");
    for(i = 0; i < n; i++){
        printf("%d\t", array[i]);
    }
    
    printf("\n¿Que numero desea ingresar?: ");
    scanf("%d", &insertar);

    printf("\n¿En que posicion quiere guardar el numero?: ");
    scanf("%d", &posicion);

    //verifica que la posicion exista en el array
    
    if (posicion > n +1 || posicion <= 0) {
        printf("Posicion invalida!!");
    }
    else {
        //si la posicion en valida primero se hace espacio en el array, moviendo a la derecha
        for(i = n; i >= posicion; i--){
            array[i] = array[i -1];
        }
        //Se inserta el nuevo elemento en la posicion deseada
        array[posicion - 1] = insertar;
        n++;
        //Se imprime el nuevo array
        printf("Los valores actualizados del array son: \n");
        for(i = 0; i < n; i++){
            printf("%d\t", array[i]);
        }
        printf("\n\n");
    }

}
