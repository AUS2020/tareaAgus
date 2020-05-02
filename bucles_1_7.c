#include <stdio.h>
#define MIN 1
#define MAX 15
#define ENRANGO(x) ((x)>MAX || (x)<MIN)

int main(){
    int num=16;
    char ast=42;

//    printf("Escriba un numero entero entre el 1 y el 15 \n");
//    scanf("%d", &num);

    while (ENRANGO(num)){
        printf("Escriba un numero entero entre el %d y el %d \n", MIN, MAX);
        scanf("%d", &num);
    }

    for (int i=1; i<=num; i++){
    printf("%c", ast);
    }


return 0;
}
