#include <stdio.h>
#include <stdlib.h>

int main(){
    int valueA, valueB, valueC;

    printf("Digite o valor para a variável A: \n");
    scanf("%d", &valueA);

    //--

    printf("Digite o valor para a variável B: \n");
    scanf("%d", &valueB);

    //--

    printf("Digite o valor para a variável C: \n");
    scanf("%d", &valueC);

    int soma = valueA + valueB + valueC;

    printf("A soma dos valores A, B e C é: %d\n", soma);

    // Recebendo dados em Float
    float valueFloatA, valueFloatB, valueFloatC;

    printf("Digite o valor para a variável Float A: \n");
    scanf("%f", &valueFloatA);

    //--

    printf("Digite o valor para a variável Float B: \n");
    scanf("%f", &valueFloatB);

    //--

    printf("Digite o valor para a variável Float C: \n");
    scanf("%f", &valueFloatC);

    //--

    float somaFloat = valueFloatA + valueFloatB + valueFloatC;

    printf("A soma dos valores Float A, B e C é: %.2f\n", somaFloat);

    //-- Recebendo dados em massa no mesmo scanf

    int value1, value2, value3;

    printf("Digite os três valores inteiros para calcular a média entre eles: \n");
    scanf("%d %d %d", &value1, &value2, &value3);

    float mediaAritmetica = (value1 + value2 + value3) / 3.0;

    printf("A média aritmética entre os valores %d, %d, %d é de: %.2f\n", value1, value2, value3, mediaAritmetica);

    

    return 0;


}