#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int trocaValores(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Valores invertidos dentro da Função: %d, %d\n", *a, *b);
}

//-- 

int adicionaMais10(int *a){
    *a = *a + 10;
    printf("Valor dentro da Função +10: %d\n", *a);
}

//-- 

int main(void){
    //
    setlocale(LC_ALL, "pt-br.UTF-8");
    int a, b;

    a = 1;
    b = 2;

    printf("Valores de A e B, fora da Função antes da Troca: %d e %d\n", a, b);

    // Chamando a Função com ponteiros

    trocaValores(&a, &b);

    printf("Valores de A e B, fora da Função: %d e %d\n", a, b);

    //-- 

    printf("\n");

    int A = 30;

    printf(">>> A antes da Função +10: %d\n", A);

    adicionaMais10(&A);

    printf(">>> A depois da Função +10: %d\n", A);


    return 0;
}