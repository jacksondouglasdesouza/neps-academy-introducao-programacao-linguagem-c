#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /*  Faça um programa para ler dois inteiros X e Y representando um ponto em um plano cartesiano.
        Imprima qual quadrante esse ponto de encontra.
        Caso o ponto esteja em algum eixo, imprima apenas a mensagem "eixos".
        A entrada consiste de duas linhas. A primeira linha contém o inteiro X.
        A segunda linha contém o inteiro Y. A saída consiste de uma linha contendo a mensagem indicando
        qual o quadrante que o ponto está.
    */

    setlocale(LC_ALL, "pt-br.UTF-8");

    int X, Y;

    printf("Digite o valor de X: ");
    scanf("%d", &X);
    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    if(X == 0 || Y ==0){
        printf("O ponto está nos eixos.\n");
    } else if(X > 0 && Y > 0){
        printf("O ponto está no primeiro quadrante.\n");
    } else if(X < 0 && Y > 0){
        printf("O ponto está no segundo quadrante. \n");
    } else if(X < 0 && Y < 0){
        printf("O ponto está no terceiro quandrante.\n");
    } else{
        printf("O ponto está no quarto quadrante.\n");
    }

    return 0;
}