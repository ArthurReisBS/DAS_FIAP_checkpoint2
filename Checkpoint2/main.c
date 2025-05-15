#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "Portuguese_Brazil");
    int exercicios;

    do{
    printf(" -----------------------\n");
    printf(" MENU DE EXERCÍCIOS\n");
    printf(" -----------------------\n");
    printf("1- Sequência de Fibonacci\n");
    printf("2- Fatoriais\n");
    printf("3- Verificar Palíndromo\n");
    printf("4- Verificar Substring\n");
    printf("0- Sair\n");
    printf("Selecione uma das quatro opções de exercícios: ");
    scanf("%d", &exercicios);

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
