#include<stdio.h>

int main (){

    int nro1, nro2;

    printf("Ingrese dos numeros para multiplicar todos los nros entre ellos\n");
    scanf ("%d %d", &nro1, &nro2);

    while (nro1>nro2){
        printf("Por favor ingrese nuevamente y asegurese de que el segundo sea mas grande que el primero \n");
        scanf ("%d %d", &nro1, &nro2);
    }

    int multip=1;
    for (int i=nro1; i<=nro2; i++){
        multip*=i;
    }
    printf ("la multip de todos los numeros entre ellos con ellos incluidos es %d\n", multip);

return 0;
}
