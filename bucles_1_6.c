#include<stdio.h>
#define MAX 10

int main() {

    int alumn=0;
    float nota, suma;


    do {
        printf ("Ingrese la nota: \n");
        scanf ("%f", &nota);

        alumn++;
        suma+=nota;

        printf("La cantidad de alumnos es de %d \n", alumn);
        printf("El promedio de notas es de %2.1f \n", (suma/alumn));

    } while (alumn<MAX);
    return 0;
}
