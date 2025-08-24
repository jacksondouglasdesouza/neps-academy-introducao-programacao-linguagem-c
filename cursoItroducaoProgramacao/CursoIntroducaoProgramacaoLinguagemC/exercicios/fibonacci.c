#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Programa recursivo para calcular o n-ésimo número de Fibonacci
 * Definição do problema conforme enunciado:
 *   fib(0) = 1
 *   fib(1) = 1
 *   fib(n) = fib(n-1) + fib(n-2)  para n >= 2
 *
 * Observações importantes:
 *  - O enunciado limita N a 0 <= N <= 30, então a recursão é segura (profundidade <= 30).
 *  - Esta implementação recursiva segue literalmente a definição matemática,
 *    mas repete cálculos (subproblemas sobrepostos) — por isso tem complexidade exponencial.
 */

/*
 * Função: fib
 * ----------------
 * Calcula recursivamente o n-ésimo número de Fibonacci conforme definição acima.
 *
 * Parâmetros:
 *   n - índice do número de Fibonacci que queremos (assumimos n >= 0)
 *
 * Retorno:
 *   valor de fib(n) como inteiro.
 *
 * Comentários sobre limites:
 *   - Para este problema N <= 30, o resultado cabe em int.
 *   - Para N muito maiores seria preciso usar long long / big integers e/ou
 *     evitar a recursão pura (memoização ou iteração).
 */
int fib(int n) {
    // --------- CASO BASE ----------
    // A recursão só termina quando encontramos um caso base.
    // Pela definição do problema, fib(0) = 1 e fib(1) = 1.
    // Sempre verifique se existe um caso base bem definido para evitar recursão infinita.
    if (n == 0 || n == 1) {
        // Quando n é 0 ou 1, devolvemos 1 imediatamente, sem fazer mais chamadas.
        // Isso "fecha" a cadeia de chamadas recursivas.
        return 1;
    }

    // --------- CASO RECURSIVO ----------
    // Se chegamos aqui, então n >= 2 e usamos a definição:
    // fib(n) = fib(n-1) + fib(n-2)
    //
    // IMPORTANTE sobre como isso funciona na prática:
    // - A chamada fib(n-1) vai empilhar uma nova execução da função fib com n-1.
    // - Enquanto fib(n-1) não retornar, fib(n-2) não será chamada (ordem determinada pelo código).
    // - A mesma função fib será chamada muitas vezes com os mesmos argumentos (recomputação).
    //
    // Exemplo rápido (traço de execução) para n = 3:
    //   fib(3)
    //   -> chama fib(2)
    //       -> chama fib(1)  (retorna 1)
    //       -> chama fib(0)  (retorna 1)
    //       -> soma 1 + 1 = 2  (fib(2) retorna 2)
    //   -> chama fib(1) (retorna 1)
    //   -> soma 2 + 1 = 3  (fib(3) retorna 3)
    //
    // Note que fib(1) e fib(0) foram calculados várias vezes para entradas maiores.
    // Por isso a eficiência é baixa sem memorização.
    int left = fib(n - 1);   // calcula fib(n-1)
    int right = fib(n - 2);  // calcula fib(n-2)

    // Soma os dois resultados e devolve: este é o valor de fib(n).
    return left + right;
} 

// --

int main(void){

    setlocale(LC_ALL, "pt-br.UTF-8");
    // Define a variável N que armazenará o índice do número de Fibonacci a ser calculado.
    int N;

    // Lê um inteiro da entrada padrão.
    // scanf retorna o número de itens lidos com sucesso (aqui esperamos 1).
    // Não imprimimos prompts (para compatibilidade com juízes online).
    if (scanf("%d", &N) != 1) {
        // Se a leitura falhar (entrada inválida / EOF), encerra o programa silenciosamente.
        return 0;
    }

    // Observação: assumimos que a entrada respeita 0 <= N <= 30 conforme enunciado.
    // Se quisesse, poderíamos validar N e tratar fora do intervalo, mas isso pode alterar
    // o comportamento exigido por um juiz automático, então mantemos simples.

    // Chama a função recursiva e imprime o resultado seguido de newline.
    printf("%d\n", fib(N));

    // Retorna 0 indicando que o programa terminou com sucesso.
    return 0;
}

/*
 * Complexidade (para referência):
 *  - Tempo: exponencial no pior caso, aproximadamente O(phi^n) onde phi ≈ 1.618...
 *  - Espaço (uso de pilha): O(n) devido à profundidade máxima da recursão.
 *
 * Observação pedagógica:
 *  - A recursão é ótima para entender a definição matemática e o fluxo de execução.
 *  - Para uso prático em N maiores, recomenda-se memoização (DP top-down) ou versão iterativa.
 */
