#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt-br.UTF-8");

    /*

    int i = 6;

    if ((i < 5)){
        printf("O valor de i: %d\n", i);
    } else{
        printf("O valor de i = %d\n", i);
        printf("O valor de i é maior que 5\n");
    }
    
    */

    int i = 1;

    // Condição de parada do loop
    while(i <= 20){
        printf("O valor de i: %d\n", i);
        i++; // Incrementa o valor de i
    }

    return 0;
}