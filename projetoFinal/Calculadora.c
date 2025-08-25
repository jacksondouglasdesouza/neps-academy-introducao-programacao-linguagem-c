#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include <string.h>
#include <locale.h>

/*

    ================================================================================
    PROJETO: CALCULADORA SIMPLES EM C
    ================================================================================

    * AUTOR:        Jackson Douglas de Souza
    * DATA:         25 de agosto de 2025
    * CURSO:        Introdução à Programação - Neps Academy
    * GITHUB:       https://github.com/jacksondouglasdesouza
    * LINKEDIN:     https://www.linkedin.com/in/jacksondouglasdsouza

    ------------------------------------------------------------------------
    DESCRIÇÃO:
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

// ================================================================================
// FUNÇÕES MATEMÁTICAS BÁSICAS
// ================================================================================

/**
 * @brief Realiza a soma de dois números.
 * @param a O primeiro número.
 * @param b O segundo número.
 * @return O resultado da soma.
 */
double soma(double a, double b) { return a + b; }

/**
 * @brief Realiza a subtração de dois números.
 * @param a O primeiro número.
 * @param b O segundo número.
 * @return O resultado da subtração.
 */
double subtracao(double a, double b) { return a - b; }

/**
 * @brief Realiza a multiplicação de dois números.
 * @param a O primeiro número.
 * @param b O segundo número.
 * @return O resultado da multiplicação.
 */
double multiplicacao(double a, double b) { return a * b; }

/**
 * @brief Realiza a divisão de dois números.
 * @param a O primeiro número (dividendo).
 * @param b O segundo número (divisor).
 * @return O resultado da divisão.
 */
double divisao(double a, double b) { return a / b; }


// ================================================================================
// FUNÇÕES AUXILIARES
// ================================================================================

/**
 * @brief Limpa o buffer de entrada do teclado (stdin).
 * @details Esta função é crucial para consumir caracteres extras que sobram após
 * leituras com scanf, como o 'Enter' (\n), evitando que eles
 * interfiram nas próximas leituras de dados.
 */
void limpezaBuffer(){
    int clean;
    while((clean = getchar()) != '\n' && clean != EOF){}
}


/**
 * @brief Limpa a tela do terminal.
 * @details Utiliza compilação condicional para ser compatível com diferentes
 * sistemas operacionais. Usa "cls" no Windows e "clear" no Linux/Mac.
 */
void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

/**
 * @brief Lê um número do tipo double do usuário de forma segura e robusta.
 * @param mensagem A mensagem a ser exibida para o usuário (ex: "Digite um número:").
 * @return O número válido digitado pelo usuário.
 */
double entradaNumero(const char* mensagem){

    double numero;
    char buffer[100]; // Armazena temporariamente a entrada do usuário como texto.
    char *pontoFinal; // Ponteiro para verificar onde a conversão de string para número parou.

    // Loop infinito que só é quebrado quando um número válido é digitado.
    while(1){
    printf("%s", mensagem);

    // Lê a linha inteira digitada pelo usuário de forma segura com fgets. Prevenindo problemas de buffer overflow.
    if (fgets(buffer, sizeof(buffer), stdin) == NULL){
        printf("Erro na leitura de dados!\n");
        continue;
    }

    // VERIFICAÇÃO DE ESTOURO DE BUFFER //
    // Se o caractere '\n' (Enter) não foi encontrado, significa que a entrada do usuário era maior que o buffer.
    if(strchr(buffer, '\n') == NULL){
        printf("Entrada muito longa. Por favor, insira um número válido.\n");
        limpezaBuffer();
        continue;
    }

    // Remove o caractere '\n' (Enter) do final da string lida pelo fgets.
    buffer[strcspn(buffer, "\n")] = 0;

    // Permite que o usuário use vírgula como separador decimal, convertendo para ponto, que é o padrão da linguagem C.
    for(int i = 0; buffer[i] != '\0'; i++){
        if(buffer[i] == ','){
            buffer[i] = '.';
        }

    }

    // Troca de localidade: Muda temporariamente para o padrão "C" (americano) para garantir que strtod reconheça o '.' como separador decimal.
    setlocale(LC_NUMERIC, "C");

    // Converte a string para um número double.
    numero = strtod(buffer, &pontoFinal);

    // Restaura a localidade original para o restante do programa.
    setlocale(LC_NUMERIC, "pt_BR.UTF-8");


    // VALIDAÇÃO FINAL //
    // Se a string não estava vazia e strtod conseguiu converter a string INTEIRA (pontoFinal aponta para o fim da string, '\0'), então o número é válido.
    if(buffer[0] != '\0' && *pontoFinal == '\0'){
        return numero;
    } else {
        printf("Entrada inválida. Por favor, insira um número válido.\n");
    }

    }

}

// ================================================================================
// FUNÇÃO PRINCIPAL
// ================================================================================

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

            numero1 = entradaNumero("Digite o primeiro numero: \n");
            numero2 = entradaNumero("Digite o segundo numero: \n");

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

    printf("Obrigado por usar a calculadora. Até a próxima!\n");

    return 0;
}