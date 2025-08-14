#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "pt-br.UTF-8");

    int matriz[5][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50}
    }; //

    for(int linha = 0; linha < 5; linha++){
        //
        for(int coluna = 0; coluna < 10; coluna++){
            printf("Na linha [%d] | coluna [%d] = [%d]\n", linha, coluna, matriz[linha][coluna]);
        }
    }

    return 0;
}