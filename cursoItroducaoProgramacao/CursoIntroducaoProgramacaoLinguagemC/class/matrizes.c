#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "pt-br.UTF-8");

    
    // O que é uma matriz?
    // Uma matriz é uma estrutura de dados que armazena uma coleção de elementos do mesmo tipo.
    // As matrizes são organizadas em linhas e colunas, formando uma tabela.
    // Em C, as matrizes são representadas como arrays multidimensionais.

    /*
    int matriz[2][3];   // Declara uma matriz 2x3

    matriz[0][0] = 10;
    matriz[0][1] = 20;
    matriz[0][2] = 30;
    matriz[1][0] = 30;
    matriz[1][1] = 20;
    matriz[1][2] = 10;

    for(int i = 0; i < 2; i++){
        
        for(int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: %d\n", i, j, matriz[i][j]);
        }//
    } 
    */

    // ------------------------OUTRA MATRIZ [3][3]------------------------ //

    /*
        Representação da matriz [3][3]:

        +-----------+-----------+-----------+
        | [0][0]=11 | [0][1]=12 | [0][2]=13 |  ← Linha 0
        +-----------+-----------+-----------+
        | [1][0]=21 | [1][1]=22 | [1][2]=23 |  ← Linha 1
        +-----------+-----------+-----------+
        | [2][0]=31 | [2][1]=32 | [2][2]=33 |  ← Linha 2
        +-----------+-----------+-----------+
        ↑ Coluna 0   ↑ Coluna 1   ↑ Coluna 2
    */

    int matriz[3][3] = {
        {11, 12, 13}, // Linha 0
        {21, 22, 23}, // Linha 1
        {31, 32, 33}  // Linha 2
    };

    // Laço externo: percorre as linhas
    for(int linha = 0; linha < 3; linha++){

        // Laço interno: percorre as colunas
        for(int coluna = 0; coluna < 3; coluna++){

            // Mostra qual elemento está sendo acessado
            printf("Elemento [%d][%d] = %d\n", linha, coluna, matriz[linha][coluna]);

            /*
                A ORDEM DE VISITAÇÃO SERÁ:
                1 → [0][0]
                2 → [0][1]
                3 → [0][2]
                4 → [1][0]
                5 → [1][1]
                6 → [1][2]
                7 → [2][0]
                8 → [2][1]
                9 → [2][2]
            */

            /*
            * for (int i = 0; i < 3; i++) {        // 3 linhas → i = 0, 1, 2
            * for (int j = 0; j < 5; j++) {    // 5 colunas → j = 0, 1, 2, 3, 4
            *     printf("[%d][%d] ", i, j);
            * }
            * printf("\n"); // quebra de linha para separar as linhas
            * }
            */
    
        }
    }



    return 0;
}
