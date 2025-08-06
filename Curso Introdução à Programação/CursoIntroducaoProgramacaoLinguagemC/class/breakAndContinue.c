#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt-br.UTF-8");

    // O comando CONTINUE pula para a próxima iteração do loop
    // O comando BREAK encerra o loop imediatamente

    int i;

    printf("Exemplo de uso de break e continue em um loop:\n");
    printf("Contando de 1 a 10, mas pulando alguns números:\n");
    printf("--------------------------------------------------\n");


    for(i = 1; i <= 10; i++){
        if(i == 5){
            printf("Pulei o número 5!\n");
            continue; // Pula a iteração quando i é igual a 5 ou 6
        } else if(i == 6){
            printf("Pulei o número 6!\n");
            continue;
        } else if(i == 8){
            printf("\n");
            printf("Encerrei o loop no número 8! Logo não chegará ao 10!\n");
            printf("--------------------------------------------------\n");
            
            break; // Encerra o loop quando i é igual a 8
        }
        printf("%d\n", i);
    }

    return 0;
}