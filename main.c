#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verificaSubstring(){
    // Criando variáveis:
    char primeiraString[20], segundaString[20];

    // Pedindo as strings ao usuário:
    printf("Digite a primeira string:\t");
    fgets(primeiraString, sizeof(primeiraString), stdin);

    printf("Digite a segunda string:\t");
    fgets(segundaString, sizeof(segundaString), stdin);

    // Remove o \n que é colocado no final das strings quando o usuário aperta ENTER:
    size_t len = strlen(primeiraString);
    if (len > 0 && primeiraString[len - 1] == '\n') {
        primeiraString[len - 1] = '\0';
    }

    size_t len2 = strlen(segundaString);
    if (len > 0 && segundaString[len2 - 1] == '\n') {
        segundaString[len2 - 1] = '\0';
    }

    // Verifica se a segunda string está presente na primeira, com a função "strstr" dada na biblioteca <string.h>:
    printf("Verificando se a SEGUNDA string esta presente na PRIMEIRA:\n");
    if (strstr(primeiraString, segundaString) != NULL){
        printf("A string %s esta presente em %s!\n", segundaString, primeiraString);
    } else {
        printf("A string %s NAO esta presente em %s!\n", segundaString, primeiraString);
    }

     // Verifica se a primeira string está presente na segunda:
    printf("Verificando se a PRIMEIRA string esta presente na SEGUNDA:\n");
    if (strstr(segundaString, primeiraString) != NULL){
        printf("A string %s esta presente em %s!\n", primeiraString, segundaString);
    } else {
        printf("A string %s NAO esta presente em %s!\n", primeiraString, segundaString);
    }

}

int main(){
  verificaSubstring();
  return 0;
}
