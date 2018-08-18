//Escribir un programa en C que lea n numeros en un array y los muestre en reverso
#include <stdio.h>
int main(){
    //Declarar un array de cualquier tamaño
    int datos[50],i,n;
    //Solicitar la cantidad de datos que se an a ingresar
    printf("Impresion en reversa\n");
    printf("---------------------\n\n");
    printf("Ingrese la cantidad de numeros que se van a almacenar\nNo puede ser mayor a 50: ");
    scanf("%d", &n);  
    //Verifica si el numero ingresado no sobrepasa el tamaño del array, en este caso 50
    if (n > 50) {
        printf("La cantidad ingresada supera a la cantidad que se puede almacenar\n");
    }
    else {
        //se llena el array 
        printf("Ingresa %d numeros: \n", n);
        for(i = 0; i < n; i++){
            printf("Numero - %d : ", i);
            scanf("%d",&datos[i]);
        }

        //se muestra los datos ingresado 
        printf("\nLos numeros ingresado en el array son: \n");
        for(i=0;i<n;i++){
            //el 5d deja 5 espacios entre cada impresion
            printf("%5d", datos[i]);
        }
        //se muestra los datos ingresado se forma inversa
        printf("\nLos numeros ingresados en el array de forma inversa: \n");
        for(i=n-1;i>=0;i--){
            printf("%5d", datos[i]);
        }
        printf("\n\n");
    }
        
    return 0;
}
