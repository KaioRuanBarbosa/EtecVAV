// EXERCÍCIO 1
#include <stdio.h>

int impar(int n){
    return n % 2 != 0;
}

int main(){
    int num, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if(impar(i)){
            soma += i;
        }
    }

    printf("Soma dos numeros impares: %d\n", soma);

    return 0;
}
