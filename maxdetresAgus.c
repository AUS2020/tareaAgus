#include<stdio.h>
#define MAX(x,y,z) (x>y && x>z)? (printf("el mas grande es %d", x)):((y>z && y>x)? (printf("el mas grande es %d", y)) : (printf("el mas grande es %d", z)))

int num1,num2, num3;

int main() {
    printf ("Escribe tres numeros para ver el mayor \n");
    scanf ("%d %d %d", &num1, &num2, &num3);
    printf ("%s", MAX(num1,num2,num3));

return 0;
}
