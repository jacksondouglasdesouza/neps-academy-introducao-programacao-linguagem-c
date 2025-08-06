#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função imprime();

int imprime(){
    printf("Imprimindo...\n");
    return 0;
}

int main(){

    setlocale(LC_ALL, "Pt-br.UTF-8");
    imprime();
    imprime();
    imprime();
    printf("Impressões concluídas.\n");
    printf("Programa finalizado.\n");
    return 0;
}