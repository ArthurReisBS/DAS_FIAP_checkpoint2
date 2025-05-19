#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Nome e RM dos integrantes:
//Anny Elly (565055) - Exercício 1
//Arthur Reis (562181) - Exercício 4
//Leonardo Piassa (563663) - Exercício 3
//Manoela Oliveira (563952) - Exercício 2


//função 1
void fibonacci() {
    int n, i;
    int vetor[50]; 

    printf("Digite a quantidade de termos da sequencia de Fibonacci (1 a 50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Número inválido. Deve estar entre 1 e 50.\n");
        return;
    }

    vetor[0] = 0;
    if (n > 1) {
        vetor[1] = 1;
        for (i = 2; i < n; i++) {
            vetor[i] = vetor[i - 1] + vetor[i - 2];
        }
    }

    printf("Sequencia de Fibonacci: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

//função exercício 2
int exercicio_fatoriais() {
    int n_fatorial, i;
    long long fatorial;
    long long fatoriais[21];
    fatoriais[0] = 1;

    for (i = 1; i <= 20; i++) {
        fatoriais[i] = fatoriais[i - 1] * i;
    }

    do {
        printf("Digite um número inteiro entre 1 e 20: ");
        scanf("%d", &n_fatorial);
        if (n_fatorial < 1 || n_fatorial > 20)
            printf("Número inválido, tente novamente.\n");
    } while (n_fatorial < 1 || n_fatorial > 20);

    for (i = 1; i <= n_fatorial; i++) {
        printf("%d! = %lld\n", i, fatoriais[i]);
    }
}

// funçao exercicio 3
int palindromo(char str[]){ // int para retornar um valor inteiro
    int i, j;
    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j])
            return 0;
    }
    return 1;
}

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

    char palavra[100]; // para o exercício 3

    do{
     printf("\n===== MENU DE EXERCÍCIOS ====="
           "\n1 - Sequência de Fibonacci;"
           "\n2 - Fatoriais;"
           "\n3 - Verificar Palíndromo;"
           "\n4 - Verificar Substring.\n"
           "\nEscolha um exercício:\t");
    scanf("%d", &exercicios);
    getchar();

    switch (exercicios) {
            case 1:
                fibonacci();
                printf("\nVocê selecionou a opção 1.\n");
                break;
            case 2:
                printf("\nVocê selecionou a opção 2.\n");
                exercicio_fatoriais();
                break;
            case 3:
                printf("\nVocê selecionou a opção 3.\n");
                printf("\nDigite uma palavra:\t");
                scanf("%s", palavra);

                if (palindromo(palavra))
                    printf("\nA palavra é um palíndromo.\n");
                else
                    printf("\nA palavra NÃO é um palíndromo.\n");
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
