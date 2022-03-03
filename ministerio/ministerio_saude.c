#include <stdio.h>

int main() {
    int suspeitos, confirmados, mortes, total_dados;

    printf("Preencha com as seguintes informações sobre a Dengue em Brasilia: \n");
    printf("\tCasos Suspeitos: ");
    scanf("%d", &suspeitos);

    printf("\tCasos Confirmados: ");
    scanf("%d", &confirmados);

    printf("\tQuantidade de Mortes: ");
    scanf("%d", &mortes);

    printf("\nInformações sobre a dengue em Brasilia: \n");
    printf("\tCasos Suspeitos: %d\n", suspeitos);

    printf("\tCasos Confirmados: %d\n", confirmados);

    printf("\tQuantidade de Mortes: %d\n", mortes);

    total_dados = suspeitos + confirmados + mortes;
    printf("\n\tTotal de Dados: %d\n", total_dados);
}