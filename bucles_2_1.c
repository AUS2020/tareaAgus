#include<stdio.h>

//divisores de un nro

int main () {

    int num;

    printf("Por favor ingrese un numero \n");
    scanf("%d", &num);

    for (int i=num; i>=1; i--){

                if (num%i==0){
                    printf ("El numero es divisible por %d \n", i);
                }
    }

return 0;
}
