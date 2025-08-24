#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");

    double raio, area;
    const double PI = 3.1416;

    printf("Digite o valor do raio da circunferência: ");
    scanf("%lf", &raio);

    area = PI * pow(raio, 2);
    printf("A área da circunferência é: %.2lf\n", area);

    
    return 0;
}