/*
    Reprovado ou Aprovado ou Final
    Bino obteve média 
    na primeira etapa do semestre e média na segunda etapa do semestre. Bino não sabe sua situação e quer sua ajuda para saber se ele está aprovado, reprovado ou de prova final.
    A nota final de Bino é calculada utilizando uma média ponderada onde o peso da 
    é 3. Caso a média final seja maior ou igual a 7, Bino está aprovado. Caso a média seja menor que 3, Bino está reprovado. Caso Bino não esteja reprovado ou aprovado, Bino terá que fazer a prova final.
    Faça um programa para ler as duas notas de Bino e imprima qual sua situação.
    Entrada
    A entrada consiste de duas linhas. A primeira linha contém um real representando a nota 
    A segunda linha contém um real representando a nota 
    Saída
    A saída consiste de uma linha. Caso Bino esteja aprovado, imprima "Aprovado". Caso Bino esteja reprovado, imprima "Reprovado". Caso Bino não esteja reprovado ou aprovado, imprima "Final".
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, media;

    printf("Digite a nota da primeira etapa: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda etapa: ");
    scanf("%f", &nota2);

    media = (nota1 * 2 + nota2 * 3) / 5;

    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media < 3) {
        printf("Reprovado\n");
    } else {
        printf("Final\n");
    }
    

    return 0;
}