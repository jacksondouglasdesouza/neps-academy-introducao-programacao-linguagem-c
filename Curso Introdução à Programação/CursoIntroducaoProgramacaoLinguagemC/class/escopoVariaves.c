#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// ESCOPO DE VARIÁVEIS
// Variáveis globais são acessíveis em todo o programa.
// Variáveis locais são acessíveis apenas dentro do bloco onde foram declaradas.

// ESCOPO GLOBAL

int global = 10; // Variável global - acessível em todo o programa
// Elas estão acima de todas as funções, portanto, são acessíveis em qualquer lugar do código.


// Função que acessa a variável global, dando preferência a ela
int somaGlobal(int a, int b){
    int global = 50; 
    // Variável local com o mesmo nome da global
    return a + b + global; // Acessando a variável global
}

// ESCOPO LOCAL 
int somaLocal(int a, int b){
    return a + b;
}

//- MAIN --

int main(){

    setlocale(LC_ALL, "Pt-br.UTF-8");

    int a = 10;
    int b = 20;

    printf("Variáveis A e B do main(): A = %d, B = %d\n", a, b);
    printf("Variáveis A e B da Função() Local: %d\n", somaLocal(50, 70));
    printf("Variáveis A e B da Função() Global - Local: %d\n", somaGlobal(200, 50));
    printf("Variável Global: %d\n", global);


    return 0;
}