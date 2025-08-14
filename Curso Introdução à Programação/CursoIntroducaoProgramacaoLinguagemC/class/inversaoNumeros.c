#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    /*Faça um programa para ler 10 valores inteiros como entrada e imprima na ordem inversa da que foram lidos.

    * Entrada
    * A entrada consiste de 10 linhas, cada linha contém um valor inteiro.
    * 
    * Saída
    * A saída consiste de dez linha contendo, cada linha com um os 10 valores lidos, porém, na ordem contrária da que foram lidos.
    */

    setlocale(LC_ALL, "pt-br.UTF-8");

    int values[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &values[i]);
    }

    for(int i = 9; i >= 0; i--){
        printf("%d\n", values[i]);
    }

    return 0;
}