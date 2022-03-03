#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Tabuada do %d\n", numero);

    printf("\t%d x 1 = %d\n", numero, numero*1);
    printf("\t%d x 2 = %d\n", numero, numero*2);
    printf("\t%d x 3 = %d\n", numero, numero*3);
    printf("\t%d x 4 = %d\n", numero, numero*4);
    printf("\t%d x 5 = %d\n", numero, numero*5);
    printf("\t%d x 6 = %d\n", numero, numero*6);
    printf("\t%d x 7 = %d\n", numero, numero*7);
    printf("\t%d x 8 = %d\n", numero, numero*8);
    printf("\t%d x 9 = %d\n", numero, numero*9);
    printf("\t%d x 10 = %d\n", numero, numero*10);
}