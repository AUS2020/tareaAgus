#include<stdio.h>

int main (){

    int nro1, nro2;

    printf("Ingrese dos numeros para sumar todos los nros entre ellos \n");
    scanf ("%d %d", &nro1, &nro2);

    while (nro1>nro2){
        printf("Por favor ingrese nuevamente y asegurese de que el segundo sea mas grande que el primero \n");
        scanf ("%d %d", &nro1, &nro2);
    }

    int suma=0;
    for (int i=nro1; i<=nro2; i++){
        suma+=i;
    }
    printf ("la suma de todos los numeros entre ellos con ellos incluidos es %d\n", suma);

return 0;
}
