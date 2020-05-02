//Calcule la suma de los cuadrados de los 100 primeros números enteros.
#include<stdio.h>

int main(){
    int suma=0;

    for (int i=1; i<=100; i++){

            suma= suma+ (i*i);

    }
printf("la suma de los cuadrados de los primeros cien numeros enters naturales es %d", suma);

return 0;
}
