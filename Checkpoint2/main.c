#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "Portuguese_Brazil");
    int exercicios;

    do{
    printf(" -----------------------\n");
    printf(" MENU DE EXERC�CIOS\n");
    printf(" -----------------------\n");
    printf("1- Sequ�ncia de Fibonacci\n");
    printf("2- Fatoriais\n");
    printf("3- Verificar Pal�ndromo\n");
    printf("4- Verificar Substring\n");
    printf("0- Sair\n");
    printf("Selecione uma das quatro op��es de exerc�cios: ");
    scanf("%d", &exercicios);

    switch (exercicios) {
            case 1:
                printf("\nVoc� selecionou a op��o 1.\n");
                break;
            case 2:
                printf("\nVoc� selecionou a op��o 2.\n");
                break;
            case 3:
                printf("\nVoc� selecionou a op��o 3.\n");
                break;
            case 4:
                printf("\nVoc� selecionou a op��o 4.\n");
                break;
            case 0:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("Parece que voc� n�o selecionou nenhuma das op��es. Tente escolher um n�mero v�lido da pr�xima vez.\n");
                }
    }
    while (exercicios != 0);

    return 0;
}
