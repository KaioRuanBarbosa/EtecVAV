// EXERCÍCIO 7
#include <stdio.h>

void verificarOrdem(int v[]){
    int crescente = 1;
    int decrescente = 1;

    for(int i = 0; i < 4; i++){
        if(v[i] > v[i + 1]){
            crescente = 0;
        }

        if(v[i] < v[i + 1]){
            decrescente = 0;
        }
    }

    if(crescente){
        printf("Ordem crescente\n");
    } else if(decrescente){
        printf("Ordem decrescente\n");
    } else {
        printf("Nao ordenados\n");
    }
}

int main(){
    int numeros[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    verificarOrdem(numeros);

    return 0;
}
