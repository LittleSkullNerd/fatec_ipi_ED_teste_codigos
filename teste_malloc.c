#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v, i;
    for(i = 1; i <= 100000; i++){
        v = (int *) malloc (500000 * sizeof(int));
        printf("%p\n", v);
        //usado para liberar depois de usar o espaço da memoria apontado por v
        free(v); 
    }
    return 0;
}

//malloc - aloca um bloco de tamanho de tamanho dentro dos parametros, vai imprimir endereço de memoria ate ter espaço na memoria 
//sizeof é um compilador