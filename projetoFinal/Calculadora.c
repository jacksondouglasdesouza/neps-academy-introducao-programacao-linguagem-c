#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include <string.h>
#include <locale.h>

/*
    ================================================================================
    PROJETO: CALCULADORA SIMPLES EM C
    ================================================================================

    Descrição:
    Neste projeto, você vai criar um programa de calculadora baseado em texto que
    funciona inteiramente no terminal. O programa exibirá um menu de opções para
    o usuário, permitindo que escolha uma operação matemática. Depois, o usuário
    insere os números e recebe o resultado. O programa deve continuar executando
    até que o usuário decida sair.

    --------------------------------------------------------------------------------
    REQUISITO 1: Menu Inicial e Seleção de Opções (40 Pontos)
    --------------------------------------------------------------------------------
    1.  Exibição do menu: Ao executar, o programa deve exibir o menu abaixo:
        ===============================
            Calculadora Simples
        ===============================
        Selecione uma operação:
        1. Adição
        2. Subtração
        3. Multiplicação
        4. Divisão
        5. Sair
        Opção:

    2.  Entrada e validação da opção:
        - O programa deve ler a opção do usuário.
        - Deve validar se a opção é um número inteiro entre 1 e 5.
        - Se a entrada for inválida (fora do intervalo ou não numérica),
        exibir uma mensagem de erro e pedir a opção novamente.

    3.  Opção de sair:
        - Se a opção for 5, exibir a mensagem de despedida e encerrar.
        "Obrigado por usar a calculadora! Até a próxima."

    --------------------------------------------------------------------------------
    REQUISITO 2: Operações Matemáticas (40 Pontos)
    --------------------------------------------------------------------------------
    1.  Solicitação dos números:
        - Para as opções de 1 a 4, pedir dois números ao usuário.
        - Os números podem ser inteiros ou decimais (use float ou double).

    2.  Cálculo e exibição do resultado:
        - Realizar a operação matemática correspondente.
        - Exibir o resultado no formato: "Resultado: [num1] [op] [num2] = [resultado]"
        Exemplo: "Resultado: 5 + 3 = 8"

    3.  Tratamento de erros na divisão:
        - Se o usuário tentar dividir por zero na opção 4, exibir a mensagem:
        "Erro: Divisão por zero não é permitida."
        - Após o erro, o programa deve pular para a pergunta de "nova operação".

    --------------------------------------------------------------------------------
    REQUISITO 3: Loop para Múltiplas Operações (20 Pontos)
    --------------------------------------------------------------------------------
    1.  Perguntar sobre nova operação:
        - Após cada resultado ou erro, perguntar ao usuário:
        "Deseja realizar outra operação? (s/n): "
        - Ler a resposta, aceitando 's', 'S', 'n' ou 'N'.

    2.  Controle de fluxo com base na resposta:
        - Se a resposta for 's' ou 'S', o programa deve voltar ao menu inicial.
        - Se a resposta for 'n' ou 'N', exibir a mensagem de despedida e encerrar.

    3.  Validação da resposta:
        - Se o usuário digitar algo diferente de 's' ou 'n', exibir uma
        mensagem de erro e repetir a pergunta até receber uma resposta válida.

    4.  Manutenção do loop principal:
        - O programa deve continuar o ciclo até que o usuário escolha sair
        (opção 5 no menu ou 'n' após uma operação).
*/

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisao por zero nao é permitida.\n");
        return 0;
    }
}

void limpezaBuffer(){
    int clean;
    while((clean = getchar()) != '\n' && clean != EOF){}
}

void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

//


int main(void) {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    double numero1, numero2;
    char continuar = 's';
    int opcao;

    do{

        limparTela();
        
        printf("===============================\n");
        printf("Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação: \n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if(scanf("%d", &opcao) != 1){
            printf("Entrada inválida. Por favor, insira um número inteiro.\n");
            limpezaBuffer();
            opcao = 0;
        }

        if(opcao < 1 || opcao > 5 || (opcao != (int)opcao)){
            printf("Opção inválida. Selecione uma opção válida entre 1 e 5.\n");
        } else {
            switch((int)opcao){
                case 1:
                    printf("Digite o primeiro número: ");
                    scanf("%d", &numero1);
                    printf("Digite o segundo número: ");
                    scanf("%d", &numero2);
                    printf("Resultado: %d + %d = %d\n", numero1, numero2, soma(numero1, numero2));
                    break;
                case 2:
                    printf("Digite o primeiro número: ");
                    scanf("%d", &numero1);
                    printf("Digite o segundo número: ");
                    scanf("%d", &numero2);
                    printf("Resultado: %d - %d = %d\n", numero1, numero2, subtracao(numero1, numero2));
                    break;
                case 3:
                    printf("Digite o primeiro número: ");
                    scanf("%d", &numero1);
                    printf("Digite o segundo número: ");
                    scanf("%d", &numero2);
                    printf("Resultado: %d * %d = %d\n", numero1, numero2,  multiplicacao(numero1, numero2));
                    break;
                case 4:
                    printf("Digite o primeiro número: ");
                    scanf("%d", &numero1);
                    printf("Digite o segundo número: ");
                    scanf("%d", &numero2);
                    printf("Resultado: %d / %d = %.2lf", numero1, numero2, divisao(numero1, numero2));
                    break;
                case 5:
                    printf("Saindo da calculadora...\n");
                    break;
            }

            char continuar;

            printf("Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &continuar);

            continuar = tolower(continuar);

            if(continuar != 's' && continuar != 'n') {
                printf("Resposta inválida. Por favor, responda com 's' ou 'n'.\n");
                continuar = 's';
            } else {
                printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            }
    
        }

    } while ((int)opcao != 5);


    return 0;
}