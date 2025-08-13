#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "Pt-br.UTF-8");
    // VETORES  //

    int x[5];

    x[0] = 1;
    x[1] = 2;
    x[2] = 3;
    x[3] = 4;
    x[4] = 5;

    printf("%d %d %d %d %d\n", x[0], x[1], x[2], x[3], x[4]);
    
    *x = 1;
    *(x + 1) = 2;
    *(x + 2) = 3;
    *(x + 3) = 4;

    printf("%d %d %d %d %d\n", x[0], x[1], x[2], x[3], x[4]);
    printf("%p\n", (void *)x);
    printf("%p\n", (void *)(x + 1));
    printf("%p\n", (void *)(x + 2));
    printf("%p\n", (void *)(x + 3));
    printf("%p\n", (void *)(x + 4));

    //--

    printf("%x\n", (void *)x);
    printf("%x\n", (void *)(x + 1));
    printf("%x\n", (void *)(x + 2));
    printf("%x\n", (void *)(x + 3));
    printf("%x\n", (void *)(x + 4));

    //-

    printf("\n\n");

    int values[3];

    printf("Digite 3 valores inteiros: \n");
    scanf("%d %d %d", &values[0], &values[1], &values[2]);

    printf("VALORES DIGITADOS: %d %d %d\n", values[0], values[1], values[2]);


    //--

    printf("\n\n");

    //--

    int value1[5], i;

    for(i = 0; i < 5; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &value1[i]);
    } //

    printf("Os valores digitados são: %d %d %d %d %d\n", value1[0], value1[1], value1[2], value1[3], value1[4]);

    for(i = 0; i < 5; i++){
        printf("Valor %d: %d\n", i + 1, value1[i]);
    }

    return 0;
}
