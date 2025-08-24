#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt-br.UTF-8");

    //Uma loja tem 4 itens no estoque: papel, tesoura, cola e caneta. Cada item tem um identificador: 
    //1-papel, 
    //2-tesoura, 3-cola e 4-caneta. Faça um
    //programa que leia um inteiro representando o identificador do item e imprima qual o item correspondente.

    int item;

    printf("Digite o identificador do item que deseja consultar (1-papel, 2-tesoura, 3-cola, 4-caneta): ");
    scanf("%d", &item);

    switch (item){
        case 1:
            printf("Item selecionado: Papel\n");
            printf("Valor: R$ 1,00\n");
            break;
        case 2:
            printf("Item selecionado: Tesoura\n");
            printf("Valor: R$ 2,50\n");
            break;
        case 3:
            printf("Item selecionado: Cola\n");
            printf("Valor: R$ 3,00\n");
            break;
        case 4:
            printf("Item selecionado: Caneta\n");
            printf("Valor: R$ 1,50\n");
            break;
        default:
            printf("Item inválido! Por favor, digite um identificador válido (1-papel, 2-tesoura, 3-cola, 4-caneta).\n");
    }

    printf("Obrigado por utilizar nosso sistema!\n");

    return 0;
}

