#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função para Somar Inteiros.
int soma(int a, int b) {
    return a + b;
}

// Função para Somar Floats.
float somaFloat(float a, float b) {
    return a + b;
}

// Função para descobrir o menor valor entre dois números inteiros.
int menor(int a, int b) {
    return (a < b) ? a : b;

}
// Função para descobrir a média entre números Floats.
float mediaFloat(float a, float b) {
    return (a + b) / 2;
}

int main(){

    setlocale(LC_ALL, "Pt-br.UTF-8");

    int value1, value2;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &value1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &value2);

    printf("Soma: %d\n", soma(value1, value2));

    //--

    float value3, value4;
    printf("Digite o primeiro valor float: ");
    scanf("%f", &value3);
    printf("Digite o segundo valor float: ");
    scanf("%f", &value4);

    printf("Soma: %.2f\n", somaFloat(value3, value4));

    //--

    printf("Digite dois números inteiros para descobrir o menor: ");
    scanf("%d %d", &value1, &value2);
    printf("Menor valor é: %d\n", menor(value1, value2));

    //--

    printf("Digite dois números float para descobrir a média: ");
    scanf("%f %f", &value3, &value4);
    printf("Média: %.2f\n", mediaFloat(value3, value4));

    //-- 


    return 0;
}
