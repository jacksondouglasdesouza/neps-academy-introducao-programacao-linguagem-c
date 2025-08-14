#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "pt-br.UTF-8");

    int matriz[3][3];

    for(int linha = 0; linha < 3; linha++){
        //
        for(int coluna = 0; coluna < 3; coluna++){
            printf("Digite um valor Inteiro: ");
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("Valores Inseridos na Matriz: \n");

    for(int linha = 0; linha < 3; linha++){
        //
        for(int coluna = 0; coluna < 3; coluna++){
            printf("Na posição [%d][%d] = [%d]\n", linha, coluna, matriz[linha][coluna]);
        }
    }
    

    return 0;
}