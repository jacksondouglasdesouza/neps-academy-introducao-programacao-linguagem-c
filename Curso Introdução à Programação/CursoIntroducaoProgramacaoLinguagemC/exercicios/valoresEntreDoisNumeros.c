#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale (LC_ALL, "Pt-br.UTF-8");

    /*
    Exercício: Valores entre dois números
    Faça um programa para ler dois valores inteiros A e B, e imprima todos os valores inteiros entre os números
    lidos em ordem crescente. Por exemplo, ao receber os valores 2 e 5,
    devem ser impressos os valores 2, 3, 4 e 5.
    Caso receba os valores 4 e -1, devem ser impressos os valores -1, 0, 1, 2, 3 e 4.
    
    Entrada: 
    A entrada consiste de duas linhas. Cada linha consiste de um inteiro.
    Saída:
    A saída é composta de uma linha contendo todos os inteiros no intervalo fechado dos inteiros recebidos.
    */

    int A, B, menor, maior;

    printf("Digite o valor inteiro para inicio da contagem: ");
    scanf("%d", &A);
    printf("Digite o valor inteiro para fim da contagem: ");
    scanf("%d", &B);

    if (A < B) {
        menor = A;
        maior = B;
    } else {
        menor = B;
        maior = A;
    }

    for (int i = menor; i <= maior; i++) {
        printf("%d ", i);
    }
    printf("\n");   

    return 0;

}