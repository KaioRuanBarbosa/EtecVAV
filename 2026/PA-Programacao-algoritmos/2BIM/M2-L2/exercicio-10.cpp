// EXERCÍCIO 10
#include <stdio.h>
#include <string.h>

int contarVogais(char nome[]){
    int contador = 0;

    for(int i = 0; i < strlen(nome); i++){

        if(nome[i] == 'a' || nome[i] == 'e' ||
           nome[i] == 'i' || nome[i] == 'o' ||
           nome[i] == 'u' || nome[i] == 'A' ||
           nome[i] == 'E' || nome[i] == 'I' ||
           nome[i] == 'O' || nome[i] == 'U'){

            contador++;
        }
    }

    return contador;
}

int contarLetras(char nome[]){
    int contador = 0;

    for(int i = 0; i < strlen(nome); i++){

        if(nome[i] != ' '){
            contador++;
        }
    }

    return contador;
}

int main(){
    char nome[100];

    printf("Digite o nome completo: ");
    fgets(nome, 100, stdin);

    printf("Quantidade de vogais: %d\n", contarVogais(nome));
    printf("Quantidade de letras: %d\n", contarLetras(nome));

    return 0;
}
