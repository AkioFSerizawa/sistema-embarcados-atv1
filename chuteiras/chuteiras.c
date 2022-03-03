#include <stdio.h>

int main() {
    int marcaA, marcaB, marcaC, marca;

    printf("Digite a quantidade de chuteiras da marca A: ");
    scanf("%d", &marcaA);

    printf("\nDigite a quantidade de chuteiras da marca B: ");
    scanf("%d", &marcaB);    

    printf("\nDigite a quantidade de chuteiras da marca C: ");
    scanf("%d", &marcaC);    

    printf("Existem %d chuteiras da marca A\n", marcaA);
    printf("Existem %d chuteiras da marca B\n", marcaB);
    printf("Existem %d chuteiras da marca C\n", marcaC);

    printf("\nExistem %d chuteiras da marca A, %d da marca B, %d da marca C\n\n", marcaA, marcaB, marcaC);

    printf("\t\t Quantidade de Chuteiras em Estoque\n");
    printf("\t\tMarca A \t Marca B \t Marca C\n");
    printf("\t\t  %d      \t   %d    \t   %d\n\n", marcaA, marcaB, marcaC);
}