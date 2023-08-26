#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gera(int *, int);

void exibe(char *, int *, int);

void bubble(int *, int, int *, int *);

int main(){
    int *v, n; //* - modificador da variavel e nao do tipo
    long int ini, fim;
    int trocas, comparacoes;
    srand(time(0)); //inicializando operador pseudo-randômico
    printf("Digite o tamnaho do vetor, 0 encerra: ");
    scanf("%d", &n);
    //repetir enquanto o tamanho > 0
    while(n > 0){
        //alocar um vetor dinamicamente, do tamnaho que o usuario escolher
        v = (int *) malloc(n * sizeof(int));
        //gerar randomicamente os valores para o vetor
        gera(v, n);
        //exibir
        //exibe("vetor gerado", v, n);
        trocas = 0;
        comparacoes = 0;
        ini = time (0);
        bubble(v, n, &trocas, &comparacoes);
        //exibir
        fim = time(0);
        //exibe("vetor ordenado", v, n);
        printf("\ntempo para tamanho %d: %ld", n, fim-ini);
        printf("\nforam realizadas %d comparacoes e %d trocas", comparacoes, trocas);
        //liberar a memória
        free(v);
        //ler novo tamanho 
        printf("\nDigite o tamnaho do vetor, 0 encerra: ");
        scanf("%d", &n);
    }    
    return 0;
}

void gera(int *v, int n){
    int i;
    for(i = 0; i < n; i++){
        v[i] = rand() % (n*10);
    }
}

void exibe(char *msg, int *v, int n){
    int i;
    printf("\n%s\n", msg);
    for(i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void bubble(int *v, int n, int *trocas, int *comparacoes){ //a ideia dessa função é ordenar
    int i, j, aux;
    for(i = 1; i < n; i++){ //um for dentro de outro é uma multiplicação
        for(j = 0; j < n-i; j++){
            //contar comparações
            *comparacoes = *comparacoes + 1;
            if(v[j] > v[j+1]){ //troca
            //contar trocas
            *trocas = *trocas + 1;
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

