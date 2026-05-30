#include <stdio.h>

int main() {
    float mat[3][3];
    int i, j, linha;

    // Leitura da matriz
    printf("Digite os elementos da matriz 3x3 (float):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("mat[%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }

    // Leitura da linha desejada
    do {
        printf("\nQual linha deseja exibir? (0, 1 ou 2): ");
        scanf("%d", &linha);
    } while (linha < 0 || linha > 2);

    // Exibição da linha
    printf("\nElementos da linha %d:\n", linha);
    for (j = 0; j < 3; j++) {
        printf("mat[%d][%d] = %.2f\n", linha, j, mat[linha][j]);
    }

    return 0;
}
