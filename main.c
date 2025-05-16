#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void verificaSubstring(){
    // Criando variáveis:
    char primeiraString[50], segundaString[50];

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
    printf("Verificando se a SEGUNDA string está presente na PRIMEIRA:\n");
    if (strstr(primeiraString, segundaString) != NULL){
        printf("A string %s está presente em %s!\n", segundaString, primeiraString);
    } else {
        printf("A string %s NAO está presente em %s!\n", segundaString, primeiraString);
    }

     // Verifica se a primeira string está presente na segunda:
    printf("Verificando se a PRIMEIRA string está presente na SEGUNDA:\n");
    if (strstr(segundaString, primeiraString) != NULL){
        printf("A string %s está presente em %s!\n", primeiraString, segundaString);
    } else {
        printf("A string %s NAO está presente em %s!\n", primeiraString, segundaString);
    }

}

int main(){
    setlocale (LC_ALL, "Portuguese_Brazil");
    int exercicios;
    int n_fatorial;

    do{
    printf(" ----------------------\n");
    printf("   MENU DE EXERCÍCIOS\n");
    printf(" ----------------------\n");
    printf("1- Sequência de Fibonacci\n");
    printf("2- Fatoriais\n");
    printf("3- Verificar Palíndromo\n");
    printf("4- Verificar Substring\n");
    printf("0- Sair\n");
    printf("Selecione uma das quatro opções de exercícios: ");
    scanf("%d", &exercicios);
    getchar();

    switch (exercicios) {
            case 1:
                printf("\nVocê selecionou a opção 1.\n");
                break;
            case 2:
                printf("\nVocê selecionou a opção 2.\n");
                break;
            case 3:
                printf("\nVocê selecionou a opção 3.\n");
                break;
            case 4:
                printf("\nVocê selecionou a opção 4.\n");
                verificaSubstring();
                break;
            case 0:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("Parece que você não selecionou nenhuma das opções. Tente escolher um número válido da próxima vez.\n");
                }
    }
    while (exercicios != 0);
  return 0;
}
