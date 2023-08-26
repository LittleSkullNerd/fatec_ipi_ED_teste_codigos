#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int v[6], i;
    srand(time(0)); //sempre vai ser time 0 ou time null
    printf("primeiro: %d\nsegundo: %d\n", rand(), rand());
    printf("\nAGORA VAMOS FICAR RICOS!!\n");
    for(i = 0; i < 6; i++){
        v[i] = rand() % 60 + 1;
        printf("%d ", v[i]);
    }
    return 0;
}