#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt-br.UTF-8");

    // DO WHILE
    // A estrutura do-while executa o bloco de código pelo menos uma vez antes de verificar a condição.

    // Faça um programa que leia um número inteiro N.
    // Use o comando Do While para que seja executado enquanto o numero N seja igual a 2018.

    int numeroN;

    do
    {
        printf("Digite um número inteiro qualquer, tente encontrar qual número deve parar a execução do programa: \n");
        scanf("%d", &numeroN);

        if (numeroN == 2018){
            printf("Parabéns, você encontrou o número que encerra o programa!\n");
        } else {
            printf("O número %d não é o número que encerra o programa. Tente novamente!\n", numeroN);
        }
        
    } while (numeroN != 2018);


    return 0;
}