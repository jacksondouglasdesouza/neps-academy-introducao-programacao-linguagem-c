#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "pt-br.UTF-8");

    // CARACTERES //

    //char letra = 98;

    //printf("-> O valor %d é a letra [ %c ]\n", letra, letra);

    //GETCHAR()

    char caracter;
    caracter = getchar();

    if(caracter == 'a'){
        printf("C == 'a'\n");
    } else{
        printf("C != 'a'\n");
    }


    return 0;
}