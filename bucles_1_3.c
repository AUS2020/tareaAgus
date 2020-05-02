#include <stdio.h>
#define MAX 100
#define MIN 1
#define IMPAR(x) ((x)%2!=0)

int main() {
//int i; ES BUENA PRÁCTICA DECLARAR ESTA VARIABLE ACÁ, POR SI HAY QUE USARLA DE NUEVO Y POR CONVENCIÓN Y ESTÁNDAR
int suma=0;
    for (int i=MIN; i<=MAX; i++){

        if (IMPAR (i)){
            suma+=i;
        }
    }
printf("El resultado es %d \n", suma);

return 0;
}
