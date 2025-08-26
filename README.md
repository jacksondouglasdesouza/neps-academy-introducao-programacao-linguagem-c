## 💻 Introdução à Programação – Neps Academy
![Linguagem C](https://img.shields.io/badge/Linguagem-C-blue.svg)
![Status](https://img.shields.io/badge/Status-%20complete-blue.svg)

Neste curso **Introdução à Programação** da Neps Academy, aprendi os conceitos fundamentais da computação e os primeiros passos em programação com a linguagem C.

O curso começa explicando a base teórica:

- O que é **hardware**
- O que é **software**
- O que é um **algoritmo**
- O que é **código fonte**

Depois dessa parte teórica, o foco passa totalmente para a prática com a linguagem **C**. A cada novo conteúdo, já aplico o que aprendi em exercícios práticos, com correção automática que mostra se o código está certo, errado ou precisa ser melhorado.

### 📚 Tópicos já estudados:

- Declaração e uso de **variáveis**
- **Entrada e saída de dados**
- Uso de **condicionais** (`if`, `else`, `switch`)
- **Laços de repetição** (`for`, `while`)
- **Arrays** e **matrizes**
- **Alocação dinâmica de memória**
- **Manipulação de arquivos**

O curso é dividido em módulos bem organizados. A parte inicial é mais teórica, mas logo depois já começa a parte prática, com muitos exercícios para reforçar o aprendizado.

# Projeto Final: Calculadora Simples em C

Este repositório contém o projeto final desenvolvido para o curso **Introdução à Programação** da Neps Academy. O objetivo foi criar uma calculadora de console robusta e funcional na linguagem C, aplicando os conceitos fundamentais de programação aprendidos ao longo do curso.

O programa oferece uma interface de texto simples onde o usuário pode selecionar uma das quatro operações matemáticas básicas. A aplicação foi projetada para ser resiliente a erros, com validação completa de entrada de dados e tratamento de casos de borda, como a divisão por zero e entradas excessivamente longas.

## ✨ Funcionalidades

-   **Menu interativo** para seleção de operações.
-   Suporte para as quatro operações básicas: **Adição, Subtração, Multiplicação e Divisão**.
-   Aceita números **inteiros e decimais** (`double`).
-   **Validação de entrada robusta** para evitar erros e travamentos.
-   Tratamento específico para o erro de **divisão por zero**.
-   **Loop de execução** que permite realizar múltiplas operações sem reiniciar o programa.
-   Interface limpa e amigável no terminal.

## 🛠️ Tecnologias Utilizadas

-   **Linguagem:** C
-   **Compilador:** GCC (utilizando MinGW no ambiente Windows)
-   **Bibliotecas Padrão:** `stdio.h`, `stdlib.h`, `ctype.h`, `string.h`, `locale.h`

## 🚀 Como Executar o Projeto

**Pré-requisitos:** É necessário ter um compilador C (como o GCC) instalado e configurado no seu sistema.

1.  Clone o repositório:
    ```bash
    git clone https://github.com/jacksondouglasdesouza/neps-academy-introducao-programacao-linguagem-c.git
    ```
2.  Navegue até o diretório do projeto:
    ```bash
    cd neps-academy-introducao-programacao-linguagem-c/projetoFinal
    ```
3.  Compile o programa:
    ```bash
    gcc -o Calculadora Calculadora.c
    ```
4.  Execute o arquivo compilado:
    -   No Windows: `Calculadora.exe`
    -   No Linux/Mac: `./Calculadora`

## 👨‍💻 Autor

Desenvolvido com dedicação por **Jackson Douglas de Souza**. Vamos nos conectar!

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/jacksondouglasdsouza)
[![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/jacksondouglasdesouza)

---

# Relatório de Testes – Calculadora Simples

Este documento detalha o plano de testes executado na operação de **Adição** do projeto "Calculadora Simples". O objetivo foi validar a robustez, a correção e o tratamento de erros do programa, submetendo-o a uma variedade de cenários de entrada, desde os mais comuns até os inválidos e maliciosos.

**Data do Teste:** 25 de agosto de 2025
**Resultado Geral:** ✅ **SUCESSO** - O programa passou em todos os testes propostos sem apresentar falhas, travamentos ou comportamento inesperado.

---
# Testes Realizados no Programa

## Cenário 1: Entradas Padrão (Caminho Feliz)

Testes básicos para garantir que a lógica principal da adição está funcionando corretamente.

| Nº do Teste | O que testar (Número 1 + Número 2) | Resultado Esperado | Status |
| :--- | :--- | :--- | :--- |
| 1.1 | `5` + `3` | Resultado: `8,00` | ✅ Passou |
| 1.2 | `10,5` + `2,2` | Resultado: `12,70` | ✅ Passou |
| 1.3 | `25.5` + `10.2` | Resultado: `35,70` | ✅ Passou |
| 1.4 | `10,5` + `5.5` | Resultado: `16,00` | ✅ Passou |

## Cenário 2: Casos de Borda (Situações Limite)

Testes focados em situações menos comuns, como números negativos e operações com zero, para verificar a corretude matemática.

| Nº do Teste | O que testar (Número 1 + Número 2) | Resultado Esperado | Status |
| :--- | :--- | :--- | :--- |
| 2.1 | `-10` + `-5` | Resultado: `-15,00` | ✅ Passou |
| 2.2 | `-10` + `5` | Resultado: `-5,00` | ✅ Passou |
| 2.3 | `15` + `0` | Resultado: `15,00` | ✅ Passou |
| 2.4 | `-15` + `15` | Resultado: `0,00` | ✅ Passou |
| 2.5 | `0.1` + `0.2` | Resultado: `0,30` | ✅ Passou |

## Cenário 3: Entradas Inválidas (Testes de Estresse e Robustez)

O objetivo destes testes foi tentar "quebrar" o programa com entradas malformadas. Em todos os casos, o comportamento esperado era a exibição de uma mensagem de erro e uma nova solicitação de entrada, sem interromper a execução.

| Nº do Teste | O que digitar como entrada | Comportamento Esperado | Status |
| :--- | :--- | :--- | :--- |
| 3.1 | `abc` (texto) | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 3.2 | `123a` (número com texto) | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 3.3 | `123 456` (espaço no meio) | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 3.4 | `1.2.3` (múltiplos separadores) | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 3.5 | ` 123` (espaço antes) | Aceitou e calculou corretamente. | ✅ Passou |
| 3.6 | `123 ` (espaço depois) | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 3.7 | (Apenas teclar **Enter**) | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 3.8 | `.` ou `,` (apenas o separador) | Mensagem de erro e pedir o número de novo. | ✅ Passou |

---

### Conclusão
A funcionalidade de **Adição** demonstrou ser extremamente robusta e funcional, lidando corretamente com todos os casos de teste. A validação de entrada de dados se provou eficaz em prevenir erros de execução e garantir uma excelente experiência do usuário.

---
## Testes de Validação – Operação de Subtração

**Data do Teste:** 25 de agosto de 2025
**Resultado Geral:** ✅ **SUCESSO** - A operação de Subtração passou em todos os testes propostos, demonstrando corretude matemática e mantendo a robustez da entrada de dados.

### Cenário 1: Entradas Padrão

| Nº do Teste | O que testar (Número 1 - Número 2) | Resultado Esperado | Status |
| :--- | :--- | :--- | :--- |
| 1.1 | `10` - `3` | Resultado: `7,00` | ✅ Passou |
| 1.2 | `15,7` - `5,2` | Resultado: `10,50` | ✅ Passou |
| 1.3 | `5` - `10` | Resultado: `-5,00` | ✅ Passou |
| 1.4 | `20.5` - `10,2` | Resultado: `10,30` | ✅ Passou |

### Cenário 2: Casos de Borda

| Nº do Teste | O que testar (Número 1 - Número 2) | Resultado Esperado | Status |
| :--- | :--- | :--- | :--- |
| 2.1 | `5,5` - `-4,5` | Resultado: `10,00` | ✅ Passou |
| 2.2 | `-10` - `5` | Resultado: `-15,00` | ✅ Passou |
| 2.3 | `15` - `0` | Resultado: `15,00` | ✅ Passou |
| 2.4 | `0` - `15` | Resultado: `-15,00` | ✅ Passou |
| 2.5 | `15` - `15` | Resultado: `0,00` | ✅ Passou |
| 2.6 | `0.3` - `0.1` | Resultado: `0,20` | ✅ Passou |

### Cenário 3: Entradas Inválidas

| Nº do Teste | O que digitar como entrada | Comportamento Esperado | Status |
| :--- | :--- | :--- | :--- |
| 3.1 | `xyz` (texto) | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 3.2 | `45b` (número com texto) | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 3.3 | `10 20` (espaço no meio) | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 3.4 | `9,8,7` (múltiplos separadores) | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 3.5 | ` 99` (espaço antes) | Aceitou e calculou corretamente. | ✅ Passou |
| 3.6 | `99 ` (espaço depois) | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 3.7 | (Apenas teclar **Enter**) | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 3.8 | `.` ou `,` (apenas o separador) | Mensagem de erro e pedir o número de novo. | ✅ Passou |

### Conclusão
A funcionalidade de **Subtração** está totalmente funcional e robusta. O programa lida corretamente com resultados negativos, operações com o elemento neutro e a subtração de números negativos, mantendo a integridade da validação de entrada.

---
## Testes de Validação – Operação de Multiplicação

**Data do Teste:** 25 de agosto de 2025
**Resultado Geral:** ✅ **SUCESSO** - A operação de Multiplicação foi validada com sucesso, lidando corretamente com as regras de sinais, elementos neutro/absorvente e valores de grande magnitude.

### Cenário 1: Entradas Padrão e Casos de Borda

| Nº do Teste | O que testar (Número 1 * Número 2) | Resultado Esperado | Status |
| :--- | :--- | :--- | :--- |
| 1.1 | `7` * `6` | Resultado: `42,00` | ✅ Passou |
| 1.2 | `1.5` * `2,5` | Resultado: `3,75` | ✅ Passou |
| 1.3 | `-10` * `5` | Resultado: `-50,00` | ✅ Passou |
| 1.4 | `-10` * `-10` | Resultado: `100,00` | ✅ Passou |
| 1.5 | `12345` * `0` | Resultado: `0,00` | ✅ Passou |
| 1.6 | `12345` * `1` | Resultado: `12345,00`| ✅ Passou |
| 1.7 | `500000` * `500000` | Resultado: `250000000000,00` | ✅ Passou |
| 1.8 | `0.01` * `0.01` | Resultado: `0,00` | ✅ Passou |

### Cenário 2: Entradas Inválidas (Teste de Confirmação)

| Nº do Teste | O que digitar como entrada | Comportamento Esperado | Status |
| :--- | :--- | :--- | :--- |
| 2.1 | `dez` | Mensagem de erro e pedir o número de novo. | ✅ Passou |
| 2.2 | `50*2` | Mensagem de erro e pedir o número de novo. | ✅ Passou |

### Conclusão
A funcionalidade de **Multiplicação** está correta e estável. O programa demonstrou lidar bem com uma vasta gama de valores, desde decimais pequenos a resultados muito grandes, confirmando a robustez geral do sistema.

---
## Testes de Validação – Operação de Divisão

**Data do Teste:** 25 de agosto de 2025
**Resultado Geral:** ✅ **SUCESSO** - A operação de Divisão, o teste mais crítico do sistema, foi concluída com sucesso. O programa demonstrou total robustez ao lidar corretamente com a **divisão por zero**, o principal requisito de tratamento de erro do projeto.

### Cenário 1: Entradas Padrão

| Nº do Teste | O que testar (Número 1 / Número 2) | Resultado Esperado | Status |
| :--- | :--- | :--- | :--- |
| 1.1 | `20` / `5` | Resultado: `4,00` | ✅ Passou |
| 1.2 | `10` / `4` | Resultado: `2,50` | ✅ Passou |
| 1.3 | `10` / `3` | Resultado: `3,33` | ✅ Passou |

### Cenário 2: Casos de Borda

| Nº do Teste | O que testar (Número 1 / Número 2) | Resultado Esperado | Status |
| :--- | :--- | :--- | :--- |
| 2.1 | **`15` / `0`** | **"Erro: Divisao por zero nao é permitida."** | ✅ Passou |
| 2.2 | `0` / `15` | Resultado: `0,00` | ✅ Passou |
| 2.3 | `25` / `25` | Resultado: `1,00` | ✅ Passou |
| 2.4 | `25` / `1` | Resultado: `25,00` | ✅ Passou |

---
## Teste Avançado: Validação de Estouro de Buffer (Buffer Overflow)

Este teste final foi conduzido para verificar a resiliência do programa contra entradas que excedem a capacidade do buffer de leitura (`char buffer[100]`), um cenário de estresse clássico em programação C.

**Data do Teste:** 25 de agosto de 2025
**Objetivo:** Garantir que o programa não apresente comportamento inesperado ou erros lógicos ao receber uma entrada maior que sua capacidade de processamento.

### Cenário de Teste

* **Ação:** Fornecer uma string com mais de 100 dígitos no prompt de um dos números.
* **Comportamento Esperado (Ideal):** O programa deve rejeitar a entrada, informar o usuário sobre o limite, limpar os dados excedentes do buffer de entrada (`stdin`) e solicitar o **mesmo** número novamente, sem travar ou corromper o fluxo da execução.

### Resultados

1.  **Versão Inicial:** O teste revelou que o programa lia os primeiros 99 caracteres e deixava o restante no buffer de entrada. Isso fazia com que a próxima solicitação de número fosse pulada, pois o programa lia os caracteres restantes, gerando um cálculo com dados incorretos.

2.  **Correção Implementada:** Uma lógica foi adicionada utilizando `strchr` para verificar se a entrada foi lida por completo. Ao detectar uma entrada truncada, o programa agora exibe uma mensagem de erro, limpa o buffer de `stdin` com a função `limpezaBuffer()` e reinicia o loop de solicitação com `continue`.

3.  **Versão Final:** **SUCESSO.** Como demonstrado no teste final, o programa agora lida de forma elegante com o estouro de buffer, rejeitando a entrada longa, exibindo a mensagem de erro correta e solicitando novamente a entrada do mesmo número, conforme o comportamento esperado.

**Status Final:** ✅ **Bug Identificado e Corrigido.** O programa está resiliente a entradas excessivamente longas.
