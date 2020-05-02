#include <stdio.h>

//Calcule el promedio de N números, se dejarán de solicitar números hasta que se introduzca el cero.

int main () {
    int num = 1;
    int suma=0;
    float cont=0;

    while (num!=0){

        printf("ingrese numreos para sacar promedio. Presione 0 para dejar de introducir numeros \n");
            scanf ("%d", &num);

            if (num!=0) {
                suma+=num;
                cont++;
            }

    }

    printf("el promedio de los numeros ingresados es %f \n", (suma/cont));

return 0;
}
