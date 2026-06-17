// EXERCÍCIO 8
#include <stdio.h>

float areaCirculo(float raio){
    return 3.14 * raio * raio;
}

int main(){
    float raio, soma = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o raio do circulo %d: ", i + 1);
        scanf("%f", &raio);

        soma += areaCirculo(raio);
    }

    printf("Soma das areas: %.2f\n", soma);

    return 0;
}
