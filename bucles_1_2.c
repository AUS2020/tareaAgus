#include <stdio.h>
#define MAX 100
#define MIN 1
#define SALTO 1

int main() {

    for (int i=MIN; i<=MAX; i+=SALTO){

        if (i%2!=0){
            printf("%d \n", i);

        }
    }


return 0;
}
