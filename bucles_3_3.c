//N3-3) Muestre las tablas de multiplicar del 1 al 10.

#include<stdio.h>

int main () {

int num, count;

for (num=1; num<=10; num++){
    for (count=0; count<=10; count++){
        printf("%4d ", num*count);
        }
    printf("\n");
}


return 0;
}
