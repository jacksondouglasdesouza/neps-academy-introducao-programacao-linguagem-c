#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt-br.UTF-8");

    float nota01, nota02, nota03, nota04, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota01);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota02);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota03);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota04);

    media = (nota01 + nota02 + nota03 + nota04) / 4;

    printf("\nA média do aluno foi: %.2f\n", media);

    if(media >= 7){
        printf("Aluno está aprovado");
    }
    else if(media >= 5){
        printf("Aluno está em recuperação");
    }
    else{
        printf("Aluno está reprovado");
    }

    return 0;
}