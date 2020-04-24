#include<stdio.h>
#define CONSEC(x,y) ((x==y+1) || (y==x+1))? ("son consec"):("no son consec")

int num1,num2;

int main() {
    printf ("Escribe dos numeros para ver si son consecutivos \n");
    scanf ("%d %d", &num1, &num2);
    printf ("%s", CONSEC(num1,num2));

return 0;
}
