#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "pt-br.UTF-8");

    // Faça m programa que leia um número inteiro N
    // e imprima no console Nx-NumeroN.

    int numeroN;

    printf("Digite um número inteiro: ");
    scanf("%d", &numeroN);

    printf(" ######################");
    printf("\nUsando o laço for:\n");
    printf(" ######################\n");

    for(int i = 1; i <= numeroN; i++){
        printf("%dº vez -  Numero N: %d\n", i, numeroN);
    }

    // Usando a mesma lógica com o laço while
    printf(" ######################");
    printf("\nUsando o laço while:\n");
    printf(" ######################\n");

    int contador = 1;
    while(contador <= numeroN){
        printf("%dº vez -  Numero N: %d\n", contador, numeroN);
        contador++;
    }

    // Caso i++ = i = i + 1 - Primeiro usa o valor e depois incrementa
    // caso ++i = i = i + 1 - Primeiro incrementa e depois usa o valor

    // Caso i-- = i = i - 1 - Primeiro usa o valor e depois decrementa
    // caso --i = i = i - 1 - Primeiro decrementa e depois usa o valor

    printf(" ######################\n");
    printf("\nFim do programa!\n");


    return 0;

}