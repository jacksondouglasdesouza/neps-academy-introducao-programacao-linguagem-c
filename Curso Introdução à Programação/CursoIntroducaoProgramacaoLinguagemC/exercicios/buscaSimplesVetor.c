#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    /*Faça um programa para ler 10 valores inteiros, armazená-los em um vetor, depois ler um inteiro X. Imprima "SIM" se X aparece no vetor, ou "NAO" caso contrário.
    * Entrada
    * A primeira linha da entrada consiste de 10 inteiros separados por um espaço em branco. A segunda linha contém um inteiro X.
    * Saída
    * Imprima "SIM" se X aparece no vetor, ou "NAO" caso contrário.
    * Restrições
    * Todos os valores fornecidos não serão negativos nem maiores que 100.
    */

    setlocale(LC_ALL, "Pt-br.UTF-8");

    int valores[10];
    int i, x;

    for(i = 0; i < 10; i++){
        printf("Digite 10 números inteiros: ");
        scanf("%d", &valores[i]);
    }

    printf("Digite um número inteiro para buscar no vetor: ");
    scanf("%d", &x);

    int encontrado = 0;
    for(i = 0; i < 10; i++) {
        if(valores[i] == x) {
            encontrado = 1;
            break;
        }
    }

    if(encontrado) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }


    return 0;
}