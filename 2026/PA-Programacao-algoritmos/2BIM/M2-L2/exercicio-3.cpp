// EXERCÍCIO 3
#include <stdio.h>

float pesoMasculino(float altura){
    return (72.7 * altura) - 58;
}

float pesoFeminino(float altura){
    return (62.1 * altura) - 44.7;
}

int main(){
    char sexo;
    float altura;

    printf("Digite o sexo (M/F): ");
    scanf("%c", &sexo);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if(sexo == 'M' || sexo == 'm'){
        printf("Peso ideal: %.2f\n", pesoMasculino(altura));
    } else {
        printf("Peso ideal: %.2f\n", pesoFeminino(altura));
    }

    return 0;
}
