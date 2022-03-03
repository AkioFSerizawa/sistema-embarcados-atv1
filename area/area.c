#include <stdio.h>

int main()
{
    int lado, area, perimetro;

    printf("Digite o lado do quadrado em cm: ");
    scanf("%d", &lado);

    area = lado * lado;
    perimetro = lado * 4;

    printf("\nA area ao quadrado é: %d\n", area);
    printf("O perimetro do quadrado é: %d\n", perimetro);
}