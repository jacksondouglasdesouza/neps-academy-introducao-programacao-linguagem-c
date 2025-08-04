#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");

    // Caracteres especiais
    // Exemplo de uso de caracteres especiais no printf
    printf("Exemplo de caracteres especiais:\n"); // \n é usado para nova linha

// \t é usado para tabulação para 1 tab, \t\t é usado para 2 tabs e etc... 
    printf("Linha 1 \t\t Linha 2\n"); // \t adiciona uma tabulação entre as linhas

    // \\ barra invertida simboliza uma barra invertida
    printf("Exemplo de barra invertida: \\"); // \\\ é usado para imprimir uma barra invertida

    // \\\\ é usado para imprimir duas barras invertidas
    printf(" e \\\\"); // \\\\ imprime duas barras invertidas

    // alinhamento de texto
    printf("\nAlinhamento de texto:\n");
    printf("%-20s %-20s\n", "Esquerda", "Direita"); // %-20s alinha à esquerda, %20s alinha à direita
    printf("%-20s %20s\n", "Texto 1", "Texto 2"); // Exemplo de alinhamento à esquerda e direita

    // [%-5d][%5d][%5d] é usado para imprimir números inteiros com diferentes alinhamentos
    printf("\nAlinhamento de números inteiros:\n");
    printf("[%-5d][%5d][%5d]\n", 1, 22, 333);
    printf("[%-5d][%5d][%5d]\n", 4, 55, 6666); // Exemplo de alinhamento de números inteiros
    printf("[%-5d][%5d][%5d]\n", 7, 88, 9999); // Mais exemplos de alinhamento de números inteiros

    // complemento de zeros
    printf("\nComplemento de zeros:\n");
    printf("[%-5d][%05d][%05d]\n", 1, 22, 333); // %05d adiciona zeros à esquerda
    printf("[%-5d][%05d][%05d]\n", 4, 55, 6666); // Exemplo de complemento de zeros
    printf("[%-5d][%05d][%05d]\n", 7, 88, 9999); // Mais exemplos de complemento de zeros

    //Definir precisão para números de ponto flutuante
    printf("\nPrecisão para números de ponto flutuante:\n");
    printf("%.2f\n", 3.14159); // %.2f define a precisão para 2 casas decimais
    printf("%.4f\n", 2.71828); // Exemplo de precisão para 4 casas decimais
    printf("%.6f\n", 1.41421); // Mais exemplos de precisão para 6 casas decimais
    printf("%.8f\n", 0.57721); // Exemplo de precisão para 8 casas decimais
    printf("%.10f\n", 0.30103); // Exemplo de precisão para 10 casas decimais
    printf("%.12f\n", 0.69315); // Exemplo de precisão para 12 casas decimais
    printf("%.14f\n", 0.43429); // Exemplo de precisão para 14 casas decimais

    // Imprimir inteiros em HexaDecimal e Octal

    printf("\nImpressão de inteiros em Hexadecimal e Octal:\n");
    printf("Decimal: %d\n", 255); // Decimal
    printf("Hexadecimal: %x\n", 255); // Hexadecimal (minúsculo)
    printf("Hexadecimal: %X\n", 255); // Hexadecimal (maiúsculo)
    printf("Octal: %o\n", 255); // Octal
    printf("Inteiro: %d\n", 255); // Inteiro
    printf("Inteiro: %i\n", 255); // Inteiro (i é o mesmo que d)
    printf("Inteiro: %u\n", 255); // Inteiro sem sinal (unsigned)
    printf("Inteiro: %ld\n", 255L); // Inteiro longo (long)
    printf("Inteiro: %lu\n", 255UL); // Inteiro longo sem sinal (unsigned long)
    printf("Inteiro: %lld\n", 255LL); // Inteiro longo longo (long long)
    printf("Inteiro: %llu\n", 255ULL); // Inteiro longo longo sem sinal (unsigned long long)
    printf("Inteiro: %hd\n", (short)255); // Inteiro curto (short)
    printf("Inteiro: %hu\n", (unsigned short)255); // Inteiro curto sem sinal (unsigned short)
    printf("Inteiro: %hhd\n", (signed char)255); // Inteiro curto com sinal (signed char)
    printf("Inteiro: %hhu\n", (unsigned char)255); // Inteiro curto sem sinal (unsigned char)

    

    return 0;
}