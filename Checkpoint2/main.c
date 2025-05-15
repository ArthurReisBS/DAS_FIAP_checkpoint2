#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "Portuguese_Brazil");
    int exercicios;
    int n_fatorial;

    do{
    printf(" ----------------------\n");
    printf("   MENU DE EXERC�CIOS\n");
    printf(" ----------------------\n");
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
                printf("Digite um n�mero de 1 a 20: ");
                scanf("%d", &n_fatorial);

                if (n_fatorial < 1 || n_fatorial > 20) {
                        printf("O n�mero deve estar entre 1 e 20 e ser um n�mero inteiro.\n");
                return;
                }

                unsigned long long vetor[20];
                vetor[0] = 1;
                for (int i = 1; i < n_fatorial; i++) {
                        vetor[i] = vetor[i - 1] * (i + 1);
                }

                printf("\nFatoriais:\n");
                for (int i = 0; i < n_fatorial; i++) {
                        printf("%d! = %llu\n", i + 1, vetor[i]);
                }

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
