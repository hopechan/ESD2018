#include <stdio.h>

float numero1,numero2,mult,coc,sum;
int res;

int main()
{
    printf("Ingrese 2 enteros de tres digitos\n");
    printf("Ingrese el primero\n");
    scanf("%f", &numero1);
    printf("Ingrese el segundo\n");
    scanf("%f", &numero2);
    printf("\n-------------------------------------");
    printf("\nLos resultados son: \n");
    mult =(numero1*numero2);
    coc = (numero1/numero2);
    res = ((int)(numero1))%((int)(numero2));
    sum = (numero1 + numero2);
    printf("El resultado de la multiplicacion es: ");
    printf("%6.0f",mult);
    printf("\n");

    printf("El resultado del cociente es: ");
    printf("%6.0f",coc);
    printf("\n");

    printf("El residuo es: ");
    printf("%6d",res);
    printf("\n");

    printf("El resultado de la suma es: ");
    printf("%6.0f",sum);
    printf("\n");
}


