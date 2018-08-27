/*
*Programa que permite llenar dos matrices de 3x3, sumarlas entre si, y calcular su resta
*/
#include <stdio.h>
int A[3][3], B[3][3], C[3][3];
int fila, columna, opcion, bandera = 0, multiplicador, i, suma;
char matriz;
int main(){   
    do{
        printf("*---- Operador de matrices ----*\n\n");
        printf("1.-Llenar matrices\n");
        printf("2.-Sumar matrices\n");
        printf("3.-Restar matrices\n");
        printf("4.-Multiplicar por un numero escalar cualquier matriz\n");
        printf("5.-Multiplicar ambas matrices entre si\n");
        printf("6.-Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);
        switch (opcion){
            case 1:
                printf("Llenando matriz A\n");
                for(fila = 0; fila < 3; fila++){
                    for(columna = 0; columna < 3; columna++){
                        printf("A - [%d][%d]: ", fila, columna);
			            scanf("%d", &A[fila][columna]);
                    }
                }
                printf("\nLlenando matriz B\n");
                for(fila = 0; fila < 3; fila++){
                    for(columna = 0; columna < 3; columna++){
                        printf("B - [%d][%d]: ", fila, columna);
			            scanf("%d", &B[fila][columna]);
                    }
                }
                printf("\nLlenado completo\n\n");
                break;
            case 2:
                //Se supondra que las matrices ya estan llenas
                //La suma se guardara en una tercera matriz
                for(fila = 0; fila < 3; fila++){
                    for(columna = 0; columna < 3; columna++){
                        C[fila][columna] = A[fila][columna] + B[fila][columna];
                    }
                }

                printf("\nLa suma de ambas matrices es: \n");
                for(fila = 0; fila < 3; fila++){
                    for(columna = 0; columna < 3; columna++){
                        printf("%5d", C[fila][columna]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                for(fila = 0; fila < 3; fila++){
                    for(columna = 0; columna < 3; columna++){
                        C[fila][columna] = A[fila][columna] - B[fila][columna];
                    }
                }
                printf("\nLa suma de ambas matrices es: \n");
                for(fila = 0; fila < 3; fila++){
                    for(columna = 0; columna < 3; columna++){
                        printf("%5d", C[fila][columna]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                printf("Que numero desea multiplicar \n");
                scanf("%d", &multiplicador);
                printf("Cual matriz desea multiplicar?: \n");
                scanf("%c", &matriz);          
                
                if (matriz == 'A') {
                    for(fila = 0; fila < 3; fila++){
                        for(columna = 0; columna < 3; columna++){
                            A[fila][columna] *= multiplicador;
                        }
                    }
                    printf("\nLa matriz A multiplicada por %d es igual a : \n", multiplicador);
                    for(fila = 0; fila < 3; fila++){
                        for(columna = 0; columna < 3; columna++){
                            printf("%5d", A[fila][columna]);
                        }
                        printf("\n");
                    }
                }
                else {
                    for(fila = 0; fila < 3; fila++){
                        for(columna = 0; columna < 3; columna++){
                            B[fila][columna] *= multiplicador;
                        }
                    }
                    printf("\nLa matriz B multiplicada por %d es igual a : \n", multiplicador);
                    for(fila = 0; fila < 3; fila++){
                        for(columna = 0; columna < 3; columna++){
                            printf("%5d", B[fila][columna]);
                        }
                        printf("\n");
                    }
                }
                break;
            case 5:
                //Multiplicacion de ambas matrices
                //el resultado se guardara en la matriz C
                for(fila = 0; fila < 3; fila++){
                    for(columna = 0; columna < 3; columna++){
                        suma = 0;
                        for(i = 0; i < 3; i++){
                            suma += A[fila][i] * B[i][columna];
                        }
                        C[fila][columna] = suma;
                    }
                }
                printf("\nEl producto de ambas matrices es : \n");
                for(fila = 0; fila < 3; fila++){
                    for(columna = 0; columna < 3; columna++){
                        printf("%5d", C[fila][columna]);
                    }
                    printf("\n");
                }
                break;
            case 6:
                printf("Saliendo ...\n\n");
                printf("\n\n");
                bandera = 1;
                break;    
            default:
                printf("\n\nOPCION NO VALIDA!!\n\n");
                break;
        }
    } while (bandera == 0);
    
    return 0;
}
