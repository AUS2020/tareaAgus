#include<stdio.h>
#define DIVIS(x,y) (x)%(y)==0? ("es divisible"):("no es divisible")

int num1, num2;
char tilde=163;

int main() {
    printf("Escribe dos n%meros para saber si el primero es divisible por el segundo \n", tilde);
    scanf ("%d %d",  &num1, &num2);
    printf ("%s", DIVIS(num1,num2));


return 0;
}
