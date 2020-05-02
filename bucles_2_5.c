//Reciba tres enteros positivos n, p y m, asegurándose que n<m
//- genere la salida n, n+p, n+2.p, n+3.p, …. k (k<=m y es de la forma n+NRO.p)
//Ejemplo n=2, p=3, m=10, debe generarse: 2, 5, 8
//Ejemplo n=1, p=4, m=21, debe generarse 1,5,9,13,17,21

#include <stdio.h>

int main () {

    int n=1,p=0,m=0;

    while (n>m) {
        printf("Escriba tres nros positivos enteros \n");
        scanf("%d %d %d", &n, &p, &m);
    }


     for (int variacion=0; variacion<=((m-n)/p); variacion++){
        printf("%d \n", (n+(variacion*p)));
       }

return 0;
}
