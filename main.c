#include <stdio.h>
#include <string.h>

// funçao exercicio 3
int palindromo(char str[]){
    int i, j;
    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j])
            return 0;
    }
    return 1;
}

int main() 
{
    int opcao;
    char palavra[100]; // Para o exercício 3
    
    printf("===== MENU DE EXERCÍCIOS ====="
           "\n1 - Sequência de Fibonacci;"
           "\n2 - Fatoriais;"
           "\n3 - Verificar Palíndromo;"
           "\n4 - Verificar Substring.\n"
           "\nEscolha uma opção:\t");
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1: // Exercício 1
            // Parte Anny
            return 0;
        
        case 2: // Exercício 2
            // Parte Manu
            return 0;
        
        case 3: // Exercício 3
            printf("\nDigite uma palavra:\t");
            scanf("%s", palavra);

            if (palindromo(palavra))
                printf("\nA palavra é um palíndromo.");
            else
                printf("\nA palavra NÃO é um palíndromo.");
            
            break;
        
        case 4: // Exercício 4
            // Parte Arthur
            return 0;
            
        default:
            printf("\nDigite uma opção válida!");
    }
    return 0;
}
