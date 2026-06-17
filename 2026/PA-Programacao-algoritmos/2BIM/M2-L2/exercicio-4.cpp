// EXERCÍCIO 4
#include <stdio.h>

float soma(float a, float b){
    return a + b;
}

float subtracao(float a, float b){
    return a - b;
}

float multiplicacao(float a, float b){
    return a * b;
}

float divisao(float a, float b){
    return a / b;
}

int main(){
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Adicao: %.2f\n", soma(n1, n2));
    printf("Subtracao: %.2f\n", subtracao(n1, n2));
    printf("Multiplicacao: %.2f\n", multiplicacao(n1, n2));
    printf("Divisao: %.2f\n", divisao(n1, n2));

    return 0;
}
