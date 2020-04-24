#include<stdio.h>
#define PAR(x) x%2==0? ("Es par"):("Es impar")

int nro;
char tilde=163;

int main() {
    printf("Escribe un n%cmero para ver si es par", tilde);
    scanf ("%d", &nro);
    printf ("%s", PAR(nro));


return 0;
}
