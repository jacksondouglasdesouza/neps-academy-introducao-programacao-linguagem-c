#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Pt-br.UTF-8");

    /* Faça um programa que leia um inteiro X e imprima X vezes a mensagem "NepsAcademy eh Sucesso".
    Entrada: A entrada consiste de uma linha contendo um inteiro X.
    Saída: A saída consiste de X linhas, cada uma contendo a mensagem indicada no enunciado.
    */

    int X;

    printf("Digite um numero inteiro: ");
    scanf("%d", &X);

    for(int i = 1; i <= X; i++){
        printf("NepsAcademy eh Sucesso\n");
    }

    return 0;
}