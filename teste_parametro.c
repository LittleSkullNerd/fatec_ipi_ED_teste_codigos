#include <stdio.h>

void f1(int a){
    a = a + 1;
    printf("a dentro de f1 alterada: %d\n", a);
}

void f2(int *a){
    *a = *a + 1; //o conteudo que aponta passa a receber o que ele ja tem + 1
    printf("conteudo referenciado pelo ponteiro a de f2: %d\n", *a); //eu quero o conteudo que a esta apontando
}

int main(){
    int a = 10; 
    f1(a); //f1 pega o valor de a
    printf("a depois de f1 nao alterada: %d\n", a);
    f2(&a); //f2 pega o endereço apontado por a, variavel de referencia que o conteudo de a
    return 0;
}
/*
* = dereferencia
& = referencia
&a = endereço de a
*a = o conteudo que a aponta
*/