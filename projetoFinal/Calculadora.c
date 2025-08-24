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
    return a / b;
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


/* Buscar Correção para a função na próxima versão, descansar por hoje chega!

double EntradaNumero(const char* mensagem) {
    char buffer[100];
    double numero;
    char *pontoFinal;

    while(1){
        printf("%s", mensagem);

        if(fgets(buffer, sizeof(buffer), stdin) == NULL){
            printf("Erro na leitura. Tente novamente.\n");
            continue;
        }

        buffer[strcspn(buffer, "\n")] = 0; 

        char *ponteiroVirgula = strchr(buffer, ',');

        if(ponteiroVirgula != NULL){
            char bufferLimpo[100];
            int j = 0;

            for(int i = 0; buffer[i] != '\0'; i++){
                if(buffer[i] != '.'){
                    if(buffer[i] == ','){
                        bufferLimpo[j++] = '.';
                    } else {
                        bufferLimpo[j++] = buffer[i];
                    }
                }
            }
        }

        bufferLimpo[j] = '\0';

        if(bufferLimpo[0] != '\0' && *pontoFinal == '\0'){
            return numero;
        } else {
            numero = strtod(buffer, &pontoFinal);

            if(buffer[0] != '\0' && *pontoFinal == '\0'){
                return numero;
            }
        }
        printf("Entrada invalida. Por favor, insira um numero valido.\n");
    }
    
} */

//-- Função Principal


int main(void) {

    setlocale(LC_ALL, "pt_br.UTF-8");

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

        if(scanf("%d", &opcao) != 1){
            printf("Entrada inválida. Por favor, insira um número entre 1 e 5.\n");
            limpezaBuffer();
            //opcao = 0;
            printf("Pressione Enter para continuar...");
            getchar();
            continue;
        }

        limpezaBuffer();

        if(opcao == 5){
            continuar = 'n';
            continue;
        }

        if(opcao < 1 || opcao > 5){
            printf("Entrada inválida. Por favor, insira um número entre 1 e 5.\n");
            limpezaBuffer();
            printf("Pressione Enter para continuar...");
            getchar();
        } else {

            numero1 = EntradaNumero("Digite o primeiro numero: \n");
            numero2 = EntradaNumero("Digite o segundo numero: \n");

            switch(opcao){
                case 1:
                    printf("Resultado: %.2lf + %.2lf = %.2lf\n", numero1, numero2, soma(numero1, numero2));
                    break;
                case 2:
                    printf("Resultado: %.2lf - %.2lf = %.2lf\n", numero1, numero2, subtracao(numero1, numero2));
                    break;
                case 3:
                    printf("Resultado: %.2lf * %.2lf = %.2lf\n", numero1, numero2, multiplicacao(numero1, numero2));
                    break;
                case 4:
                    if(numero2 != 0){
                        printf("Resultado: %.2lf / %.2lf = %.2lf\n", numero1, numero2, divisao(numero1, numero2));
                    } else {
                        printf("Erro: Divisao por zero nao é permitida.\n");
                    }
                    break;
            }
        }
        
        //-- 

            char respostaParaContinuar;

            do{
                printf("Deseja realizar outra operação? (s/n): \n");

                scanf(" %c", &respostaParaContinuar);
                limpezaBuffer();

                respostaParaContinuar = tolower(respostaParaContinuar);

                if(respostaParaContinuar == 's' || respostaParaContinuar == 'n'){
                    continuar = respostaParaContinuar;
                } else{
                    printf("Resposta inválida. Digite 's' para sim ou 'n' para não.\n");
                }
            } while(respostaParaContinuar != 's' && respostaParaContinuar != 'n');

    } while (continuar == 's');

    printf("Obrigado por usar a calculadora. Até mais!\n");

    return 0;
}