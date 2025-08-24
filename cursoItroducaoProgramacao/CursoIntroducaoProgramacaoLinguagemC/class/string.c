#include <stdio.h> // funções de entrada e saída
#include <string.h> // funções de manipulação de strings
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "pt-br.UTF-8");

    char nome[30];
    char nome2[30] = "Jackson";

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Seu nome é: %s\n", nome);
    printf("Nome : %s\n", nome + 1);
    printf("Nome : %s\n", nome + 2);
    printf("Nome : %s\n", nome + 3);
    printf("Nome : %s\n", nome + 4);
    printf("Nome : %s\n", nome + 5);
    printf("Nome : %s\n", nome + 6);

    // STRING.H //

    printf("\nTamanho da string: %zu\n", strlen(nome)); // Mostra o tamanho da string
    printf("Nome em maiúsculas: %s\n", strupr(nome)); // Converte para maiúsculas
    printf("Nome em minúsculas: %s\n", strlwr(nome)); // Converte para minúsculas
    //printf("Nome invertido: %s\n", strrev(nome)); // Inverte a string
    //printf("Nome com strcpy: %s\n", strcpy(nome2, nome)); // Copia a string
    printf("Nome com strcmp: %d\n", strcmp(nome, nome2)); // Compara as strings

    printf("Nome com strcat: %s\n", strcat(nome, nome2)); // Concatena as strings

    printf("Nome com strstr(): %s\n", strstr(nome, "do"));

    char nome3[30] = "zz";
    char nome4[30] = "abcabc";

    if(strcmp(nome3, nome4) == 0){
        printf("Os nomes são iguais.\n");
    } else if(strcmp(nome3, nome4) == 1){
        printf("O nome4 é menor que o nome3.\n");
    } else if(strcmp(nome3, nome4) == -1){
        printf("O nome3 é menor que o nome4.\n");
    } else {
        printf("Os nomes são diferentes.\n");
    }

    printf("\n");

    if(strstr(nome2, "TTT") != NULL){
        printf("O nome2 contém a substring 'TTT'.\n");
    } else{
        printf("O nome2 não contém a substring 'TTT'.\n");
    }
    

    // LIMPAR O BUFFER //

    int limpezaBuffer;

    while((limpezaBuffer = getchar()) != '\n' && limpezaBuffer != EOF){
        // Limpa o buffer
    }


    char nomeCompleto[100];

    printf("\n");
    printf("Digite agora seu nome completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);
    // Remove o caractere de nova linha do final da string
    nomeCompleto[strcspn(nomeCompleto, "\n")] = '\0';

    printf("Seu nome completo é: %s\n", nomeCompleto);

    return 0;
}


