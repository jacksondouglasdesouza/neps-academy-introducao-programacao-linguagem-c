#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorialFunction(int n){
    if(n == 0){
        return 1;
    } else {
        return n * fatorialFunction(n - 1);
    }
}

int main(void){

    setlocale(LC_ALL, "pt-br.UTF-8");
    //-- Recursividade - É quando uma função chama a si própria.

    int n, fatorial;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    fatorial = fatorialFunction(n);
    printf("O fatorial de %d é %d\n", n, fatorial);

    return 0;
}