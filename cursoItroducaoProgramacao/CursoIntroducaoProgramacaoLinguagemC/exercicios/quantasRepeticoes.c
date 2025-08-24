#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "pt-br.UTF-8");

    // printf("Testando Programação em C\n"); // OK //

    /*
    Enunciado:
    Faça um programa para ler uma string S (sem espaços) e uma letra C. 
    Seu programa deve imprimir a quantidade de vezes que a letra C aparece em S.

    Entrada:
    A entrada consiste de duas linhas. A primeira linha contém uma string S. 
    A segunda linha contém uma letra C.

    Saída:
    A saída consiste de uma única linha contendo um inteiro correspondente 
    a quantidade de vezes que a letra C aparece na string S.

    Restrições:
    - 1 <= |S| <= 50
    - A string contém apenas letras minúsculas do alfabeto.
    Exemplo de Entrada 1:
    arara
    a
    Exemplo de Saída 1:
    3
    Exemplo de Entrada 2:
    programacao
    c
    Exemplo de Saída 2:
    2
*/

        char S[51], C;
        int c = 0;

        scanf("%50s", S);
        scanf(" %c", &C);

        for(int i = 0; i < strlen(S); i++){
            if(S[i] == C){
                c++;
            }
        }

    printf("%d\n", c);

    return 0;
}
