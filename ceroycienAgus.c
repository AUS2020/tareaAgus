#include<stdio.h>
#define BETWEEN(x) (x>0 && x<100)? ("si"):("no")

int num;
char tilde=163;

int main(){
    printf("Escribe un n%cmero para saber si se encuentra entre 0 y 100 \n", tilde);
    scanf("%d", &num);
    printf ("%s", BETWEEN(num));

return 0;
}
