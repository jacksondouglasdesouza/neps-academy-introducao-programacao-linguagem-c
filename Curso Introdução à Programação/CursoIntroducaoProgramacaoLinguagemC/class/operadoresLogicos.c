#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt-br.UTF-8");
    // Operadores lógicos
    // AND (&&), OR (||), NOT (!) 
    // PROCEDENCIA DE OPERAÇÃO | ( || ) > ( && ) > ( ! )
    // Exemplo de uso dos operadores lógicos

    int value = -185;
    // Decubrase o número é par e positivo.

    if(value > 0 && value % 2 == 0){
        printf("O número %d é positivo e par.\n", value);
    } else if( value > 0 && value % 2 != 0){
        printf("O número %d é positivo mais não é um número par.\n", value);
    }

    //--

    // Exemplo de uso do operador lógico OR
    // Verifica se o número é negativo ou zero.

    if(value <= 0 || value % 2 != 0){
        printf("O número %d é negativo ou zero\n", value);
    } else {
        printf("O número %d é positivo e par.\n", value);
    }

    //--

    // Exemplo de uso do operador lógico our e and juntos
    // Verifica se o número é positivo e par ou negativo e ímpar.

    if((value > 0 && value % 2 == 0) || (value < 0 && value % 2 != 0)){
        printf("O número %d é positivo e par ou negativo e ímpar.\n", value);
    } else {
        printf("O número %d não se enquadra nas condições.\n", value);
    }

    //--

    // Exemplo de uso do operador lógico na ordem de precedência da operação

    if((2 < 1) && ((2 < 1) || (1 < 2))){
        printf("A condição é verdadeira.\n");
    } else {
        printf("A condição é falsa.\n");
    }

    return 0;
}