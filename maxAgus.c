#include <stdio.h>
#define MAX(a,b) (a)<(b)? (b):(a)

int num1, num2;
char tilde=163;


int main(){
    printf("Por favor, ingresa dos n%cmeros para comparar \n", tilde);
    scanf("%d %d", &num1, &num2);
    printf ("El n%cmero mayor es %d \n", tilde, MAX(num1,num2));


return 0;
}
