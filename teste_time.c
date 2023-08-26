#include <stdio.h>
#include <time.h>

int main(){
    int i, k;
    for(i = 0; i < 10; i++){
        for(k = 0; k < 2000000000; k++); //so conta ate um bilhao nao faz repetição
        printf("%d: %ld\n", i, time(0));
    }
    return 0;
}