#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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

    switch (exercicios) {
            case 1:
                printf("\nVocê selecionou a opção 1.\n");
                break;
            case 2:
                printf("\nVocê selecionou a opção 2.\n");
                printf("Digite um número de 1 a 20: ");
                scanf("%d", &n_fatorial);

                if (n_fatorial < 1 || n_fatorial > 20) {
                        printf("O número deve estar entre 1 e 20 e ser um número inteiro.\n");
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
