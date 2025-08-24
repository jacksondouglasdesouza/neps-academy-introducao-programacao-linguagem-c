#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdint.h> // Para tipos inteiros com largura definida
#include <inttypes.h> // Para imprimir ponteiros com largura definida

int main(void) {
    setlocale(LC_ALL, "Pt-br.UTF-8");

    int localMemoria = 1580;
    int *ponteiro;

    ponteiro = &localMemoria;

    printf("Endereço da Memória: %p\n", (void *)ponteiro);
    printf("Valor da Variável: %d\n", localMemoria);
    printf("Valor da Memória: %d\n", *ponteiro);

    localMemoria = 10;

    printf("Endereço da Memória: %p\n", (void *)ponteiro);
    printf("Valor da Variável: %d\n", localMemoria);
    printf("Valor da Memória: %d\n", *ponteiro);

    *ponteiro = 2005;

    printf("Endereço da Memória: %p\n", (void *)ponteiro);
    printf("Endereço da Memória: %p\n", ponteiro);
    // Imprimindo em formato hexadecimal
    printf("Endereço da Memória: %x\n", (void *)ponteiro);
    printf("Endereço da Memória: %x\n", (ponteiro));
    printf("Valor da Variável: %d\n", localMemoria);
    printf("Valor da Memória: %d\n", *ponteiro);

    // Imprimindo um SIZEof()
    printf("\n");
    printf("SizerOf - Tamanho - para INT: %zu  \n", sizeof(int));
    printf("SizeOf - Tamanho - para Float: %zu  \n", sizeof(float));
    printf("SizeOf - Tamanho - para Double: %zu  \n", sizeof(double));
    printf("SizeOf - Tamanho para CHAR: %zu  \n", sizeof(char));
    printf("\n");

    // OUTROS TIPOS 

    printf("Tamanho de char: %zu bytes\n", sizeof(char));
    printf("Tamanho de unsigned char: %zu bytes\n", sizeof(unsigned char));
    
    printf("Tamanho de short: %zu bytes\n", sizeof(short));
    printf("Tamanho de unsigned short: %zu bytes\n", sizeof(unsigned short));
    
    printf("Tamanho de int: %zu bytes\n", sizeof(int));
    printf("Tamanho de unsigned int: %zu bytes\n", sizeof(unsigned int));
    
    printf("Tamanho de long: %zu bytes\n", sizeof(long));
    printf("Tamanho de unsigned long: %zu bytes\n", sizeof(unsigned long));
    
    printf("Tamanho de long long: %zu bytes\n", sizeof(long long));
    printf("Tamanho de unsigned long long: %zu bytes\n", sizeof(unsigned long long));
    
    printf("Tamanho de float: %zu bytes\n", sizeof(float));
    printf("Tamanho de double: %zu bytes\n", sizeof(double));
    printf("Tamanho de long double: %zu bytes\n", sizeof(long double));

    int ponteiroX;
    int *ponteiroY;
    ponteiroY = &ponteiroX;

    printf("\n\n");
    printf("Endereço de ponteiro Y: %p\n", (void *)ponteiroY);
    printf("Endereço em Hexadecimal para ponteiro Y: %x\n", (void *)ponteiroY);
    printf("Endereço do ponteiroX %p\n", (void *)&ponteiroX);
    printf("Valor do ponteiroX em Hexadecimal: %x\n", (void *)ponteiroX);

    //--

    printf("Valor de ponteiro Y: %p\n", ponteiroY);
    printf("Valor de ponteiro Y: %p\n", ponteiroY + 1);
    printf("Valor de ponteiro Y: %p\n", ponteiroY + 2);
    printf("Valor de ponteiro Y: %p\n\n", ponteiroY + 3);

    //--

    printf("\n Imprimindo com valores em Hexadecimal\n\n");

        printf("Valor de ponteiro Y: %x\n", ponteiroY);
    printf("Valor de ponteiro Y: %x\n", ponteiroY + 1);
    printf("Valor de ponteiro Y: %x\n", ponteiroY + 2);
    printf("Valor de ponteiro Y: %x\n\n", ponteiroY + 3);

    /*
    Explicação sobre %" PRIuPTR " no printf:

    1. Contexto geral:
    - No printf, usamos especificadores de formato (%d, %u, %p, etc) para imprimir valores.
    - Para tipos inteiros comuns, usamos %d, %u, %ld, etc.
    - Para tipos especiais como uintptr_t, o formato pode variar conforme a plataforma.

    2. O que é uintptr_t?
    - uintptr_t é um tipo inteiro sem sinal definido em <stdint.h>.
    - Ele tem tamanho suficiente para armazenar um ponteiro (endereço de memória).
    - Usar uintptr_t permite manipular endereços como números inteiros de forma segura e portátil.

    3. O que é PRIuPTR?
    - PRIuPTR é uma macro definida em <inttypes.h>.
    - Ela expande para o especificador de formato correto para imprimir um uintptr_t.
    - Exemplo:
    --- Em sistemas 64 bits, pode ser "lu" ou "llu".
    --- Em sistemas 32 bits, pode ser "u".
    - Usar PRIuPTR garante que o printf imprima corretamente o uintptr_t em qualquer arquitetura.

    4. Como usar?
    - No printf, usamos:
    printf("Valor: %" PRIuPTR "\n", valor);
    - Isso concatena para algo como:
    printf("Valor: %lu\n", valor); // se PRIuPTR for "lu"
    - Dessa forma o código fica portátil e seguro.

    5. Por que não usar %lu diretamente?
    - Porque uintptr_t pode não ser exatamente unsigned long em todas as plataformas.
    - Usar PRIuPTR evita erros e warnings de compilação.

    Resumo:
    - uintptr_t: tipo inteiro para armazenar ponteiros.
    - PRIuPTR: macro para especificador de formato de uintptr_t.
    - %" PRIuPTR ": combinação para imprimir uintptr_t portavelmente.
*/

    printf("Valor do ponteiro Y com Largura definida: %" PRIuPTR "\n", (uintptr_t)ponteiroY);
    printf("Valor do ponteiro Y com Largura definida: %" PRIuPTR "\n", (uintptr_t)(ponteiroY + 1));
    printf("Valor do ponteiro Y com Largura definida: %" PRIuPTR "\n", (uintptr_t)(ponteiroY + 2));
    printf("Valor do ponteiro Y com Largura definida: %" PRIuPTR "\n", (uintptr_t)(ponteiroY + 3));


    return 0;
}