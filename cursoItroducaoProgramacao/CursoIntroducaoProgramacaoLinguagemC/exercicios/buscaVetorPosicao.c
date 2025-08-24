#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    /*Faça um programa para ler 10 valores inteiros, armazená-los em um vetor, depois ler um inteiro X. Se X aparece no vetor, imprima quantas vezes ele aparece e depois quais
    *os índices que ele aparece. Se X não aparecer no vetor, imprima apenas a mensagem "Mia x". Lembre-se que a primeira posição de um vetor tem índice 0.
    * Entrada
    * A primeira linha da entrada consiste de 10 inteiros separados por um espaço em branco. A segunda linha contém um inteiro X.
    * Saída
    * Se X aparece no vetor, a saída consiste de duas linhas, a primeira linha contém um inteiro representando a quantidade de vezes que X apareceu no vetor
    * e a segunda linha contém os índices do vetor que contém valor igual ao X. Se X não aparecer no vetor, imprima apenas a mensagem "Mia x".
    */
    setlocale(LC_ALL, "Pt-br.UTF-8");

    int vetor[10];
    int i, count, x;

    for(i = 0; i < 10; i++){
        printf("Digite  o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite i valor para X: ");
    scanf("%d", &x);

    count = 0;

    for(i = 0; i < 10; i++){
        if(vetor[i] == x){
            count++;
        } //
    }

    if(count == 0){
        printf("Não foi encontrado este valor no vetor!");
    } else {
        printf("O valor %d foi encontrado no vetor %d vezes.", x, count);

        for(i = 0; i < 10; i++){
            if(vetor[i] == x){
                printf("\nO valor %d foi encontrado no índice %d .", x, i);
            }
        }

    }

    return 0;
}