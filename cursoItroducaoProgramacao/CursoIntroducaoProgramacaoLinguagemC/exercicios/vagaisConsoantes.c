#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "pt-br.UTF-8");

    /*
    Enunciado:
    Faça um programa para ler uma string S (sem espaço). Seu programa deve 
    imprimir duas listas. A primeira com todas as vogais da string e uma 
    segunda com todas as consoantes da string.

    Entrada:
    A entrada consiste de uma linha contendo uma string S.

    Saída:
    A saída consiste de duas linhas. A primeira linha consiste da mensagem 
    "Vogais: " seguida da string S sem as consoantes. A segunda linha 
    consiste da mensagem "Consoantes: " seguida da string S sem suas vogais. 
    Considere que apenas as letras 'a', 'e', 'i', 'o' e 'u' são vogais. 
    Perceba nos exemplos de entrada e saída, que a ordem das letras na 
    string S se mantém na saída.

    Restrições:
    - 1 <= |S| <= 50
    - A string contém apenas letras minúsculas do alfabeto.

    Exemplo de Entrada 1:
    programacao

    Exemplo de Saída 1:
    Vogais: oaaao
    Consoantes: prgrmc

    Exemplo de Entrada 2:
    helloworld

    Exemplo de Saída 2:
    Vogais: eoo
    Consoantes: hllwrld 
*/ 

    char S[51];
    char vogais[51] = "";
    char consoantes[51] = "";
    int i, j = 0, k = 0;

    scanf("%50s", S);

    for(i = 0; S[i] != '\0'; i++){
        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'){
            vogais[j] = S[i];
            j++;
        } else {
            consoantes[k] = S[i];
            k++;
        }
        
    }

    vogais[j] = '\0';
    consoantes[k] = '\0';

    printf("Vogais: %s\n", vogais);
    printf("Consoantes: %s\n", consoantes);

    return 0;
}