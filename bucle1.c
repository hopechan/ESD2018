#include <stdio.h>
#define NUM 8

int main(int argc, char const *argv[]){
    int nums[NUM]; 
    int i;
    int total = 0;
    
    for(i = 0; i < NUM; i++){
        printf("Por favor , introduzca el numero: ");
        scanf("%d", &nums[i]);
    }
    printf("\nLista de numeros: ");
    
    for(i = 0; i < NUM; i++){
        printf("%d ", nums[i]);
        total += nums[i];
    }
    printf("\nLa suma de los numeros es %d", total);
    return 0;
}
