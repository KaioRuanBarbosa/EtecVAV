// EXERCÍCIO 9
#include <stdio.h>
#include <string.h>

void substituirVogais(char palavra[]){
    for(int i = 0; i < strlen(palavra); i++){

        if(palavra[i] == 'a' || palavra[i] == 'e' ||
           palavra[i] == 'i' || palavra[i] == 'o' ||
           palavra[i] == 'u' || palavra[i] == 'A' ||
           palavra[i] == 'E' || palavra[i] == 'I' ||
           palavra[i] == 'O' || palavra[i] == 'U'){

            palavra[i] = '*';
        }
    }
}

int main(){
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    substituirVogais(palavra);

    printf("Resultado: %s\n", palavra);

    return 0;
}
