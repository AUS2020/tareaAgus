#include<stdio.h>

//Calcule el factorial de un número entero positvo.

int main () {

    int nro= -1;
    double factorial=1;

    while (nro<0){
    printf("Por fa ingrese un nro entero positivo \n");
    scanf ("%d", &nro);
    }

    if (nro==0){
     printf("el factorial de cero es 0 \n");
    }

    else {

        for (int i=nro; i>=1; i--){
            factorial=factorial*i;
        }

              printf("el factorial es %f \n", factorial);
    }
return 0;
}
