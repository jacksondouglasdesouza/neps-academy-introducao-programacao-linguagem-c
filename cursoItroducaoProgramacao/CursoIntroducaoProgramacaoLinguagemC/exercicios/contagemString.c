#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (void){

    /*
    Enunciado:
    Faça um programa para ler uma string S (sem espaços) e imprima o tamanho 
    da string S.

    Entrada:
    A entrada consiste de uma única linha contendo uma string S.

    Saída:
    A saída consiste de uma única linha contendo um inteiro correspondente 
    ao tamanho da string S.

    Restrições:
    - 1 <= |S| <= 50
    - A string contém apenas letras minúsculas do alfabeto.

    Exemplo de Entrada:
    helloworld

    Exemplo de Saída:
    10
*/

    setlocale(LC_ALL, "pt-br.UTF-8");

    // printf("Testando Programação em C\n"); // OK //

    char entrada[51];

    scanf("%50s", entrada);

    printf("%d\n", (int)strlen(entrada));

    return 0;
}