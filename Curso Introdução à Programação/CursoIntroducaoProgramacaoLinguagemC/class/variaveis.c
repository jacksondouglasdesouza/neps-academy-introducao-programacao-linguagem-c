#include <stdio.h>
#include <stdlib.h>

int main(){

    // VARIÁVEIS EM LINGUAGEM C
    // Variáveis são espaços na memória que armazenam valores.
    // Declaração de variáveis
    int idade; // Declaração de uma variável do tipo inteiro
    float altura; // Declaração de uma variável do tipo float
    char letra; // Declaração de uma variável do tipo char

    // Atribuição de valores às variáveis
    idade = 25; // Atribuindo o valor 25 à variável idade
    altura = 1.75; // Atribuindo o valor 1.75 à variável altura
    letra = 'A'; // Atribuindo o valor 'A' à variável letra

    // Exibindo os valores das variáveis
    printf("Idade: %d\n", idade); // Exibe o valor da variável idade
    printf("Altura: %.2f\n", altura); // Exibe o valor da variável altura com duas casas decimais
    printf("Letra: %c\n", letra); // Exibe o valor da variável letra    

    // Exemplo de uso de variáveis
    int a = 10; // Declaração e inicialização de uma variável inteira   
    int b = 20; // Declaração e inicialização de outra variável inteira
    int soma = a + b; // Soma das duas variáveis
    printf("Soma: %d\n", soma); // Exibe o resultado da soma

    // Variáveis podem ser usadas em expressões
    int resultado = (a * 2) + (b / 2); // Exemplo de expressão com variáveis
    printf("Resultado: %d\n", resultado); // Exibe o resultado da expressão.

    // --

    //Constantes
    const int MAX = 100; // Declaração de uma constante inteira
    printf("Valor máximo: %d\n", MAX); // Exibe o valor da constante
    // MAX = 200; // Tentativa de modificar uma constante (isso causaria um erro de compilação)
    // Exemplo de uso de constantes

    const float PI = 3.14; // Declaração de uma constante float
    printf("Valor de PI: %.2f\n", PI); // Exibe o valor da constante PI

    //-- 
    
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso

}