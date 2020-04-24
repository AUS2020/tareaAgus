#include<stdio.h>
#define MIN(a,b) (a)<(b)? (a):(b)

int int1, int2;
int main () {
char tilde= 163;

printf("Por favor, ingresa dos n%cmeros enteros para comparar \n", tilde);
scanf ("%d %d", &int1, &int2);
printf ("El menor de los n%cmeros es %d \n", tilde, MIN(int1,int2));


return 0;

}
