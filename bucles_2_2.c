//Pida un número por teclado y decir si es un número primo o no. Controlar que el usuario ingrese un número mayor a 0
#include<stdio.h>

int main () {

    int num=0;
    int contp =0;

    do {
    printf("Por favor ingrese un numero \n");
    scanf("%d", &num);
    } while (num==0);


    for (int i=num-1; i>1; i--){

                if (num%i==0){
                    contp=contp+1;
                    }

               }

if (contp>=1 || num==1) {
    printf("el nro no es primo");
}

else {
    printf("el nro es primo");
}

return 0;
}
