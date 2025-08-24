#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Pt-br.UTF-8");

    /* Bino está aprendendo a multiplicar números e gostaria da sua ajudar para
    apresentar a tabuada de um determinado valor inteiro X.

    ENTRADA:
    A entrada consiste em uma única linha contendo o valor inteiro X.

    SAÍDA:
    A saída consiste de 10 linhas. A i-éssima linha constem a mensagem "x * i = valor", onde x é o valor de X,
    i representa a o identificar da linha e o valor da múltiplicação de X∗i.   
    */

    int x, valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    for(int i = 1; i <= 10; i++){
        valor = x * i;
        printf("%d * %d = %d\n", x, i, valor);
    }

    return 0;

}