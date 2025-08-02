#include <stdio.h>
#include <stdlib.h>

// AULA DE OPERADORES ARITMETICOS
// Operadores Aritméticos: +, -, *, /, %

// ORDEM DE PRECEDÊNCIA
// 1. Parênteses
// 2. Exponenciação (não existe em C)
// 3. Multiplicação e Divisão
// 4. Adição e Subtração
// 5. Operadores Relacionais
// 6. Operadores Lógicos
// 7. Operadores Bit a Bit
// 8. Operadores de Atribuição

int main(){

    float nota001, nota002, nota003, nota004, media;

    printf("Digite a sua prmeira nota: \n");
    scanf("%f",  &nota001);
    printf("Digite a sua seguinda nota:  \n");
    scanf("%f", &nota002);
    printf("Digite a sua terceira nota: \n");
    scanf("%f", &nota003);
    printf("Digite a sua quarta nota: \n");
    scanf("%f", &nota004);

    //-- Cálculo da média 
    media = (nota001 + nota002 + nota003 + nota004) / 4;
    float mediaSemOrdemPrecedencia = nota001 + nota002 + nota003 + nota004 / 4;
    // -- A média sem considerar a ordem de precedência é incorreta, pois a divisão será feita apenas com a última nota.

    printf("A sua média do curso é de: %.2f\n", media);
    printf("A sua média do curso sem considerar a ordem de precedência é de: %.2f\n", mediaSemOrdemPrecedencia);


    return 0;

}