#include <stdio.h>

int main() {
    int num;

    printf("Escreva um numero na base decimal: ");
    scanf("%d", &num);

    printf("\nO numero %d na base octal e: %o\n", num, num);
    printf("\nO numero %d na base hexadecimal e: %x\n", num, num);
}